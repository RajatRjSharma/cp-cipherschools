#include<bits/stdc++.h>
using namespace std;

int out(vector<int> a, vector<int> b)
{
	int i=1,j=0;
	int min=1,curr=1;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	while(i<a.size()&&j<b.size())
	{
		if(a[i]>=b[j])
		{
			curr-=1;
			j++;
		}
		else
		{
			curr+=1;
			i++;
		}
		min=max(min,curr);
	}
	return min;
}

int main()
{
//	vector<int> v={4,5,6,7,8,9};
//	vector<int> v1={5,7,8,10,10};
	vector<int> v={4,5,5,7,9};
	vector<int> v1={5,7,8,10,15};
	cout<<out(v,v1);

return 0;
}

