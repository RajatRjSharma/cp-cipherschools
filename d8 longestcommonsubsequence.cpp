#include<bits/stdc++.h>
using namespace std;

int lcs(string &a,string &b)
{
	vector<vector<int>> v(a.size()+1,vector<int>(b.size()+1,0));
	for(int i=1;i<=a.size();i++)
	{
		for(int j=1;j<=b.size();j++)
		{
			if(a[i-1]==b[j-1])
			{
				v[i][j]=v[i-1][j-1]+1;
			}
			else
			{
				v[i][j]=max(v[i][j-1],v[i-1][j]);
			}
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return v[a.size()][b.size()];
}


int main()
{
	string a="ABCDE";
	string b="AJCJE";
	cout<<lcs(a,b);

return 0;
}

