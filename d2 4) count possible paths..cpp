#include<bits/stdc++.h>
using namespace std;

int out(int r,int c)
{
	vector<vector<int>> v(r,vector<int>(c,0));
	for(int i=0;i<r;i++)
	{
		v[i][0]=1;
	}
		for(int i=0;i<c;i++)
	{
		v[0][i]=1;
	}
	for(int i=1;i<r;i++)
	{
		for(int j=1;j<c;j++)
		{
			v[i][j]=v[i-1][j]+v[i][j-1];
		}
	}
	
	return v[r-1][c-1];
}

long long fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		long long f=1;
		for(int i=2;i<=n;i++)
		{
			f=f*i;
		}
		//cout<<f<<" ";
		return f;
	}
	
}

int paths(int r,int c)
{
	return (fact(r+c-2)/((fact(r-1))*(fact(c-1))));
}

int out1(vector<vector<int>> v,int r,int c)
{
	bool blockr=false;
	for(int i=0;i<r;i++)
	{
		if(v[i][0]==-1)
		{
			blockr=true;
		}
		if(blockr)
		{
			v[i][0]=0;
		}
		else
		{
			v[i][0]=1;
		}
	}
	
	bool blockc=false;
	for(int i=0;i<c;i++)
	{
		if(v[0][i]==-1)
		{
			blockr=true;
		}
		if(blockr)
		{
			v[0][i]=0;
		}
		else
		{
			v[0][i]=1;
		}
	}
	for(int i=1;i<r;i++)
	{
		for(int j=1;j<c;j++)
		{
			if(v[i][j]!=-1)
			v[i][j]=v[i-1][j]+v[i][j-1];
			else
			v[i][j]=0;
		}
	}
	
	return v[r-1][c-1];
}


int main()
{
	cout<<out(2,2)<<endl;
	cout<<paths(3,3)<<endl;
	vector<vector<int>> v = {
        {0, -1, -1, 0},
        {0, 0, 0, 0},
        {-1, 0, -1, 0},
        {0, 0, 0, 0}};
    cout<<out1(v,v.size(),v[0].size());
    

return 0;
}

