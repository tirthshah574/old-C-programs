#include<stdio.h>
main()

{
	char a[10];
	int i=10,j=0,k=0;
	clrscr();

	printf(" Enter a string:");
	gets(a);

	k:
	i--;
	if(a[i]!='\0')
	goto k;
	else
	{
		for(i=i;i>=0;i--)
		printf("%c",a[i]);
	}
	getch();
}