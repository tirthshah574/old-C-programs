#include<stdio.h>
main()

{
	int a[3][3],b[3][3];
	int i,j,s;
	clrscr();

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("a%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf( "b%d%d:",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			s=a[i][j]+b[i][j];
			printf(" %d",s);
		}
		printf("\n");
	}
	getch();
}