# The conversation script language

Source: the lexer `1068:1692` (read) and the 51 real files `CONV0000.TXT` to `CONV0050.TXT` in `gl00_txt.000` (read as data). The conversation **runtime**
(how a node is shown and how entries are chosen) is not read yet; the meanings below come from the file contents and are marked [data].

## Keys [code: codes; data: counts across the 51 files]

| Key | Code | Uses | Meaning |
|---|---|---|---|
| `conversation = NNN.txt ; Name` | 1 | 48 | file header (first line, the rest is a comment) |
| `speaker = n, Name` | 0xf | 88 | speaker number and name: 0 is Mike (the player), 1 and up are the other people |
| `declare = Var` | 2 | 167 | declares a game variable used by the conversation |
| `import = Var()` | 3 | 167 | imports it from the game variables (the `()` is part of the value) |
| `node = Name` | 4 | 268 | a node: a menu or state of the conversation |
| `fallthrough = n, Node` | 5 | 99 | [data] which node to go to when the node has no visible entry left; `n` is a speaker or flag number |
| `entry = Name[, initial][, persist]` | 6 | 947 | one choice: `initial` makes it visible at the start (507 entries; 431 have no flag; 6 `initial, persist`; 3 `persist`); `persist` keeps it after use [data, from the flag bits read in `1068:2418`: initial = bit 0, persist = bit 1] |
| `text = NAME` | 9 | 939 | the player's line: the name of a text resource `NAME.TXT` in `gl00_txt` (the words after `;` are only comments) |
| `message = NAME` | 0xd | 1,109 | the other person's reply: a speech resource and text, same naming (`DSB004`, `DGT004`) |
| `messagestop` | 0xe | 0 | not used in the data |
| `unhide = Entry` | 8 | 942 | makes another entry of the node visible |
| `hide = Entry` | 7 | 519 | hides an entry |
| `goto = Node` | 10 | 1,151 | the next node after this entry |
| `goto = (Var) Node` | 10 | | conditional: used in the first node of a file to pick the start by game variables, for example `goto = (GothGivesCrossbow) GoAway` |
| `goto = exit, Node` | 10 | 6 | [data] leave the conversation and make `Node` (here `Greeting`) the node used the next time |
| `assign = ...` | 0xb | 318 | assignment of game variables (same term syntax as `Change=`) |
| `destroy = (Var) entry` | 0xc | 65 | [data] removes an entry for good when the variable condition holds (for example `destroy = (RamirezHatesRita) why`) |

Value cleaning is done by the lexer: spaces and non-ASCII characters are removed (see the contract), so `goto = (GothMission) Brought` is read as
`(GothMission)Brought`.

## Resources

Every `text` and `message` name is a resource of its own: `DMN056.TXT` (the player's words) and `DSB004.TXT` (the reply), with the speech as
`DSB004.WAV` in a `gl00__d?` speech package [data, names match]. The text glue holds 2,601 `.TXT` resources.

## Runtime (read from `1068:1030`, `1068:0edc`, `1068:15b8`; the selection handler in `DIALOGPROC` is unread)

- **The conversation is a modal Windows dialog** (`ds2dialog`, procedure `DIALOGPROC`) with a list box of choices; the game loop is suspended while it is open.
- **Starting node.** The first node's `goto = (expression) Node` lines are tried in order; the first whose expression is true gives the node shown. Expressions are
  compiled to postfix and evaluated by `inferred_eval_rpn`: variables and numbers with `+ - * / & | ^ < = >` (comparisons give 1 or 0).
- **The list of choices** is the node's entries whose flags satisfy `flags & 5 == 1` (shown, not hidden), each with its text.
- **Fallthrough.** `fallthrough = n, Node`: after building the list, if the number of listed choices is not above `n` the conversation continues in `Node`
  (so `fallthrough = 0, NeedDrugs` means "when no choice is left, go to NeedDrugs").
- `hide`, `unhide`, `destroy` act on entries by name (resolved once after loading); `persist` keeps an entry after it was chosen.
