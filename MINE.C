#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()

{
	int i=0,b,c,j,a[16],r=0,n;
	char k[16]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
	char x,y,z=48,l;
	clrscr();

	srand(time(0));
	n = rand()%16;

	printf("%d",i);

	clrscr();
	b=0;
	for(j=0;j<4;j++)
	{
		for(c=0;c<4;c++)
		{
			printf(" %c",k[b]);
			b++;
		}
		printf("\n");
	}

	a[r]=n;
	r++;
	if(r<16)
	goto y;
	for(i=0;i<16;i++)
	{
		printf("\n%d",a[i]);
	}

	getch();
}