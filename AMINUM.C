#include<stdio.h>
main()

{
	int a,b,c,i,j,k;
	clrscr();


	for(i=1;i<10000;i++)
	{
		if(i==c)
		continue;
		a=0;
		b=0;
		for(j=1;j<i;j++)
		{
			 if(i%j==0)
			 a=a+j;
		}
		for(j=1;j<a;j++)
		{
			if(a%j==0)
			b=b+j;
		}
		if(b==i)
		{
		c=a;
		printf("%d   %d\n",i,a);
		}

	}

	getch();
}