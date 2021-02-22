/*print  ****
	 ***
	 **
	 *          */
#include<stdio.h>
main()
{
	int a,b,n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);

	for(a=n;a>0;a--)
	{
		for(b=1;b<=a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}