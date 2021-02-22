#include<stdio.h>
#include<time.h>
#include<stdlib.h>
main()

{
	int r,a,b,c=0;
	clrscr();
	srand(time(0));
	r = rand()%100;

	//printf("%d",r);

	b:
	printf("\nGuess a number:");
	scanf("%d",&a);
	clrscr();

	if(a!=r)
	{
		c++;
		if(a>r)
		printf("\nNumber is smaller than ur guess");
		else
		printf("\nNumber is greater than ur guess");
		goto b;
	}
	else
	{
		printf("\nU guess the right number in %d trials",c);
	}
	getch();

}