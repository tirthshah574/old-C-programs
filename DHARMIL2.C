#include<stdio.h>
main()

{
	long int a=1,b,c,i,j,k,l,m;
	clrscr();
	m=8;
	for(i=0;i<m;i++)
       {
		for(l=m-1;l>i;l--)
		printf("  ");
		k=a;
		for(j=0;j<i+1;j++)
		{
			c=k%10;
			printf("  %li ",c);
			k=k/10;
		}
		printf("\n");
		a=a*11;
	}
	getch();
}