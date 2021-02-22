#include<stdio.h>
main()

{
	char a,b,c,d;
	clrscr();

	a=getch();
	printf("*");
	b=getch();
	printf("*");
	c=getch();
	printf("*");
	printf("\nPress a if you want to see");
	d=getch();
	if(d=='a')
	printf("\n%c %c %c",a,b,c);
	if(a=='a'&&b=='b'&&c=='c')
	printf("\nWelcome");
	else
	printf("\nGet lost");
	getch();

}