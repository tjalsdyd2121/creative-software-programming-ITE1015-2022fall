hello_world: main.o print.o
        gcc -o hello_world main.o print.o

main.o: main.c
        gcc -c main.c

print.o: print.c
        gcc -c print.c

clean:
        rm hello_world main.o print.o