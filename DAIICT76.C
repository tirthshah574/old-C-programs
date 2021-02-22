#include<stdio.h>
main()
{
	char a[20];
	int i,j,k;
	clrscr();

	printf("Enter a string:");
	gets(a);

	for(i=0;i<5;i++)
	{
		a[i]=a[i]<a[i+1] ? a[i]:a[i+1]
	}
	printf("%s",a);
	getch();
}