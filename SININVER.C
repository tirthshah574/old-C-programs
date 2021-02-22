#include<stdio.h>
#include<math.h>
main()

{
	float i=0,j=1,k;
	clrscr();

	for(i=0;i<2;i=i+0.000001)
	{
		if(sin(i)==1)
		break;
	}
	printf("%f",i);
	getch();

}
