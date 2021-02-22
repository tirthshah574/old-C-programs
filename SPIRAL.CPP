#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
main()
{
	int n[100],b=16,i=0,j,k=4;
	clrscr();
	for(j=0;j<16;j++)
	{
		   n[i]==b;
		   b--;
		   if(i+1%4==0)
		   {
			 n[i]=b;
			 if(i<15)
			 i=i+4;
		   }
		   if(i==15)
		   {
			n[i]=b;
			i--;
		   }

	}
	getch();
}