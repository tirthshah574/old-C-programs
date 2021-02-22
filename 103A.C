/* *
   **
   ***
   **** */
#include<stdio.h>
main()

{
	int i,a,b,n=0;
	clrscr();

	printf("Enter a number:");
	scanf("%d",&i);

	for(a=1;a<=i;a++)
	{
		for(b=1;b<=a;b++)

			printf("*");
		printf("\n");

	}
	getch();
}