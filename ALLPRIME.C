#include<stdio.h>
main()

{
	int i,j,k,a,b=0,c,d[100];
	clrscr();


	for(i=2;i<=80;i++)
	{
		c=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c==0)
		{
			d[b]=i;
			b++;
		}

	}
	for(i=0;i<b;i++)
	{
		for(j=i;j<b;j++)
		{
			if(d[i]+d[j]==80)
			printf("\n%d  %d",d[i],d[j]);
		}
	}
	getch();
}