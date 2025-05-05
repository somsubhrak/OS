echo -e "1)Current directory content\n2) present working directory\n3) Calendar\n4) exit\nEnter choice: "
read ch
case $ch in
	1) ls;;
	2) pwd;;
	3) cal;;
	4) exit;;
	*) echo Invalid choice
esac
