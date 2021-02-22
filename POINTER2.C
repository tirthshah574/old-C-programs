#include<iostream.h>
#include<conio.h>
main()
{
	int a=12,b=1;
	int *x=&a;
	int *y=&b;
	clrscr();
	cout<<*x / *y<<endl;
	getch();
}
