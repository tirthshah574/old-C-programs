//Display A to Z and a to z alphabets
#include<stdio.h>
main()

{
	int a;
	clrscr();

	for(a=65;a<=90;a++)
	printf( " %c",a);

	for(a=97;a<=122;a++)
	printf( " %c",a);

	getch();
}