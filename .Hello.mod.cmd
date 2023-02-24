cmd_/home/stud/Desktop/Modules/Hello.mod := printf '%s\n'   Hello.o | awk '!x[$$0]++ { print("/home/stud/Desktop/Modules/"$$0) }' > /home/stud/Desktop/Modules/Hello.mod
