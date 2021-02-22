#include<stdio.h>
main()

{
	char n[10],m[10],s[10];
	clrscr();

	printf("Enter First Name:");
	gets(n);
	printf("Enter Middle Name:");
	gets(m);
	printf("Enter Surname:");
	gets(s);

	printf("\n %s %s %s",n,m,s);
	printf("\n %c.%c.%s",n[0],m[0],s);
	getch();
}