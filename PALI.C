#include<stdio.h>
#include<string.h>
main()
{
	char a[10];
	clrscr();
	gets(a);
	pali(a[10]);
	getch();
}
pali(char b[10])
{
	char c[10];
	strcpy(c,b);
	printf("%s",c);
	strev(b);
	printf("%s",b);
	if(b==c)
	printf("P");
	else
	printf("N");
	return '\0';
}