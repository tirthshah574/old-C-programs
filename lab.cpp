#include<iostream>
using namespace std;
main()
{
	int i,j,k,a,b=0,c;
	
	cout<<"Enter a number:";
	cin>>a;
	
	for(i=2;i<=a/2;i++)
	{
		b=0;
		if(a%i==0)
		{
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				b++;
			}
			if(b==0)
			{
				k=i*i;
				if(a%k==0)
				{
				c=2;
				break;
				}
			}
		}
	}
	if(c==2)
	cout<<a<<" True "<<i<<" is a prime devisor of "<<a<<" & "<<i<<"*"<<i<<" is equal to "<<k<<" which is also devisor of "<<a;
	else
	cout<<a<<" is not lab number";
}
