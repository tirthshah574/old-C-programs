#include<stdio.h>
main()
{
	extern int a99;
	clrscr();
	a99=15;

	printf("%d",a99);

	getch();
}