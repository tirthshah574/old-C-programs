#include<stdio.h>
main()

{
	int a,b,c;
	clrscr();

	printf("Enter number:");
	scanf("%d",&b);

	for(a=100;a<(100+(b-1));a++)
	{
	    c=a+c;
	}
	printf("%d",c);
	getch();

}