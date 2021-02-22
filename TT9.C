#include<stdio.h>
#include<conio.h>
main()

{
	float i,j,p,q,s,a=0;
	clrscr();
	printf("How many products you want to enter:");
	scanf("%f",&i);
	for(j=1;j<=i;j++)
	{
		printf("\nProduct ID:");
		scanf("%f",&p);
		if(p==1)
		p=5.000;
		if(p==2)
		p=21.0;
		if(p==3)
		p=10.5;
		if(p==4)
		p=7.25;
		if(p==5)
		p=99.75;
		if(p==6)
		p=102.5;
		if(p==7)
		p=3.175;
		if(p==8)
		p=148.0;
		if(p==9)
		p=900.25;
		if(p==10)
		p=1009.50;
		printf("\nQuantity:");
		scanf("%f",&q);
		s=p*q;
		printf("\nSubtotal is %.3f",s);
		a=a+s;
	}
	printf("\nTotal bill is %.2f",a);
	getch();
}