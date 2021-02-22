#include<stdio.h>
main()

{
	int i,j,k,l,f,m;
	clrscr();

	printf("Enter a number:");
	scanf("%d",&f);
	l=f/2;
	m=f-4;
	for(i=0;i<f;i++)
	{
		for(j=f-1;j>=i;j--)
		printf(" ");
		for(j=0;j<i;j++)
		printf("* ");
		if(i==l)
		{
			for(k=0;k<f-2;k++)
			{
			printf("\b");
			}
			for(k=0;k<m;k++)
			printf(" ");
			l++;
			//f++;
			m=m-2;
		}
		printf("\n");
	}
	getch();
}