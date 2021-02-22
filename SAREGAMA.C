#include<stdio.h>
#include<dos.h>

main()

{
	int i,j;
	char k;
	j:
	clrscr();
	k=getche();
	if(k=='s')
	{
		sound(240);
		delay(500);
		nosound();
	}
	else if(k=='r')
	{
		sound(270);
		delay(500);
		nosound();
	}
	else if(k=='g')
	{
		sound(300);
		delay(500);
		nosound();
	}
	else if(k=='m')
	{
		sound(320);
		delay(500);
		nosound();
	}
	else if(k=='p')
	{
		sound(360);
		delay(500);
		nosound();
	}
	else if(k=='d')
	{
		sound(400);
		delay(500);
		nosound();
	}
	else if(k=='n')
	{
		sound(450);
		delay(500);
		nosound();
	}
	else if(k=='s')
	{
		sound(520);
		delay(500);
		nosound();
	}
	if(k!=13)
	goto j;
}