//Calculate Kilometers,meters,Centimeters,Millimeters from total given millimeters
#include<stdio.h>
main()

{
	int km,m,c,mm;
	printf("\nEnter number of millimeters:");
	scanf("%d",&mm);

	km=mm/1000000;
	mm=mm%1000000;
	m=mm/1000;
	mm=mm%1000;
	cm=mm/10;
	mm=mm%10;

	printf("%d Kilometres %d Metres
}