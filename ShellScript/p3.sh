echo enter number of lines
read n
for (( i=1; i<=$n; i++ ))
do
	for (( j=1; j<=$n-i; j++ ))
	do
		echo -n " "
	done
	for (( k=1; k<=i; k++ ))
	do
		echo -n $i
	done
	echo
done
