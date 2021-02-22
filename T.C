#include<stdio.h>
main()
{       char a[10],b[10];
	int i;
	clrscr();
	gets(a);
	gets(b);
	i=strcat(a,b);
	printf("%s",a);

	getch();
}