#include<stdio.h>
main()

{
	int a,b,c,*i,**j,*k;
	clrscr();
	a=5;
	b=7;
	c=6;
	printf("\nLocation of a variable %u",&a);
	printf("\nValue in location of a is %d",*(&a));
	i=&a;
	j=&i;
	printf("\nLocation of a is %u",i);
	printf("\nLocation of i is %u",&i);
	printf("\nLocation of i is %u",j);
	getch();
}