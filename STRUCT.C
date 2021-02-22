#include<stdio.h>
main()

{
	struct name
	{
	int a;
	char b;
	};

	struct name n1;
	clrscr();

	scanf("%d",&n1.a);
	printf("%d\n",n1.a);
	scanf(" %c",&n1.b);
	printf("%c",n1.b);

	getch();

}