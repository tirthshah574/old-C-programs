//Display all digits of a given number in reverse order.(Ex. 123 -> 321)
#include<stdio.h>
main()

{
	int n,r,c;
	clrscr();

	printf("\nEnter the number:");
	scanf("%d",&n);

	while(n!=0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
	getch();
}