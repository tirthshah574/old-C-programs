#include<stdio.h>
main()

{
	int a ,b,c,i,j=0,k;
	clrscr();


	printf("Enter a number:");
	scanf("%d",&a);

	while(a!=0)
	{
		c=1;
		b=a%10;
		for(i=1;i<=b;i++)
		c=c*i;
		j=j+c;
		a=a/10;
	}
}