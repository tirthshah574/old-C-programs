//Check a given number for palindrome number.(Ex. 12321)
#include<stdio.h>
main()

{
	int r,n,x=0,c;
	clrscr();

	printf("\nEnter the number");
	scanf("%d",&n);
	c=n;

	while(n!=0)
	{
		r=n%10;
		x=x*10+r;
		n=n/10;

	}
       //use if u not understand    > printf("%d",x); <

	if(x==c)
	printf("\nPalindrome number");
	else
	printf("\nNot a Palindrome number");
	getch();
}