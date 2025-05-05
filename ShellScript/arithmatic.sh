echo Enter two numbers
read a b
sum=`expr $a + $b`
diff=`expr $a - $b`
p=`expr $a \* $b`
div=`expr $a / $b`
echo The sum is $sum
echo The difference is $diff
echo The product is $p
echo The quotient is $div
