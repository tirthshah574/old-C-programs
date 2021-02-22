#include<stdio.h>
main()

{
	int i,j,k,a,b,c;
	clrscr();

	for(i=2;i<=10;i++)
	{
	       //a=0;
	       for(j=2;j<i;j++)
	       {
			a=0;
			c=0;
			b=a;
			for(k=2;k<j;k++)
			{
				if(j%k==0)
				c++;
			}
			if(c==0)
			{
			a=a+j;
			}
			if(b==a)
			i++;
			if(a>=i)
			break;
	       }
		if(a==i)
		printf("%d\n",i);
	}
	getch();
}