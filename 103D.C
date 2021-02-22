/*print  1
	 10
	 101
	 1010          */
#include<stdio.h>
main()
{
	int a,b,n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);

	for(a=1;a<=n;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",b%2);
		}
		printf("\n");
	}
	getch();
}