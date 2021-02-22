#include<stdio.h>
main()
{
	int a,b=1,c,i,j,k;
	clrscr();

	printf("Enter a number:");
	scanf("%d",&c);
	a=((c/2)+2)*2;

	for(i=1;i<=c/2;i++)
	printf("%d ",i);
	for(i=c/2;i>=1;i--)
	printf("%d ",i);
	printf("\n");
	for(i=(c/2+1);i>=0;i--)
	{
		b++;
		for(k=(c/2+1);k>=i;k--)
		printf(" ");
		printf("%d",b);
		for(j=0;j<=a;j++)
		printf(" ");
		printf("%d",b);
		printf("\n");
		a=a-2;
	}
	a=0;
	b=c-1;
	for(i=0;i<=c-2;i++)
	printf(" ");
	printf("%d",i+1);
	printf("\n");
	for(i=0;i<=(c/2+1);i++)
	{
		a=a+2;
		b--;
		for(k=(c/2+1);k>=i;k--)
		printf(" ");
		printf("%d",b);
		for(j=0;j<=a;j++)
		printf(" ");
		printf("%d",b);
		printf("\n");
	}
	for(i=1;i<=c/2;i++)
	printf("%d ",i);
	for(i=c/2;i>=1;i--)
	printf("%d ",i);
	getch();
}