#include<stdio.h>
main()

{
	int a,b,c,i,j,k=0,p;
	char o[10];
	clrscr();
	printf("enter a number:");
	scanf("%d",&a);

	printf("Enter a number in roman:");
	scanf("%s",o);
	strupr(o);
	p=strlen(o);
	for(i=0;i<p;i++)
	{
		if(o[i]=='C'&&o[i+1]=='M')
			k=k+900;
		else if(o[i]=='M'&&o[i-1]!='C')
			k=k+1000;
		else if(o[i]=='C'&&o[i+1]=='D')
			k=k+400;
		else if(o[i]=='D'&&o[i-1]!='C')
			k=k+500;
		else if(o[i]=='X'&&o[i+1]=='C')
			k=k+90;
		else if(o[i]=='C'&&o[i-1]!='X')
			k=k+100;
		else if(o[i]=='X'&&o[i+1]=='L')
			k=k+40;
		else if(o[i]=='L'&&o[i-1]!='X')
			k=k+50;
		else if(o[i]=='I'&&o[i+1]=='X')
			k=k+9;
		else if(o[i]=='X'&&o[i-1]!='I')
			k=k+10;
		else if(o[i]=='I'&&o[i+1]=='V')
			k=k+4;
		else if(o[i]=='V'&&o[i-1]!='I')
			k=k+5;
		else if(o[i]=='I')
			k=k+1;
	}
	printf("Yor multiplication in Roman:");
	a=k*a;
	p=a;
	c=a/1000;
	if(c!=0)
	for(i=0;i<c;i++)
	printf("M");
	a=a%1000;
	if(a>=900&&a<1000)
	{
		printf("CM");
		goto y;
	}
	c=a/500;
	if(c!=0)
	printf("D");
	a=a%500;
	if(a>=400&&a<500)
	{
	printf("CD");
	goto z;
	}
	c=a/100;
	if(c!=0)
	for(i=0;i<c;i++)
	printf("C");
	z:
	y:
	a=a%100;
	if(a>=90&&a<100)
	{
	printf("XC");
	goto n;
	}
	c=a/50;
	if(c!=0)
	printf("L");
	a=a%50;
	c=a/10;
	if(a>=40&&a<=49)
	printf("XL");
	else
	for(i=0;i<c;i++)
	printf("X");
	n:
	a=a%10;
	c=a/5;
	if(a==9)
	printf("IX");
	else if(c!=0)
	{
		printf("V");
		a=a%5;
		for(i=0;i<a;i++)
		printf("I");
	}
	else
	{
	if(a==4)
	printf("IV");
	else
	for(i=0;i<a;i++)
	printf("I");
	}
	printf("\nMultiplication in decimal is %d",p);
	getch();

}