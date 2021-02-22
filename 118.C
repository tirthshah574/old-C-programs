#include<stdio.h>
main()

{
	char a[10];
	int i,j=0;
	clrscr();

	printf("Enter a string:");
	gets(a);

	for(i=0;i<10;i++)
	{
		if(a[i]=='\0')
		break;
		j++;
	}
	printf("Your string length is %d",j);
	getch();
}