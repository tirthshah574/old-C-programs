#include<stdio.h>
#include<conio.h>
main()

{
	long int a=0,b,c,i,j,k;
	clrscr();

	for(i=0;i<1000;i++)
	{
		if(i%5==0||i%3==0)
		a=a+i;
	}
	printf("%li",a);
	getch();
}