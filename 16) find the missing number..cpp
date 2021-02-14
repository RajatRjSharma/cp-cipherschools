#include<bits/stdc++.h>
using namespace std;

int out(vector<int> v)
{
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		if(i+1!=v[i])
		{
			return i+1;
		}
	}
	return -1;
}


int main()
{
	vector<int> v={9,8,7,6,4,3,2,1};
	cout<<out(v);

return 0;
}

