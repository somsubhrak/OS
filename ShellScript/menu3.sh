echo -e "1)copy\n2)remove\n3)move\n4)rename\n"
ch=1
until [ $ch -eq 5 ]
do
read -p "Enter choice: " ch
case $ch in
	1) read -p "Source file path: " src
	   read -p "Destination file path: " des
	   cp "$src" "$des"
	   ;;
	2) read -p "File name: " file
	   rm "$file"
	    ;;
	3) read -p "Source File path: " src
	   read -p "Destination file path: " des
	   mv "$src" "$des"
	   ;;
	4) read -p "Current filename: " old
	   read -p "New filename: " new
	   mv "$old" "$new"
	   ;;
	5) exit;;
	*) echo Invalid choice
esac
done
