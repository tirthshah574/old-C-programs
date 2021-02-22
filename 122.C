#include<stdio.h>
main()

{
	char a[20];
	int i,j=0,k=0;
	clrscr();

	puts("Enter a String");
	gets(a);


	for(i=0;i<20;i++)
	{
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='U'||a[i]=='u')
		j++;
	}
	printf("%d",j);
	getch();
}