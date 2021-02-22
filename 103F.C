/*print  1
	 23
	 456
		 */
#include<stdio.h>
main()
{
	int a,b,n,c=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);

	for(a=1;a<=n;a++)
	{
		for(b=1;b<=a;b++)
		{
			c++;
			printf("%d",c);
		}
		printf("\n");
	}
	getch();
}