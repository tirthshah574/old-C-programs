//Display a series of 10,20,30,......,100
#include<stdio.h>
main()

{
	int a=10;
	clrscr();

	do
	{
		printf(" \n%d",a);
		a=a+10;
	}
	while(a<=100);

	getch();
}