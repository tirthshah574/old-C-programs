#include<stdio.h>
main()

{
	int a;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&a);

	if(a>0)
	{
		printf("Positive");
		if(a%2==0)
		printf(" Even");
		else
		printf(" odd");
	}
	else if(a<0)
	{
		printf("Negative");
		if(a%2==0)
		printf(" Even");
		else
		printf(" Odd");
	}
	else
	printf("Zero");
	getch();
}