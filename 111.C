#include<stdio.h>
main()

{
	int a[3][5];
	int i,j,s[3];
	clrscr();

	for(i=0;i<=2;i++)
	{
		s[i]=0;
		for(j=0;j<=4;j++)
		{
			printf("\nEnter marks of student %d and subject %d : ",i+1,j+1);
			scanf("%d",&a[i][j]);
			s[i]=s[i]+a[i][j];
		}
		printf("\nSum of marks of student %d is %d",i+1,s[i]);
		printf("\nAverage of marks of student %d is %d",i+1,s[i]/5);
	}
	getch();

}