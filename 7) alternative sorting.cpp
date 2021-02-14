#include<bits/stdc++.h>
using namespace std;

vector<int> out(vector<int> &v)
{
	sort(v.begin(),v.end());
	vector<int> v1;
	for(int i=0,j=v.size()-1;i<=j;i++,j--)
	{
		v1.push_back(v[j]);
		v1.push_back(v[i]);
	}
	if(v.size()%2!=0)
	{
		v1.pop_back();
	}
	return v1;
}


int main()
{
	vector<int> v={9,8,7,6,5,4,3,2,1};
	vector<int> v1=out(v);
	for(int i :v1)
	{
		cout<<i<<" ";
	}

return 0;
}

