//Calculate addition of 1 to N integer numbers
#include<stdio.h>
main()

{
	int a=0,b,n;
	clrscr();

	printf("Enter N :");
	scanf("%d",&n);

	for(b=1;b<=n;b++)
	{
	a=a+b;
	}
	printf("\nAddition of 1 to %d is %d",n,a);

	getch();
}