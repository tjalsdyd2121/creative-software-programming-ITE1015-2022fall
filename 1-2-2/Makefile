input_num: main.o input.o
        gcc -o input_num main.o input.o

main.o: main.c
        gcc -c main.c
input.o: input.c
        gcc -c input.c

clean:
        rm input_num main.o input.o