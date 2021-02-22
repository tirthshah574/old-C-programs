#include<stdio.h>
main()

{
	int m[5];
	int i,j,t=0;
	clrscr();

	for(i=0;i<=4;i++)
	{
		printf("Enter the values:");
		scanf("%d",&m[i]);
	}
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(m[i]>m[j])
			{
				t=m[i];
				m[i]=m[j];
				m[j]=t;
			}
		}
		printf(" %d",m[i]);

	}
	getch();

}