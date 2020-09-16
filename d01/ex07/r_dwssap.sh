cat /etc/passwd | sed 's/#.*//g;s/:.*//g; /^$/ d'| sed -n 'p;n'| rev | sort -r | sed -n $FT_LINE1,$FT_LINE2\p | xargs | sed 's/ /, /g;s/$/./'
