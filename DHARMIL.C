#include<stdio.h>
main()

{
	int i,j,k=71;
	clrscr();
	for(i=0;i<7;i++)
	{
		for(j=65;j<72;j++)
		{
			if(j==k)
			j=32;
			printf("%c",j);
		}

		for(j=70;j>64;j--)
		{
			if(j==k)
			j=32;
			printf("%c",j);
		}
		printf("\n");
		k--;
	}
	getch();
}