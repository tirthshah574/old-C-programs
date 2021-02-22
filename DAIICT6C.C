/* PRINT  *
	  12
	  ***
	  1234
	  *****
			*/
#include<stdio.h>
main()

{
	int a,b,c=0,n,d=0;
	clrscr();

	printf("Enter the number:");
	scanf("%d",&n);
	for(a=1;a<=n;a=a+2)
	{
		for(b=1;b<=a;b++)
		{

		printf("%d",c);
		}
		printf("\n");
	}
	getch();
}