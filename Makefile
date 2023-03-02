test:
	gcc -o test1 Array-out-of-bounds.c
	gcc -o test2 doublefree.cpp
	gcc -o test3 heapoverflow.c
	gcc -o test4 integeroverflow.c
	gcc -o test5 stackoverflow.cpp
	gcc -o test6 stringformat.c
	gcc -o test7 UAF.c
