#include<conio.h>
#include<stdio.h>

main()

{
	int i,n,a,b=0,c;
	clrscr();

	printf("Enter numbers");

	for(a=1;a<=5;a++)
	{
		scanf("%d",&n);
		b=b>n ? b:n;
	}
	printf("number is : %d",b);
	getch();
}
