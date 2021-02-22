#include<stdio.h>
main()

{
	int i,j,k=10;
	clrscr();

	for(i=1;i<=k;i=i+2)
	{
		for(j=k;j>i;j--)
		printf(" ");
		for(j=i;j>=1;j--)
		printf("%d ",j);
		printf("\n");
	}
	getch();
}