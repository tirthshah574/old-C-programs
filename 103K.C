/*print     *
	   * *
	  * * *
		     */
#include<stdio.h>
main()
{
	int a,b,c,d,n;
	clrscr();

	printf("Enter a number:");
	scanf("%d",&n);
	d=n-1;
	for(a=1;a<=n;a++)
	{
		for(c=d;c>0;c--)
		printf(" ");
		for(b=1;b<=a;b++)
		printf("* ");
		printf("\n");
		d--;
	}

	getch();
}