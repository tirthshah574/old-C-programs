#include<stdio.h>
main()

{
	int a=-1;
	char b[100];
	clrscr();
	c:
	a++;
	b[a]=getche();
	if(b[a]==13)
	printf("\n");
	if(b[a]!='`')
	goto c;

}
