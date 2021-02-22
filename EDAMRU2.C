#include<stdio.h>
main()
{
	int a=10,b=1,c,i,j,k;
	clrscr();

	for(i=1;i<=4;i++)
	printf("%d ",i);
	for(i=4;i>=1;i--)
	printf("%d ",i);
	printf("\n");
	for(i=5;i>=0;i--)
	{
		b++;
		for(k=5;k>=i;k--)
		printf(" ");
		printf("%d",b);
		for(j=0;j<=a;j++)
		printf(" ");
		printf("%d",b);
		printf("\n");
		a=a-2;
	}
	a=0;
	b=8;
	for(i=0;i<7;i++)
	printf(" ");
	printf("%d",i+1);
	printf("\n");
	for(i=0;i<=5;i++)
	{
		b--;
		for(k=5;k>=i;k--)
		printf(" ");
		printf("%d",b);
		for(j=0;j<=a;j++)
		printf(" ");
		printf("%d",b);
		printf("\n");
		a=a+2;
	}
	for(i=1;i<=4;i++)
	printf("%d ",i);
	for(i=4;i>=1;i--)
	printf("%d ",i);
	getch();
}