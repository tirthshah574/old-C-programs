#include<stdio.h>
main()
{
	int a=9,b=6,c;
	clrscr();
	swap(&a,&b);
	printf("%d %d",a,b);
	getch();
}
swap(int *p,int *q)
{
	int *c;
	*c=*p;
	*p=*q;
	*q=*c;
	return 0;
}