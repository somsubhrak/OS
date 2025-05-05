echo Enter three numbers
read a b c
if { [ $a -gt $b ] && [ $a -lt $c ]; } || { [ $a -gt $c ] && [ $a -lt $b ]; }
then
	echo $a is the second greatest
elif { [ $b -gt $a ] && [ $b -lt $c ]; } || { [ $b -gt $c ] && [ $b -lt $a ]; }
then
	echo $b is the second greatest
else
	echo $c is the second greatest
fi
