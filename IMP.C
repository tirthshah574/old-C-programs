#include<stdio.h>
main()

{
	int i,j,k,a=0,b,c;
	clrscr();
	printf("Enter number:");
	scanf("%d",&c);

	for(i=1;i<=c;i=i+2)
	{
		for(k=c;k>i;k--)
		printf(" ");
		for(j=1;j<=i;j++)
		{
		a++;
		if(a<=i)
		{
		printf("%d ",a);
		}
		else
		{
		a--;
		goto b;
		}
		}

		for(j=j;j<=i;j++)
		{
		b:
		a--;
		printf("%d ",a);
		}
		printf("\n");
	}
	getch();
}

