/*print  A
	 AB
	 ABC
	 ABCD          */
#include<stdio.h>
main()
{
	int a,b,n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);

	for(a=65;a<=n+65;a++)
	{
		for(b=65;b<=a;b++)
		{
			printf("%c",b);
		}
		printf("\n");
	}
	getch();
}