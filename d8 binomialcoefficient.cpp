#include<bits/stdc++.h>
using namespace std;

long BINO(long n,long r)
{
	if(r>n)
	{
		return 0;
	}
	vector<vector<long>> v(n+1,vector<long>(r+1,0));
	for(long i=0;i<=n;i++)
	{
		for(long j=0;j<=(r);j++)
		{
			
			if(i==0 || j==0)
			{
				v[i][j]=1;
			}
			else if(i==j)
			{
				v[i][j]=1;
			}
			else
			{
				v[i][j]=v[i-1][j]+v[i-1][j-1];
			}
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return v[n][r];
}


int main()
{
	cout<<BINO(10,5);

return 0;
}

