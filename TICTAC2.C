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
			printf("  %c  ",a[b]);
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
		if(e==1)
		d=1;
		else if(e==3)
		{
			if(d!=3&&f!=3)
			d=3;
			else if(f==3)
			d=5;
		}
		else if(e==5)
		{
			if(a[0]=='O'&&a[8]=='O'&&a[4]!='X')
			d=4;
			else if(a[0]=='O'&&a[2]=='O'&&a[1]!='X')
			d=2;
			else if(a[2]=='O'&&a[8]=='O'&&a[5]!='X')
			d=6;
			else if(a[3]=='X'&&a[5]=='X'&&a[4]!='O')
			d=5;
			else if(a[1]=='X'&&a[4]=='X'&&f!=8)
			d=8;
			else if(a[1]=='X'&&a[7]=='X'&&f!=5&&a[4]!='X')
			d=5;
			else if(a[4]=='X'&&a[7]=='X'&&f!=2)
			d=2;
			else if(a[4]=='X'&&a[5]=='X')
			d=4;
			else if(f!=9&&d!=9&&a[8]!='O')
			d=9;
			else if(d!=9&&d!=5&&f==9&&f!=5&&a[4]!='X')
			d=5;
			else
			d=6;
		}
		else if(e==7)
		{
			if(a[3]=='X'&&a[5]=='X'&&a[4]!='O')
			d=5;
			else if(a[0]=='O'&&a[4]=='O'&&a[8]!='X')
			d=9;
			else if(a[2]=='O'&&a[4]=='O'&&a[6]!='X')
			d=7;
			else if(f==6&&d!=4)
			d=4;
			else if(f==9&&f==5)
			d=8;
			else if(a[1]!='X')
			d=2;
			else if(a[5]!='X'&&a[5]!='O')
			d=6;
			else
			d=7;
		}
		else if(e==9)
		{
			if(f!=8&&d!=8)
			d=8;
			else if(f!=7&&d!=7)
			d=7;
			else if(a[8]!='X'&&a[8]!='O')
			d=9;
			else
			d=4;
		}

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