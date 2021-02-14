#include<bits/stdc++.h>
using namespace std;

int moore(vector<int> &v)
{
	int cand=0,count=1;
	for(int i=1;i<v.size();i++)
	{
		if(v[i]==v[cand])
		{
			count++;
		}
		else
		{
			count--;
		}
		if(count==0)
		{
			cand=i;
			count=1;
		}
	}
	return cand;
}


void find(vector<int> &v)
{
	int cand=moore(v);
	int f=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==v[cand])
		{
			f++;
		}
	}
	if(f>(v.size()/2))
	{
		cout<<v[cand];
	}
	else
	{
		cout<<"NOT";
	}
}


int main()
{
	vector<int> v={2,1,2,2,4,2,1,2};
	find(v);

return 0;
}

