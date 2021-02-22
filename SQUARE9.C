#include<stdio.h>
main()

{
	int a,b,c,i,j,k;
	clrscr();

	for(i=0;i<6;i++)
	{
		if(i==0&&i==6)
		{
			for(j=0;j<6;j++)
			printf("*");
		}
		else
		{
			printf("*");
			for(j=0;j<4;j++)
			printf(" ");
			printf("*");
		}
		printf("\n");
	}
	getch();
}