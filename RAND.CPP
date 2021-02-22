#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
main()
{
	int a;
	clrscr();
	srand(time(0));
	a=rand()%20000;
	cout<<a;
	sound(a);
	delay(500);
	nosound();
	getch();
}