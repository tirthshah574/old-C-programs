#include<stdio.h>
main()

{
	int a,b,s,d;
	clrscr();
	printf("Enter:");
	scanf("%d%d%d",&a,&b,&d);
	s=sum(a,b,d);

	printf("%d",s);
	getch();
}

sum(a,b,d)
{
	int c;
	c=a+b+d;

	return(c);
}