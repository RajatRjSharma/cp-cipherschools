#include<bits/stdc++.h>
using namespace std;

long long fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	if(n==1)
	{
		return 1;
	}
	return (fib(n-2)+fib(n-1));
}

long long fib1(int n)
{
	if(n==1)
	{
		return 1;
	}
	if(n==0)
	{
		return 0;
	}
	int q=0,w=1,e;
	for(int i=2;i<=n;i++)
	{
		e=q+w;
		q=w;
		w=e;
	}
	return w;
}

long long fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	return n*fact(n-1);
}


int main()
{
	cout<<fib(10)<<endl;
	cout<<fib1(10)<<endl;
    cout<<fact(5)<<endl;
return 0;
}

