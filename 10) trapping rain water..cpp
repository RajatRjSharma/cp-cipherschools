#include<bits/stdc++.h>
using namespace std;

int out(vector<int> &v)
{
	int size=v.size();
	vector<int> rmax(size);
	int lmax=v[0];
	rmax[size-1]=v[size-1];
	for(int i=size-2;i>=0;i--)
	{
		rmax[i]=max(rmax[i+1],v[i]);
	}
	int count=0;
	for(int i=0;i<size;i++)
	{
		lmax=max(lmax,v[i]);
		count+=min(lmax,rmax[i])-v[i];
	}
	return count;
}

int main()
{
vector<int> v={2,4,1,3,6,1,4,4,5};
cout<<out(v)<<" ";
return 0;
}

