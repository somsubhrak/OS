echo -e "1)Add\n2) Subtract\n3) Multiply\n4) Divide\nEnter choice: "
read ch
echo Enter two numbers
read a b
case $ch in
	1) sum=`expr $a + $b`
	   echo Sum: $sum;;
	2) d=`expr $a - $b`
	   echo difference: $d;;
	3) p=`expr $a \* $b`
	   echo Product: $p;;
	4) q=`expr $a / $b`
	   echo Quotient: $q;;
	5) exit;;
	*) echo Invalid choice
esac
