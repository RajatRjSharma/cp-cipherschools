#include<bits/stdc++.h>
using namespace std;

int out(vector<int> &v, int s, int e)
{
	if(s>=e)
	{
		return -1;
	}
	int m=s+(e-s)/2;
	if(m>0 && v[m]> v[m+1])
	{
		return m;
	}
	if(m<e && v[m]<v[m-1])
	{
		return m-1;
	}
	if(v[s] < v[m])
	{
		out(v,m+1,e);
	}
	else
	{
		out(v,s,m-1);
	}
}

int out1(vector<int> &v,int k,int m)
{
	//cout<<m<<endl;
	if(v[m]==k)
	{
		return m;
	}
	if((v[m]-k)>k)
	{
		for(int i=m+1;i<v.size();i++)
		{
			if(v[i]==k)
			{
				return i;
			}
		}
	}
	else
	{
		for(int i=0;i<m;i++)
		{
			if(v[i]==k)
			{
				return i;
			}
		}
	}
	return -1;
}


int main()
{
	vector<int> v={6,7,8,9,10,1,2,3};
	cout<<out1(v,1,out(v,0,v.size()-1));
	

return 0;
}

