#include<stdio.h>
main()

{
	int a[10],b[10],c[10];
	int i;
	clrscr();

	for(i=0;i<10;i++)
	{
		b[i]=c[i]=0;
		printf("Enter values:");
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		b[i]=a[i];
		else
		c[i]=a[i];
	}
	for(i=0;i<10;i++)
	{
		printf("\nA=%d B=%d C=%d",a[i],b[i],c[i]);
	}
	getch();
}