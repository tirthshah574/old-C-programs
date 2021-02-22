#include<stdio.h>
main()
{
	char a[10];
	int i,j,k=0,b;
	clrscr();

	gets(a);
	strupr(a);
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		if(a[i]=='C'&&a[i+1]=='M')
			k=k+900;
		else if(a[i]=='M'&&a[i-1]!='C')
			k=k+1000;
		else if(a[i]=='C'&&a[i+1]=='D')
			k=k+400;
		else if(a[i]=='D'&&a[i-1]!='C')
			k=k+500;
		else if(a[i]=='X'&&a[i+1]=='C')
			k=k+90;
		else if(a[i]=='C'&&a[i-1]!='X')
			k=k+100;
		else if(a[i]=='X'&&a[i+1]=='L')
			k=k+40;
		else if(a[i]=='L'&&a[i-1]!='X')
			k=k+50;
		else if(a[i]=='I'&&a[i+1]=='X')
			k=k+9;
		else if(a[i]=='X'&&a[i-1]!='I')
			k=k+10;
		else if(a[i]=='I'&&a[i+1]=='V')
			k=k+4;
		else if(a[i]=='V'&&a[i-1]!='I')
			k=k+5;
		else if(a[i]=='I')
			k=k+1;
	}
	printf("%d",k);
	getch();

}