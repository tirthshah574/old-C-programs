#include<stdio.h>
main()
{
	int a[10];
	int i,j,k=0,t;
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("Value=");
		scanf("%d",&a[i]);
	}
	printf("Removable value:");
	scanf("%d",&j);
	for(i=0;i<10;i++)
	{
		if(a[i]==j)
		{
			t:
			i++;
			k++;
			if(a[i]==j)
			goto t;
		}
	      printf("\nValue is %d",a[i]);
	}
	for(i=10;i>10-k;i--)
	{
	a[i]=0;
	printf("\nValue is %d",a[i]);
	}
	getch();
}