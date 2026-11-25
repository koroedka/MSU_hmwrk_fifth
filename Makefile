all: 5_main.o 5_func.o 5_print_array.o
	gcc 5_main.o 5_func.o 5_print_array.o -o 5 && rm -f *.o

5_main.o: 5_main.c 5_head.h
	gcc -c 5_main.c

5_func.o: 5_func.c 5_head.h
	gcc -c 5_func.c

5_print_array.o: 5_print_array.c 5_head.h
	gcc -c 5_print_array.c