#include<bits/stdc++.h>
using namespace std;

int edit(string a, string b)
{
	int l1=a.size();
	int l2=b.size();
	vector<vector<int>> v(l1+1,vector<int>(l2+1,0));
	for(int i=0;i<=l1;++i)
	{
		for(int j=0;j<=l2;++j)
		{
			if(i==0)
			{
				v[i][j]=j;
			}
			else if(j==0)
			{
				v[i][j]=i;
			}
			else if(a[i-1]==b[j-1])
			{
				v[i][j]=v[i-1][j-1];
			}
			else
			{
				v[i][j]=1+min(v[i-1][j-1],v[i-1][j],v[i][j-1]);
			}
		}
	}
	return v[l1][l2];
}


int main()
{
	string a="abcde";
	string b="asdfg";
	cout<<edit(a,b);

return 0;
}

