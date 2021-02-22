#include<stdio.h>
main()

{
	char a[20],k;
	int i,j=0;
	clrscr();

	printf("Enter a string:");
	gets(a);

	printf("Wanna check the occurence of given letter then damn enter it:");
	scanf(" %c",&k);

	for(i=0;i<20;i++)
	{
		if(a[i]==k)
		j++;
	}
	printf("%d",j);
	getch();
}