#include<stdio.h>
main()

{
	int a[3][3],b[3][3],c[3][3];
	int i,j,k,s=0,m,t=1;
	z:
	clrscr();
	printf("Enter values for first matrix:\n");
	for(i=0;i<=2;i++)
	{
		printf("|");
		for(j=0;j<=2;j++)
		{
			a[i][j]=getche();
			if(a[i][j]=='\b')
			{
			goto z;
			}
			printf(" ");
			a[i][j]-=48;
		}
		printf("|");
		printf("\n");
	}
	y:
	printf("Enter values for second matrix:\n");
	for(i=0;i<=2;i++)
	{
		printf("|");
		for(j=0;j<=2;j++)
		{
			b[i][j]=getche();
			if(b[i][j]=='\b')
			{
			clrscr();
			goto y;
			}
			printf(" ");
			b[i][j]-=48;
		}
		printf("|");
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=0;
			for(k=0;k<=2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("Result:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}
	getch();
}