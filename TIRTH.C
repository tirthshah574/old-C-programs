#include<stdio.h>
main()

{
	int a=0,b=11;
	clrscr();

		while(a<10&&b>=0)
		{
		a++;
		b--;
		printf("\n%d + %d = %d",a,b,a+b);
		}

	getch();
}