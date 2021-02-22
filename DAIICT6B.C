/* Print  * * * * *
	   * * * *
	    * * *
	     * *
	      *         */
#include<stdio.h>
main()

{
	int a,b,c,n,d=0;
	clrscr();

	printf("Enter the number:");
	scanf("%d",&n);
	for(a=n;a>0;a--)
	{
		d++;
		for(b=1;b<d;b++)
		printf(" ");
		for(c=1;c<=a;c++)
		{
		printf("* ");
		}
		printf("\n");
	}
	getch();
}