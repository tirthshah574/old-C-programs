#include<stdio.h>
main()

{
	int i,j,k=2,a=1,b=65,c=1,l=-1;
	clrscr();

	for(i=1;i<20;i++)
	{
		if(c==i)
		{
		for(j=0;j<i;j++)
		printf("*");
		c=c+3;
		}
		else if(k==i)
		{
		l=-1;
		for(j=0;j<i;j++)
		{
			printf("%d",a);
			a++;
			if(a>9)
			{
				l++;
			}
		}
		k=k+3;
		for(j=0;j<l;j++)
		printf("\b");
		for(j=0;j<l;j++)
		printf(" ");
		}
		else
		{
			for(j=0;j<i;j++)
			{
				printf("%c",b);
				b++;
			}
		}
		printf("\n");
	}
	getch();
}