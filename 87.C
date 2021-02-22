//Display sum of 1+3+5+....+N
#include<stdio.h>
main()

{
	int a=0,b,c;
	clrscr();

	printf("\nEnter the number:");
	scanf("%d",&c);

	for(b=1;b<=c;b=b+2)
	{
		a=a+b;
	}
	printf("\n Sum of odd nos. till %d is %d",c,a);
	getch();
}