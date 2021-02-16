#include<bits/stdc++.h>
using namespace std;

long long fact(int n)
{
	if (n==1 || n==0)
	{
		return 1;
	}
	long long x=1;
	for(int i=2;i<=n;i++)
	{
		x=(x*i);
	}
	return x;
}

int out(int n)
{
	long long f=fact(n);
	vector<int> vv;
	int q=0;
	while(f)
	{
		q=f%10;
		vv.push_back(q);
		//cout<<q<<" "<<f<<endl;
		f=f/10;
		
	}
	int i;
	for( i=vv.size()-1;i>0;i--)
	{
		if(vv[i-1]==0)
		{
		//cout<<vv[i]<<" ";
		break;
	    }
	}
	return vv[i];
}

vector<int> zton={1,1,2,6,4,2,2,5,4,8};

int out1(int n)
{
	if(n<10)
	{
		return zton[n];
	}
	if(((n/10)%10)&1==1)
	{
		return (4*(out1(n/5))*zton[n%10])%10;
	}
	else
	{
		return (6*(out1(n/5))*zton[n%10])%10;
	}
}


int main()
{
cout<<out(33)<<endl;
cout<<out1(33);
return 0;
}

