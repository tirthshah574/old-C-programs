#include<stdio.h>
main()

{
	int i,j,k,a,b,c;
	clrscr();

	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{       if(i==0||i==7)
			{
			printf("* ");
			}
			else
			{
			if(j==0||j==7)
			printf("* ");
			else
			printf("  ");
			}
		}
		if(i>=2&&i<=5)
		{
			for(j=0;j<12;j++)
			printf("\b");
			for(j=0;j<4;j++)
			{
			printf("* ");
			}
			if(i!=2&&i!=5)
			{
			for(j=0;j<6;j++)
			printf("\b");
			for(j=0;j<2;j++)
			{
				printf("  ");
			}
			}
		}
		printf("\n");
	}
	getch();
}