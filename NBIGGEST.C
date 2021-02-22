#include<stdio.h>

main()

{
	int i=0,n,a,b=0,c;
	clrscr();

	printf("How many numbers you want to check:");
	scanf("%d",&c);
	printf("Enter numbers:");

	for(a=1;a<=c;a++)
	{
		scanf("%d",&n);
		if(n>b)
		b=n;

	}

	printf("Biggest number is %d",b);
	getch();
}
