#include<bits/stdc++.h>
using namespace std;

long long fact(int &n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	long long f=1;
	for(int i=2;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}

int out(int &n)
{
	long long f=fact(n);
	int c=0;
	int q=0;
	while(q==0)
	{
		q=f%10;
		f=f/10;
		c++;
	}
	return c-1;
}

int out1(int &n)
{
	int c=0;
	for(int i=5;n/i>=1;i=i*5)
	{
		c=c+n/i;
	}
	return c;
}

int main()
{
	int n=100;
	int ou=out1(n);
	cout<<ou;

return 0;
}

