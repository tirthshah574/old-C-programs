//Display multiplication table of given number
#include<stdio.h>
main()

{
	int a,b,c;
	clrscr();

	printf("\nEnter the number:");
	scanf("%d",&a);
	printf("\nTill which number you want the table:");
	scanf("%d",&c);

	for(b=1;b<=c;b++)
	printf("\n%dx%d=%d",a,b,a*b);

	getch();
}