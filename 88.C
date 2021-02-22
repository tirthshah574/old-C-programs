//Display factors of given integer
#include<stdio.h>
main()

{
	int a,b;
	clrscr();

	printf("\nEnter the number:");
	scanf("%d",&a);

	for(b=1;b<=a;b++)
	{
		if(a%b==0)
		printf("\nFactor of %d is %d",a,b);
	}

	getch();
}