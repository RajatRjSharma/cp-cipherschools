#include<bits/stdc++.h>
using namespace std;

int out(vector<int> v)
{
	int c=0;
	for(int i=0;i<v.size();i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			if(v[i]>v[j])
			{
				c++;
			}
		}
	}
	return c;
}

int main()
{
	vector<int> v={8,4,6,0,2,3,6,7,48,2,4,6};
	cout<<out(v);

return 0;
}

