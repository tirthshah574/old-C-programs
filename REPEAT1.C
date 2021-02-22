#include<stdio.h>
main()
{
	int i=0,j;
	char a[10];
	clrscr();
	printf("Enter a string");
	gets(a);
	j=strlen(a);
	r(j);
	getch();

}

r(j)
{
	j--;
	printf("%c",a[j]);
	if(j>0)
	r(j);
}