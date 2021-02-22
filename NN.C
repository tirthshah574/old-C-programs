#include<stdio.h>
#include<conio.h>
main()

{
	int b=5;
	int *p;
	clrscr();
	p=&b;
	printf("%u",*p);
	getch();
}