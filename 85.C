//Find out factorial of a given number (5!=5x4x3x2x1=120)
#include<stdio.h>
main()

{
	float  a=1,b,c;
	clrscr();

	printf("Enter nmber of which you want factorial:");
	scanf("%f",&c);

	for(b=1;b<=c;b++)
	{
		a=a*b;
	}
	printf("%.2f!=%.2f",c,a);
	getch();
}