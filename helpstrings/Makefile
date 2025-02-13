help.exe: help.c
    gcc help.c -o help.exe
    
mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c -o mystrings.o

main.exe: main.c mystrings.o
	gcc main.c mystrings.o -o main.exe

clean:
	del *.exe *.o
