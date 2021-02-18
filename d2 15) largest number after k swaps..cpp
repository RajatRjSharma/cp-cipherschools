#include<bits/stdc++.h>
using namespace std;

string max1="0";

void out1(string &n,int k)
{
	if(stoi(n)>stoi(max1))
	{
		max1=n;
	}
	if(k==0)
	{
		return;
	}
	for(int i=0;i<n.size()-1;i++)
	{
		for(int j=i+1;j<n.size();j++)
		{
			if(n[j]>n[i])
			{
				swap(n[i],n[j]);
				out1(n,k-1);
				swap(n[i],n[k]);
			}
		}
	}
}

void out(string &n,int k)
{
//	while(n)
//	{
//		int q=n%10;
//		v.push_back(q);
//		n=n/10;
//	}
//	reverse(v.begin(),v.end());
//	for(int i=0;i<v.size();i++)
//	{
//		cout<<v[i]<<" ";
//	}
//	out1(v,int k);
    if(k==0 || n.size()==0)
    {
    	return ;
	}
	out1(n,k);
}


int main()
{
	string n="123454321";
	int k=4;
	out(n,k);
	cout<<max1;

return 0;
}

