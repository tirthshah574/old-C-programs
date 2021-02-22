#include<stdio.h>
#include<dos.h>
main()

{
	char i;
	clrscr();

	i=getche();
	sound(100);
	delay(2000);
	nosound();
	getch();
}
