#include<stdio.h>
main()

{
	int i,j,k=1,b=-1,c,d,e=0,f,n[9],g;
	char a[9]={'1','2','3','4','5','6','7','8','9'};
	c:
	clrscr();
	b=-1;
	for(i=0;i<3;i++)
	{
		printf("\n---------------\n");
		for(j=0;j<3;j++)
		{
			b++;
			if(b==d-1)
			a[b]='O';
			else if(b==f-1)
			a[b]='X';
			printf(" |%c| ",a[b]);
		}

	}
	printf("\n---------------\n");
	if(a[0]=='O'&&a[1]=='O'&&a[2]=='O')
	printf("Player 1 wins");
	else if(a[3]=='O'&&a[4]=='O'&&a[5]=='O')
	printf("Player 1 wins");
	else if(a[6]=='O'&&a[7]=='O'&&a[8]=='O')
	printf("Player 1 wins");
	else if(a[0]=='O'&&a[3]=='O'&&a[6]=='O')
	printf("Player 1 wins");
	else if(a[1]=='O'&&a[4]=='O'&&a[7]=='O')
	printf("Player 1 wins");
	else if(a[2]=='O'&&a[5]=='O'&&a[8]=='O')
	printf("Player 1 wins");
	else if(a[0]=='O'&&a[4]=='O'&&a[8]=='O')
	printf("Player 1 wins");
	else if(a[2]=='O'&&a[4]=='O'&&a[6]=='O')
	printf("Player 1 wins");
	else if(a[0]=='X'&&a[1]=='X'&&a[2]=='X')
	printf("Player 2 wins");
	else if(a[3]=='X'&&a[4]=='X'&&a[5]=='X')
	printf("Player 2 wins");
	else if(a[6]=='X'&&a[7]=='X'&&a[8]=='X')
	printf("Player 2 wins");
	else if(a[0]=='X'&&a[3]=='X'&&a[6]=='X')
	printf("Player 2 wins");
	else if(a[1]=='X'&&a[4]=='X'&&a[7]=='X')
	printf("Player 2 wins");
	else if(a[2]=='X'&&a[5]=='X'&&a[8]=='X')
	printf("Player 2 wins");
	else if(a[0]=='X'&&a[4]=='X'&&a[8]=='X')
	printf("Player 2 wins");
	else if(a[2]=='X'&&a[4]=='X'&&a[6]=='X')
	printf("Player 2 wins");
	else
	{
	for(i=0;i<9;i++)
	{
		e++;
		if(e>9)
		break;
		if(e%2!=0)
		{
		h:
		printf("\nPlayer 1:");
		scanf("%d",&d);
		if(a[d-1]=='O'||a[d-1]=='X')
		{
			printf("Invalid move!!!");
			goto h;
		}
		goto c;
		}
		else
		{
		g:
		printf("\nPlayer 2:");
		scanf("%d",&f);
		if(a[f-1]=='O'||a[f-1]=='X')
		{
			printf("Invalid move!!!");
			goto g;
		}
		goto c;
		}
	}
	}
	if(e>9)
	printf("Its a tie");
	getch();
}