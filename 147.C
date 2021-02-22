#include<stdio.h>
main()

{
	int a=5,b=7,*i,*j;
	clrscr();

	i=&a;
	j=&b;

	printf("Addition of two variables is %d",*i+*j);
	getch();
}