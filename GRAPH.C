#include<stdio.h>
main()

{
	int i,j,k=0,a[10],b[10],c,d=0,l,m=0;
	clrscr();

	printf("Enter how many variables u wnt to enter:");
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		printf("X%d:",i+1);
		scanf("%d",&b[i]);
		printf("Y%d:",i+1);
		scanf("%d",&a[i]);
		d=a[i]>d ? a[i]:d;
		d=b[i]>d ? b[i]:d;
		m=a[i]<m ? a[i]:m;
		m=b[i]<m ? b[i]:m;
	}
	for(i=d;i>=m;i--)
	{
		for(j=m;j<=d;j++)
		{
			c=0;
			for(k=0;k<l;k++)
			{
			if(i==a[k]&&j==b[k])
			{
			c++;
			printf(" *");
			}
			}
			if(c==0)
			printf("  ");
		}
		printf("\n");

	}
	getch();
}