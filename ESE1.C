#include<stdio.h>
void main()
{
	int i=5;
	clrscr();
	switch(i)
	{
		case 3:printf("three");
		case 4:printf("Four");
		case 5:printf("Five");
		case 6:printf("Six");break;
		case 7:printf("Seven");
		default:printf("default");
	}
	getch();
}