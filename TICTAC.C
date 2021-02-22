#include<stdio.h>
main()

{
	int a[5],b[5],c=0,i,j,k=1,l;
	clrscr();

	for(i=0;i<5;i++)
	{
		printf("Player 1:");
		scanf("%d",&a[i]);
		printf("Player 2:");
		scanf("%d",&b[i]);
	}
	for(i=0;i<3;i++)
	{

		for(j=0;j<3;j++)
		{
			c++;
			for(k=0;k<5;k++)
			{
			if(a[k]==c)
			printf("0 ");
			else if(b[k]==c)
			printf("x ");
			}
		}
		printf("\n");
	}
	getch();
}