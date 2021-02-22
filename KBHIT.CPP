#include<conio.h>
#include<iostream.h>
main()
{
	int a;
	clrscr();

	for(a=0;!kbhit();a++)
	{
		cout<<"*";
	}
	getch();
}