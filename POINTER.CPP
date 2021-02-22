#include<iostream.h>
#include<conio.h>
main()

{
	int *z=new int;
	clrscr();
	*z=5;
	cout<<z;
	delete z;
	z=new int;
	cout<<z;
	getch();
	return 0;
}