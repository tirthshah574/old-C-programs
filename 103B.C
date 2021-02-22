/*print 1
	22
	333
	4444*/
#include<stdio.h>
main()

{
	int i,a,b,n;
	clrscr();

	printf("Enter a number:");
	scanf("%d",&i);

	for(a=1;a<=i;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d",a);
		}
		printf("\n");
	}
	getch();
}