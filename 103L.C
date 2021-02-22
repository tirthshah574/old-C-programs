/* print    *
	   * *
	  * * *
	   * *
	    *
		   */
#include<stdio.h>
main()
{
	int a,b,c,d,n,e,f;
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
	d++;
	for(e=n-1;e>0;e--)
	{
		d++;
		for(c=d;c>0;c--)
		printf(" ");
		for(f=e;f>0;f--)
		printf("* ");
		printf("\n");
	}

	getch();
}


