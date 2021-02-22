/*print  A
	 BB
	 CCC
	 DDDD         */
#include<stdio.h>
main()
{
	int a,b,n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);

	for(a=65;a<=65+n;a++)
	{
		for(b=65;b<=a;b++)
		{
			printf("%c",a);
		}
		printf("\n");
	}
	getch();
}