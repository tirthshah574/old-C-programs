#include<stdio.h>
main()

{
	int a[10]={2,5,-3,7,8,9,-10,4,5,-7},b[5]={1,-10,10,2,-7},c[5];
	int i,j,k=0,t;
	clrscr();

	for(i=0;i<10;i++)
	{
		a[i];
		for(j=0;j<5;j++)
		{
			if(a[i]==b[j])
			{
				c[k]=a[i];
				k++;
			}
		}
	}
	for(j=0;j<k;j++)
	{
		printf("\n%d",c[j]);
	}
	getch();
}