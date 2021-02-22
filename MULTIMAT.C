#include<stdio.h>
main()

{
	int a[3][3]={{1,0,0},{0,1,0},{0,0,1}},b[3][3]={{1,0,0},{0,1,0},{0,0,1}};
	int c[3][3],i,j,k,x=0;
	clrscr();

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				x=x+a[i][k]*b[k][j];
			}
			c[i][j]=x;
			x=0;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",c[i][j]);
		}
		printf("\n");
	}
	getch();
}