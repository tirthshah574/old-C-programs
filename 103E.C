/*print  1
	 01
	 101
	 0101          */
#include<stdio.h>
main()
{
	int a,b,n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);

	for(a=1;a<=n;a++)
	{
		for(b=a;b>0;b--)
		{
			printf("%d",b%2);
		}
		printf("\n");
	}
	getch();
}