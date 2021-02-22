#include<stdio.h>
#include<math.h>
main()


{
	float i,j,k,a,b,c;
	clrscr();

	for(i=1;i<=30;i++)
	{
		for(j=1;j<=i;j++)
		{
			a=sqrt(i*i+j*j);
			b=a-(int)a;
			if(b==0)
			printf("\n%.0f %.0f %.0f",a,i,j);
		}
	}
	getch();
}
