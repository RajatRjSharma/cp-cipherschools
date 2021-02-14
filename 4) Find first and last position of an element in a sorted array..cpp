#include<bits/stdc++.h>
using namespace std;

void find(vector<int> v,int x)
{
	int s=-1,l=-1,c=0;
	for(int i=0;i<v.size();i++)
	{
		
		if(v[i]==x)
		{
			c++;
			l=i;
			
		}
		if(c==1 && s==-1)
		{
			
			s=i;
		}
	}
	if( s!=-1 && l!=-1)
	{
		cout<<"first at "<<s<<" last at "<<l;
	}
	else
	{
		cout<<"not found";
	}
}

int find1st(vector<int> &v, int n,int s,int e)
{
	if(s>=e)
	{
		return -1;
	}
	int m=s+(e-s)/2;
	if(m==0 || (v[m-1]<n && v[m]==n))
	{
		return m;
	}
	if(n>v[m])
	{
		find1st(v,n,m+1,e);
	}
	else
	{
		find1st(v,n,s,m-1);
	}
}

int findlst(vector<int> &v, int n,int s,int e)
{
	if(s>=e)
	{
		return -1;
	}
	int m=s+(e-s)/2;
	if(m==v.size()-1 || (v[m+1]>n && v[m]==n))
	{
		return m;
	}
	if(n<v[m])
	{
		findlst(v,n,s,m-1);
		
	}
	else
	{
	   findlst(v,n,m+1,e);
	}
}

int main()
{
	vector<int> v={1};
	//cout<<find1st(v,5,0,v.size())<<endl;
	//cout<<findlst(v,5,0,v.size())<<endl;
	find(v,1);

return 0;
}

