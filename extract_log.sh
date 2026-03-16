#!/bin/bash
# Extracts git commit messages from this repo and copies them to clipboard
# Usage: bash extract_log.sh
# Then paste into the 42 Exam Coach app

git log --pretty=format:"%s" | pbcopy 2>/dev/null || \
git log --pretty=format:"%s" | xclip -selection clipboard 2>/dev/null || \
git log --pretty=format:"%s" | clip 2>/dev/null || \
git log --pretty=format:"%s"

echo ""
echo "Git log extracted. If not auto-copied, copy the output above manually."
