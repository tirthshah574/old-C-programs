/* PRINT  *
	  12
	  ***
	  1234
	  *****
			*/
#include<stdio.h>
main()

{
	int a,b,c,n;
	clrscr();

	printf("Enter the number:");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=a;b++)
		{
		if(a%2==0)
		printf("%d",b);
		}
		for(c=65;c<=a+64;c++)
		{
		if(a%2!=0)
		printf("%c",c);
		}
		printf("\n");
	}
	getch();
}