#include<bits/stdc++.h>
using namespace std;

bool subsetsum(vector<int> &coins,int n)
{
	int m=coins.size();
	vector<vector<bool>> v(m+1,vector<bool> (n+1,false));
	for(int i=0;i<m;i++)
	{
		v[i][0]=true;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j<coins[i-1])
			{
				v[i][j]=v[i-1][j];
			}
			else
			{
				v[i][j]=v[i-1][j] || v[i-1][j-coins[i-1]];
			}
		}
	}
	return v[m][n];
}


int main()
{
	vector<int> vec = {1,2,3,4,5,6,7};
	cout<<subsetsum(vec,100);
	

return 0;
}

