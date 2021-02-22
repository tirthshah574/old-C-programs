#include<stdio.h>
main()
{
	int i=0,j,k;
	clrscr();

	j=r(i);
	printf("%d",j);
	getch();

}

r(i)
{
	i++;
	if(i<10)
	r(i);
	else
	return(i);
}