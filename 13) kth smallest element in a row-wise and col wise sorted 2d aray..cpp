#include<bits/stdc++.h>
using namespace std;

int out(vector<vector<int>> &v,int k)
{
	vector<int> v1;
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[0].size();j++)
		{
			v1.push_back(v[i][j]);
		}
	}
	sort(v1.begin(),v1.end());
	return v1[k-1];
}


int main()
{
	vector<vector<int>> v={{10,20,30,40},{15,25,35,45},{24,29,37,48},{32,33,39,50}};
	cout<<out(v,7);

return 0;
}

