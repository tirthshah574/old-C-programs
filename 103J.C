/*print     *
	   **
	  ***
	 ****       */
#include<stdio.h>
main()
{
	int a,b,n,c,d;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	d=n-1;

	for(a=1;a<=n;a++)
	{
		for(c=1;c<=d;c++)
		printf(" ");
		for(b=1;b<=a;b++)
		{
			printf("*");
		}
		printf("\n");
		d--;
	}
	getch();
}