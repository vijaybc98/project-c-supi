abc.exe: main.o big2.o big3.o fact.o fibonance.o palindrome.o reverse.o sort.o sum2.o
	gcc -o abc.exe main.o big2.o big3.o fact.o fibonance.o palindrome.o reverse.o sort.o sum2.o
main.o:main.c
	gcc -c main.c
big2.o:big2.c
	gcc -c big2.c
big3.o:big3.c
	gcc -c big3.c
fact.o:fact.c
	gcc -c fact.c
fibonance.o:fibonance.c
	gcc -c fibonance.c
palindrome.o:palindrome.c
	gcc -c palindrome.c
reverse.o:reverse.c
	gcc -c reverse.c
sort.o:sort.c
	gcc -c sort.c
sum2.o:sum2.c
	gcc -c sum2.c  
