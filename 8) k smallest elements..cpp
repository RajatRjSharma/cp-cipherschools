#include<bits/stdc++.h>
using namespace std;

int out1(vector<int> &v,int k)
{
	sort(v.begin(),v.end());
	return v[k-1];
}

void out(vector<int> &v,int k)
{
	sort(v.begin(),v.end());
	for(int i=0;i<k;i++)
	{
		cout<<v[i]<<" ";
	}
}


int main()
{
	vector<int> v={7,2,3,9,7,4,3};
	out(v,3);

return 0;
}

