//Display sum of series 1+1/2+1/3+1/4+......1/N
#include<stdio.h>
main()

{
	float a,b,c;
	clrscr();

	printf("\nEnter the number:");
	scanf("%f",&c);

	for(b=1;b<=c;b++)
	{
		a=a+1/b;
	}

	printf("%.2f",a);
	getch();
}