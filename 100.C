//Display all ASCII characters
#include<stdio.h>
main()


{
	int a;
	clrscr();

	for(a=1;a<=255;a++)
	{
		printf("\t%d=%c",a,a);
	}
	getch();
}
