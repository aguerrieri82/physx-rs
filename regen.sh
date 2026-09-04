#!/bin/bash
set -euo pipefail

# Kept for compatibility. Binding and native-layout generation is part of the
# normal build and is invalidated automatically when PhysX headers change.
cargo build
