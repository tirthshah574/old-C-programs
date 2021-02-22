//Count total number of positive negative and zero values from N given integers
#include<stdio.h>
main()

{
	int i1,i,a,p=0,n=0,z=0;
	clrscr();
	printf("How many integers you want to check?");
	scanf("%d",&i1);
	printf("Enter integers:");

	for(a=1;a<=i1;a++)
	{
		scanf("%d",&i);
		if(i>0)
		p++;
		else if(i<0)
		n++;
		else if(i==0)
		z++;
		else
		{
		printf("Enter valid value");
		break;
		}
	}
	printf("Positive integers are %d negative are %d zeros are %d",p,n,z);
	getch();
}
