#include<stdio.h>
main()

{
	long int a,b,c,i,j=0,k,l;
	clrscr();
	printf("Krishnamurty numbers are");
	for(l=1;l<1000;l++)
	{       j=0;
		a=l;
		k=a;
		while(a!=0)
		{
			c=1;
			b=a%10;
			for(i=1;i<=b;i++)
			c=c*i;
			j=j+c;
			a=a/10;
		}
	if(k==j)
	printf("\t%li",k);
	}
	getch();
}