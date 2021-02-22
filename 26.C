//Calculate Hours and minutes from given seconds or minutes
#include<stdio.h>
main()

{
	long int h,m,s;
	char a;
	clrscr();
	printf("\nEnter 'S' for seconds and 'M' for inputting minutes:");
	scanf(" %c",&a);

	if(a=='s' || a=='S')
	{
		printf("\nEnter seconds:");
		scanf("%li",&s);
		h=s/3600;
		s=s%3600;
		m=s/60;
		s=s%60;

		printf("%li hours %li minutes %li seconds",h,m,s);
	}

	else if(a=='m' || a=='M')
	{
		printf("\nEnter minutes:");
		scanf("%li",&m);
		h=m/60;
		m=m%60;

		printf("%li hours %li minutes",h,m);
	}
	getch();
}