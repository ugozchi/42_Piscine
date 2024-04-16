cat /etc/passwd | grep -v '^#' | sed -n '2~2p' | cut -d: -f1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ', ' | sed 's/(.*\),/\1./' | sed 's/,/_, /g; s/,
