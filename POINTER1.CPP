#include<iostream.h>
#include<conio.h>
main()
{
	int *p = NULL;
	clrscr();
	cout<<p<<endl;
	p=new int[20];
	cout<<p<<endl;
	delete p;
	cout<<p;

	getch();
}
