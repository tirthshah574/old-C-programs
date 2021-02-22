//Check for a prime number(Ex.11,13,17,19)
#include<stdio.h>
main()

{
	int n,a,b=0,c;
	clrscr();

	printf("\nEnter the number:");
	scanf("%d",&n);

	for(a=2;a<n;a++)
	{
		if(n%a==0)
		{
			b=1;
		}
	}
	if(b==0)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not a Prime Number");
	}
	getch();
}