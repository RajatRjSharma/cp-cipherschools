#include<bits/stdc++.h>
using namespace std;

int bs(vector<int> &v,int s,int e,int x)
{
	if(s>e || v.size()==0)
	{
		return -1;
	}
	if(v.size()==1)
	{
		return s;
	}
	int m=s+(e-s)/2;
	if(v[m]==x)
	{
		return m;
	}
	else
	{
		if(x>v[m])
		{
			bs(v,m+1,e,x);
		}
		else
		{
			bs(v,s,m-1,x);
		}
	}
}

int part(vector<int> &v,int s,int e)
{
	int pi=v[e];
	int j=s-1;
	for(int i=s;i<=e-1;i++)
	{
		if(v[i] <= pi)
		{
			j++;
			swap(v[j],v[i]);
		}
	}
	swap(v[j+1],v[e]);
	return j+1;
}

void qs(vector<int> &v,int s,int e)
{
	if(s<e)
	{
		int pi=part(v,s,e);
		//cout<<pi<<" "<<v[pi]<<endl;
		qs(v,s,pi-1);
		qs(v,pi+1,e);
	}
}

void mss(vector<int> &v,int s,int m, int e)
{
	int fi=m-s+1,sn=e-m;
//	vector<int> a(fi);
//	vector<int> b(sn);
    int a[fi],b[sn];
	//cout<<s<<" "<<m<<" "<<e<<" "<<fi<<" "<<sn<<endl;
	for(int i=0;i<fi;i++)
	{
		a[i]=v[i+s];
		//a.push_back(v[s+i]);
		//cout<<v[s+i]<<" ";
	}
	for(int i=0;i<sn;i++)
	{
		b[i]=v[i+m+1];
		//b.push_back(v[m+i+1]);
		//cout<<v[m+i+1]<<" ";
	}
	
	int i=0,j=0,k=s;
	//cout<<endl<<v[k-1]<<v[k]<<endl;
	while(i<fi && j<sn)
	{
		if(a[i]<=b[j])
		{
			v[k]=a[i];
			i++;
		}
		else
		{
			v[k]=b[j];
			j++;
		}
		k++;
	}
	while(i<fi)
	{
		v[k]=a[i];
		i++;
		k++;
	}
	while(j<sn)
	{
		v[k]=b[j];
		j++;
		k++;
	}
	
	
}

void ms(vector<int> &v,int s,int e)
{
	if(s>=e)
	{
		return;
	}
	int m=s+(e-s)/2;
	ms(v,s,m);
	ms(v,m+1,e);
	mss(v,s,m,e);
}


int main()
{
	vector<int> v={1,2,3,4,5,6,7,8};
	cout<<bs(v,0,v.size()-1,3)<<endl;
	vector<int> v1={9,8,7,6,5,4,3,2,1};
	qs(v1,0,v1.size()-1);
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	cout<<"\n";
	vector<int> v2={9,8,7,6,5,4,3,2,1};
	ms(v2,0,v2.size()-1);
	for(int i=0;i<v2.size();i++)
	{
		cout<<v2[i]<<" ";
	}

return 0;
}

