#include<stdio.h>
main()
{
	long long int i,j,k,a=600851475143,b=0,c;
	clrscr();

	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			c=0;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				c++;
			}
			if(c==0)
			{
				if(i>b)
				b=i;
			}
		}
	}
	printf("%lld",b);
	getch();
}
