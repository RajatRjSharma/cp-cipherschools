#include<bits/stdc++.h>
using namespace std;

void out1(vector<string> &r, int o, int c, int n, string ss)
{
	if(o<0 || c<0 || o>n || c>n || c>o)
	{
		return;
	}
	if(o==n && c==n)
	{
		r.push_back(ss);
		return;
	}
	out1(r,o+1,c,n,ss+"(");
	out1(r,o,c+1,n,ss+")");
}

vector<string> out(int n)
{
	if(n==0)
	{
		return {};
	}
	vector<string> r;
	out1(r,0,0,n,"");
	return r;
}


int main()
{
	vector<string> v=out(3);
	for(string s:v)
	{
		cout<<s<<endl;
	}

return 0;
}

