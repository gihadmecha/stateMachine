exeFile = main
sourceFile = main.c 
exeFileRm = main.exe


all:
	gcc -o $(exeFile) stateMachine.h stateMachine.c states.h states.c $(sourceFile)
	./$(exeFile) 
	del $(exeFileRm)

# gcc -o main myBasics.c myArray.c myString.c struct.c stack.c queue.c main.c 
# ./main
# rm main

#run:
#	./$(exeFile)	

#clean:
#    rm $(exeFile)
