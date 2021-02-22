#include<stdio.h>
#include<stdlib.h>
main()

{
	int j,k;
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
	for(j=0;j<i*3;j++)
	{
		k=random(100);
	}
	printf("%d",k);
	getch();
}