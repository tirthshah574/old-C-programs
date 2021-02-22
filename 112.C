#include<stdio.h>
main()

{
	int a[5][3];
	int i,j,st=0,pt=0,pr=0,p=0,x=0,y=0,z=0;
	clrscr();

	for(i=0;i<=4;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Salesman %d Product %d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(j==0)
			{
			p=10;
			x=x+p*a[i][j];
			}
			else if(j==1)
			{
			p=20;
			y=y+p*a[i][j];
			}
			else if(j==2)
			{
			p=30;
			z=z+p*a[i][j];
			}

			st=st+p*a[i][j];
		}
		printf("\nTotal of %d salesman is %d",i+1,st);
		st=0;
	}
	printf("\nTotal of Product of 1 2 3 is %d %d %d",x,y,z);
	getch();
}