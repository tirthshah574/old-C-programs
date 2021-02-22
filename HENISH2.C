#include<stdio.h>
main()

{
	int i,j,k=0;
	a:
	clrscr();
	for(i=1;i<=26;i++)
	{
		if(j==i)
		printf("%c",j+64);
		else
		printf("%d",i);
		printf("\t");
	}

	k++;
	if(k<=1)
	{
		printf("\nEnter a number:");
		scanf("%d",&j);
		goto a;
	}
	getch();

}