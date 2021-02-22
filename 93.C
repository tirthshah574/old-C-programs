//Check a given number for a armstrong number (Ex. 153->1^3+5^3+3^3=153)
#include<stdio.h>
#include<math.h>
main()

{
	int n,r,a=1,b=0,c,d=0,e,r1;
	clrscr();

	printf("\nEnter number:");
	scanf("%d",&n);
	c=n;
	e=n;

	while(e!=0)
	{
	     r1=e%10;
	     d++;
	     e=e/10;
	}

	while(n!=0)
	{
		r=n%10;
		a=pow(r,d);
		b=a+b;
		n=n/10;
	}

	printf("\n%d",d);

	printf("\n%d",b);

	if(b==c)
	printf("\nArmstrong number");

	else
	printf("\nNot a Archimedes number");

	getch();
}