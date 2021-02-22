//Input marks of N students and count number of failed students
#include<stdio.h>
main()

{
	int m,a,p=0,f=0,s;
	clrscr();

	printf("Of how many students you want to check marks:");
	scanf("%d",&s);

	printf("Enter the marks:");

	for(a=1;a<=s;a++)
	{
		scanf("%d",&m);
		if(m>=33)
		p++;
		else if(m>0&&m<33)
		f++;
		else
		{
			printf("\nEnter the valid marks");
			break;
		}
	}
	printf("\n%d students are passed %d students are failed",p,f);
	getch();
}