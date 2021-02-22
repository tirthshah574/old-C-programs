#include<stdio.h>
main()
{
	int x[10],y[10],z[10];
	int a,b,c=0,d=0,m,n;
	clrscr();
	scanf("%d",&m);
	scanf("%d",&n);
	for(a=0;a<m;a++)
		scanf("%d",&x[a]);
	for(n=0;b<n;b++)
		scanf("%d",&y[b]);

	for(a=0;a<m;a++)
		for(b=0;b<n;b++)
		if(x[a]==y[b])
		{
			d++;
			c=x[a];
			z[a]=c;
		}
		}
		for(a=0;a<d;a++)
		printf("\n%d",z[a]);
}