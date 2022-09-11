#!/bin/bash

#Welcome message to the user
echo "====>Welcome<===="

#This check the username and prints to the user.
echo -e "Your are current login name is $(echo $USER | tr 'a-z' 'A-Z')\n"

#Let check the operating system information
echo "====>Operating system Info.<===="
echo "OPERATING SYSTEM: $(uname -o)"
echo "KERNEL NAME: $(uname -s)"
echo "KERNEL RELEASE: $(uname -r)"
echo -e "KERNEL VERSION: $(uname -v)\n"

#let check the GIT INFO
echo "====>GIT INFO<===="
echo -e "$(git --version)\n"

#Let check for betty
echo "====>Betty C Standard Validator<===="
if [ -f /bin/betty ]
then
	echo -e "Betty is available on your $(uname -o) Environment\n"
else
	echo -e "Betty is missing\nPlease check and move to the right location(/bin) or follow the step bellow"
	echo "1.	Visit Github Website"
	echo "2.	Search for betty"
	echo "3.	Clone the repository"
	echo -e "4.	Check the rules in the Repository details and follow for proper installation\n"
fi

#Let check for Gcc version
echo "====>GCC Version<===="
echo $(gcc --version | head -n 1)
echo -e "\n"

#Preset file permission
echo "====>Preset File Permision<===="
echo "PRESET PERMISSION: $(umask)"
echo -e "To change your present permission use 'umask (permission_type)'\n"

#Do you wish to continue to check your system info
read -p "Do you wish to continue checking your system info: Enter y/n: " CIFO

if [ $CIFO = 'y' ]
then 
		echo "====>File System<===="
		echo "NUMBER OF FILES: $(find -type f | wc -l)"
		echo "NUMBER OF DIRECTORIES: $(find -type d | wc -l)"
		echo "NUMBER OF LINKS: $(find -type l | wc -l)"
		FIL=$(find -type f | wc -l)
		DIR=$(find -type d | wc -l)
		LIN=$(find -type l | wc -l)
		echo -e "TOTAL: $(($FIL + $DIR + $LIN))\n"

		echo "====>C files<===="
			CFILES="$(sudo find ~ -type f -iname *.c)"
			echo "::::::::::PATHNAME :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::FILENAME::::::::::"

			#The loop for the c files
			for eachFil in $CFILES
			do
					echo "$(dirname $eachFil) ======= $(basename $eachFil)"
			done

		echo "TOTAL: $(find -type f -iname *.c | wc -l) files"
		echo -e "END\n"

else 
		echo "Thanks for using this Program"
		echo -e "Thanks from Timmy-Ezekiel\n"
fi
