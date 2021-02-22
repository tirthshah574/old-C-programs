#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
main()
{
	int a,b,c,i,j,k=0,p[20]={69,49,29,0},x,z=0,f,l,g=300,h=0,q=3;
	char t[400],y,m,r;
	clrscr();
	srand(time(0));
	f=rand();
	f%=400;
	n:
for(l=0;!kbhit();l++)
{
	p[q]=p[0];
	if(y=='w'&&p[0]-20!=p[q-1])
	{
		p[0]-=20;
		for(i=1;i<q;i++)
		{
			p[i]=p[i+1];
		}
	}
	if(y=='a'&&p[0]-1!=p[q-1])
	{
		p[0]-=1;
		for(i=1;i<q;i++)
		{
			p[i]=p[i+1];
		}
	}
	if(y=='s'&&p[0]+20!=p[q-1])
	{
		p[0]+=20;
		for(i=1;i<q;i++)
		{
			p[i]=p[i+1];
		}
	}
	if(y=='d'&&p[0]+1!=p[q-1])
	{
		p[0]+=1;
		for(i=1;i<q;i++)
		{
			p[i]=p[i+1];
		}
	}
	else
	y=r;
	for(i=0;i<400;i++)
	{
		t[i]='\0';
	}
	i=-1;
	for(z=0;z<77;z++)
	{
		if(z<20)
		i++;
		else if(z>19&&z<39)
		i+=20;
		else if(z>38&&z<58)
		i--;
		else
		i-=20;
		t[i]='X';
	}
	t[f]='O';
	if(p[0]==f)
	{
		h++;
		srand(time(0));
		if(h%3==0)
		{
		g-=30;
		q++;
		}
		e:
		f=rand()%400;
		if(t[f]!='\0')
		goto e;
	}
	k=0;
	for(i=1;i<q;i++)
	{
		t[p[i]]='*';
	}
	if(t[p[0]]=='X'||t[p[0]]=='*')
	goto d;
	t[p[0]]='o';
	for(i=0;i<20;i++)
	{
		for(j=0;j<20;j++)
		{
			cout<<t[k]<<" ";
			k++;
		}
		cout<<endl;
	}
	delay(g);
	clrscr();
 }
	y=getch();
	if(y=='a'||y=='s'||y=='w'||y=='d')
	r=y;
	if(y!='a'&&y!='s'&&y!='w'&&y!='d'&&y!=' ')
	y=r;
	if(y!=' ')
	goto n;
	else
	{
	d:
	getch();
	cout<<"Your score is "<<h<<"\nGame Over";
	}
	getch();
 }
