main: main.o read_pipe.o background.o write_pipe.o
	gcc -o main main.o read_pipe.o background.o write_pipe.o pipes/pipes.h background/background.h

main.o: app/main.c
	gcc -Ibackground -c app/main.c -o main.o

background.o: background/background.c
	gcc -Ipipes -c background/background.c -o background.o

read_pipe.o: pipes/read_pipe.c
	gcc -c pipes/read_pipe.c -o read_pipe.o

write_pipe.o: pipes/write_pipe.c
	gcc  -c pipes/write_pipe.c -o write_pipe.o
