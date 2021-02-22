#include<stdio.h>
main()
{
	char n[100],s[100];
	int l;
	clrscr();

	printf("Enter ur name:");
	gets(n);
	l=strlen(n);
	n[l]=32;
	n[l+1]='\0';
	printf("Enter ur surname:");
	gets(s);
	strcat(n,s);
	printf("%s",n);
	getch();
}