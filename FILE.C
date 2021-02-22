#include<stdio.h>
main()

{

	FILE *a;
	int i=0;
	clrscr();

	a=fopen("abc.exe","r");
	i=getc(a);
	fclose(a);
	a=fopen("abc.exe","w");
	i++;
	putc((int)i,a);
	fclose(a);
	printf("%d",i);
	getch();
}