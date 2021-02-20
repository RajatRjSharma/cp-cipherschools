#include<bits/stdc++.h>
using namespace std;

long long catalan(int n)
{
	vector<long long> v(n+1);
	v[0]=v[1]=1;
	for(int i=2;i<=n;i++)
	{
		v[i]=0;
		for(int j=0;j<i;j++)
		{
			v[i]+=v[j]*v[i-j-1];
		}
		cout<<v[i]<<endl;
	}
	return v[n];
}


int main()
{
	cout<<catalan(4);

return 0;
}

