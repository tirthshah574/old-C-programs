#include<stdio.h>
main()

{
	int i,j,k,a,b,c;
	clrscr();

	for(i=2;i<=1000;i++)
	{
	       a=0;
	       for(j=2;j<i;j++)
	       {
			c=0;
			for(k=2;k<j;k++)
			{
				if(j%k==0)
				c++;
			}
			if(c==0)
			{
			a=a+j;
			}
			if(a>=i)
			break;
	       }
		if(a==i)
		printf("%d\n",a);
	}
	getch();
}