//Check for given number is perfect number (Ex.123->1+2+3=1*2*3=6)
#include<stdio.h>
main()

{
	int n,r,d=0,e=1;
	clrscr();
	printf("\nEnter a number:");
	scanf("%d",&n);

	while(n!=0)
	{
		r=n%10;
		d=d+r;
		e=e*r;
		n=n/10;
	}
	if(d==e)
	printf("Perfect number");
	else
	printf("Not a perfect number");

       //Use this if u dont understand > printf("%d %d",d,e); <

	getch();
}