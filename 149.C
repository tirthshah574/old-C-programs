#include<stdio.h>
main()

{
	int a=2,b=6,c,i,j,k;
	clrscr();

	swap(&a,&b);

	printf("%d %d",a,b);
	getch();
}

swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}