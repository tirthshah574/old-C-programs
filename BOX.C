#include<stdio.h>
main()

{
	int i,j=0,k=0,b,c,d,e;
	char a[50];
	clrscr();

	for(i=0;i<50;i++)
	{
		a[i]='\0';
	}
	c:
	k++;
	a[k-1]=getche();
	clrscr();
	for(i=0;i<=k+1;i++)
	printf("-");
	printf("\n");
	printf("|");
	for(i=0;i<k;i++)
	printf("%c",a[i]);
	printf("|");
	printf("\n");
	for(i=0;i<=k+1;i++)
	printf("-");
	if(a[k-k]!='\0')
	{
	if(a[k-1]==13)
	goto d;
	else
	goto c;
	}

	d:
}