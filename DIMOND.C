#include<stdio.h>
main()

{
	int a,b,c,i,j,k;
	clrscr();
	a=7;
	b=2;
	c=8;

	for(i=0;i<10;i++)
	{
		for(j=10;j>i;j--)
		printf(" ");
		for(j=0;j<i;j++)
		printf("* ");
		if(i==a)
		{
		      for(k=0;k<c;k++)
		      printf("\b");
		      for(k=0;k<b;k++)
		      printf(" ");
		      a=a+1;
		      b=b+2;
		      c=c+2;
		}
		printf("\n");
	}
	a=10;
	b=8;
	c=14;
	for(i=10;i>0;i--)
	{
		for(j=10;j>i;j--)
		printf(" ");
		for(j=0;j<i;j++)
		printf("* ");
		if(i==a)
		{
		      for(k=0;k<c;k++)
		      printf("\b");
		      for(k=0;k<b;k++)
		      printf(" ");
		      a--;
		      b=b-2;
		      c=c-2;
		      if(a==6)
		      a=0;
		}
		printf("\n");
	}

	getch();
}