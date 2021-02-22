//Calculate years,months,days from given total days
#include<stdio.h>
main()

{
	int d,m,y;
	clrscr();

	printf("\nEnter days:");
	scanf("%d",&d);

	y=d/365;
	d=d%365;
	m=d/30;
	d=d%30;

	printf("%d years %d months %d days",y,m,d);

	getch();
}