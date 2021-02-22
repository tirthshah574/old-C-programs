#include<stdio.h>
main()

{
	int a,b,c,i,j,k;
	clrscr();

	printf("Enter a number:");
	scanf("%d",&c);

	for(i=0;i<c/2;i++)
	{
		printf("**");
		for(a=0;a<i;a++)
		printf("*");
		printf("#");
		for(b=i;b<c/2;b++)
		printf("*");
		printf("#");
		for(b=i;b<c/2;b++)
		printf("*");
		printf("#");
		for(b=0;b<i+2;b++)
		printf("*");
		printf("\n");
	}
	printf("#");
	for(i=0;i<(c+6)/2;i++)
	printf("*#");
	printf("\n");
	for(i=(c/2)-1;i>=0;i--)
	{
		printf("**");
		for(a=0;a<i;a++)
		printf("*");
		printf("#");
		for(b=i;b<c/2;b++)
		printf("*");
		printf("#");
		for(b=i;b<c/2;b++)
		printf("*");
		printf("#");
		for(b=i+2;b>0;b--)
		printf("*");
		printf("\n");
	}
	getch();
}