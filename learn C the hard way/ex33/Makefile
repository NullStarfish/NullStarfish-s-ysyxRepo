ex33: list_algos.c list.c test.c
	gcc -std=c99 list_algos.c list.c test.c -o ex33

ex33_std: list_algos_std.c list.c test.c
	gcc list_algos_std.c list.c test.c -o ex33_std

mergesort: list_algos.c list.c mergesort.c
	gcc mergesort.c list_algos.c list.c -o mergesort -lm

bubblesort: list_algos.c list.c bubblesort.c
	gcc bubblesort.c list_algos.c list.c -o bubblesort -lm