#include<stdio.h>
main()

{
	int a=0,k;
	char i[25],j[25];
	clrscr();

	gets(i);

	while(i[a]!='\0')
	{
	       a++;
	}
	for(k=0;k<a;k++)
	{
		printf("%c",i[k]);
	}
	//printf("%d",a);
	getch();
}