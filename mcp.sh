ORIG="NULL"

for arg in "$@"
do
	if [[ $ORIG == "NULL" ]]
	then ORIG=$arg
		if [[ ! -d $ORIG ]]
		then echo "$ORIG is not a existing folder"; exit;
		fi
	else
	cp $ORIG/$arg .
	fi
done
