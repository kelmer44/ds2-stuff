#!/bin/sh
# Run Ghidra headless against the DS2 analysis project with writable per-run cache dirs.
# Read-only by default; set DS2_WRITE=1 to save changes (back up analysis/ghidra-project first).
# Usage: re/tools/ghidra_headless.sh Script.java [args...]
# Do not run while the project is open in the Ghidra GUI.
set -e
ROOT=$(cd "$(dirname "$0")/../.." && pwd)
T=${DS2_GHIDRA_TMP:-/private/tmp/ds2-ghidra}
mkdir -p "$T/cache" "$T/settings" "$T/tmp" "$T/home"
SCRIPT=$1
shift
RO=-readOnly
if [ -n "$DS2_WRITE" ]; then
	RO=
fi
env JAVA_HOME=/opt/homebrew/opt/openjdk/libexec/openjdk.jdk/Contents/Home \
	JAVA_TOOL_OPTIONS="-Duser.home=$T/home -Dapplication.cachedir=$T/cache -Dapplication.settingsdir=$T/settings -Dapplication.tempdir=$T/tmp -Djava.io.tmpdir=$T/tmp" \
	/opt/homebrew/Caskroom/ghidra/11.4.2-20250826/ghidra_11.4.2_PUBLIC/support/analyzeHeadless \
	"$ROOT/analysis/ghidra-project" DS2Analysis -process DARK0001.EXE $RO -noanalysis \
	-scriptPath "$ROOT/re/ghidra" -postScript "$SCRIPT" "$@" \
	-log "$T/run.log" -scriptlog "$T/script.log"
