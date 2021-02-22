#include<stdio.h>
main()

{
	int a=10,b=1,c,i,j,k;
	clrscr();
	printf("1");
	for(i=0;i<14;i++)
	printf(" ");
	printf("1\n");
	for(i=1;i<=5;i++)
	{
		b++;
		printf("%d",b);
		for(j=1;j<=i;j++)
		printf(" ");
		printf("%d",b);
		for(k=a;k>0;k--)
		printf(" ");
		printf("%d",b);
		for(j=1;j<=i;j++)
		printf(" ");
		printf("%d",b);
		printf("\n");
		a=a-2;
	}
	a=0;
	b=7;
	for(i=6;i>=1;i--)
	{
		printf("%d",b);
		for(j=1;j<=i;j++)
		printf(" ");
		printf("%d",b);
		for(k=0;k<a;k++)
		printf(" ");
		printf("%d",b);
		for(j=1;j<=i;j++)
		printf(" ");
		printf("%d",b);
		printf("\n");
		a=a+2;
		b--;
	}
	printf("1");
	for(i=0;i<14;i++)
	printf(" ");
	printf("1\n");
	getch();
}