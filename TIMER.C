#include<stdio.h>
#include<dos.h>
main()

{
	int a=10,b,c;
	clrscr();

	printf("Enter timer\nMinutes:");
	scanf("%d",&b);
	printf("Seconds:");
	scanf("%d",&c);
	a=c+(b*60);
	b:
	clrscr();
	if(b>1)
	printf("%d minutes %d seconds",b,c);
	else
	printf("%d minute %d seconds",b,c);
	a--;
	delay(100);
	if(c<1)
	{
		b--;
		c=60;
	}
	c--;
	if(a>0)
	goto b;

	sound(500);
	getch();
	nosound();
}