#include<bits/stdc++.h>
using namespace std;

void find(vector<vector<int>> &v,int n)
{
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<v[0].size();j++)
		{
			if(v[i][j]==n)
			{
				cout<<n<<" at "<<i<<","<<j;
				return;
			}
		}
	}
	cout<<"Not found";
	return;
}

void find1(vector<vector<int>> &v,int n)
{
	int r=0,c=v[0].size()-1;
	if(n<v[0][0] || n>v[v.size()-1][v[0].size()-1] || v.size()==0)
	{
		cout<<-1;
	}
	while(v[r][c]!=n && r>=0 && c>=0)
	{
		//cout<<v[r][c]<<" "<<r<<" "<<c<<endl;
		if(v[r][c]>n)
		{
			c--;
		}
		else
		{
			r++;
		}
		//cout<<c<<" "<<r<<endl;
	}
	if(v[r][c]==n)
	cout<<v[r][c]<<" at "<<r<<","<<c<<endl;
	else
	cout<<"Not found";
}

int main()
{
	vector<vector<int>> v={ { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
	find1(v,6);

return 0;
}

