#include<time.h>
#include<stdlib.h>

main()

{
	int r;
	clrscr();
	srand(time(0));
	r = rand()%10;

	printf("%d",r);
	getch();
}