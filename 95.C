//Display the fibonacci series
#include<stdio.h>
main()

{
	long int a=-1,b=1,n=1,c,d;
	clrscr();
	printf("Enter the number till which u want a series:");
	scanf("%li",&d);

	while(n<=d)
	{
	n++;
	c=a+b;
	a=b;
	b=c;
	printf(" %li",c);
	}

	getch();
}