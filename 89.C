//Input two values and calculate average of all integers between these 2 num.
#include<stdio.h>
main()
{
	float a,b,c,d=0;
	clrscr();

	printf("\nEnter two numbers:");
	scanf("%f%f",&a,&b);
	c=a+1;

	while(c<b)
	{
	  d=c+d;
	  c++;
	}
	printf("\nSum is %.2f",d);

	getch();
}