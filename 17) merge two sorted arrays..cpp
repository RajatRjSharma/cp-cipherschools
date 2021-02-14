#include<bits/stdc++.h>
using namespace std;

vector<int> merge(const vector<int> &v, const vector<int> &v1)
{
	int i=0,j=0,k=0;
	vector<int> res(v.size()+v1.size());
	while(i<v.size() && j<v1.size())
	{
		if(v[i]<=v1[j])
		{
			res[k]=v[i];
			i++;
		}
		else
		{
			res[k]=v1[j];
			j++;
		}
		k++;
	}
	
	while(i<v.size())
	{
		res[k]=v[i];
		i++;
		k++;
	}
	
	while(j<v1.size())
	{
		res[k]=v1[j];
		j++;
		k++;
	}
	return res;
}

int main()
{
vector<int> v={1,3,6,8,10,34,50};
vector<int> v1={2,4,7,9,11,26,34,49};
vector<int> out=merge(v,v1);
for(int i=0;i<out.size();i++)
{
	cout<<out[i]<<" ";
}
return 0;
}

