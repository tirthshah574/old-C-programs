#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g,h,i,j,x,y=0,z;
	clrscr();

	printf("Enter:");
	scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

	for(x=1;x<=10;x++)
	{

	       y=y+x;
	}
	printf("%d",y);
	getch();
}