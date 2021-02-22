#include<iostream>
using namespace std;
main()
{
	int i,j,k,a,b,c=1;
	
	cout<<"Enter a number:";
	cin>>a;
	
	i=a/10;
	while(i!=0)
	{
		c=c*10;
		i=i/10;
	}
	//c=c/10;
	while(a!=0)
	{
		b=a/c;	
		cout<<b<<" ";
		a=a%c;
		c=c/10;
	}
}
