#include<stdio.h>
#include<conio.h>
main()

{
	int a,b,c[900],i,j,k=-1,x=0,y[4]={1,2,3,4},z=0,l=1,m;
	clrscr();

	p:
	printf("Enter any digit between 1 to 30:");
	scanf("%d",&a);
	if(a<0||a>30)
	goto p;
	b=a*a+1;
	m=a;
	while(m!=0)
	{
		z++;
		l++;
		if(y[0]==z)
		{
			for(i=0;i<m;i++)
			{
				k++;
				b--;
				c[k]=b;
			}
			y[0]+=4;
		}
		if(y[1]==z)
		{
			for(i=0;i<m;i++)
			{
				k=k+a;
				b--;
				c[k]=b;
			}
			y[1]+=4;
		}
		if(y[2]==z)
		{
			for(i=0;i<m;i++)
			{

				k--;
				b--;
				c[k]=b;
			}
			y[2]+=4;
		}
		if(y[3]==z)
		{
			for(i=0;i<m;i++)
			{
				k=k-a;
				b--;
				c[k]=b;
			}
			y[3]+=4;
		}
		if(l==2)
		{
			l=0;
			m--;
		}
	}
	for(i=0;i<a;i++)
	{
		   for(j=0;j<a;j++)
		   {
			printf(" %3d",c[x]);
			x++;
		   }
		   printf("\n");
	}

	getch();
	getch();
}
