//Calculate LCM for given two integers
#include<stdio.h>
main()

{
	int a,b,c,d,e,f;
	clrscr();

	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);

	if(a<b)
	{
		c=a;
		a=b;
		b=c;
	}

	for(d=b;d>0;d--)
	{
		if(a%d==0&&b%d==0)
		break;
	}

	  printf("%d LCM",a*b/d);


	  getch();


}