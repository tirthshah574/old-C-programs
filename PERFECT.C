#include<stdio.h>
main()

{
	int a=0,b,c,i,j,k;
	clrscr();

	for(i=1;i<=1000;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			a=a+j;
		}
		if(a==i)
		printf("\n%d",i);
		a=0;
	}
	getch();
}