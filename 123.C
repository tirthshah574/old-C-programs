#include<stdio.h>
main()
{
	char a[20];
	int i,j,k;
	clrscr();

	puts("Enter ur name");
	gets(a);

	j=0;
	while(a[j]!='\0')
	j++;

	for(i=0;i<j;i++)
	{
		if(a[i]<65||a[i]>124)
		{
		a[i]=32;
		}
	}
	printf("%s",a);
	getch();
}