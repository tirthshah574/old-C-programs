#include<stdio.h>
main()

{
	int a=8,b,c,i,j,k;
	clrscr();

	for(i=0;i<=8;i++)
	{
		for(j=8;j>i;j--)
		printf(" ");
		for(j=0;j<i;j++)
		printf("* ");
		if(i==8)
		break;
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<i;j++)
		printf("* ");
		for(j=a;j>0;j--)
		printf("  ");
		for(j=0;j<i;j++)
		printf("* ");
		printf("\n");
		a=a-2;
	}
	a=2;
	for(i=3;i>0;i--)
	{
		for(j=0;j<i;j++)
		printf("* ");
		for(j=a;j>0;j--)
		printf("  ");
		for(j=0;j<i;j++)
		printf("* ");
		printf("\n");
		a=a+2;
	}
	for(i=8;i>0;i--)
	{
		for(j=8;j>i;j--)
		printf(" ");
		for(j=0;j<i;j++)
		printf("* ");
		printf("\n");
	}
	getch();
}