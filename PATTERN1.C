#include<stdio.h>
main()

{
	int i,j,k,l;
	clrscr();

	for(i=1;i<=18;i++)
	{
		l=0;
		k=0;
		for(j=1;j<=i;j++)
		{
			if(j%2!=0)
			{
			l++;
			printf("%d ",l);
			}
			else
			{
			k++;
			printf("%c ",k+96);
			}
		}
		printf("\n");
	}
	getch();
}