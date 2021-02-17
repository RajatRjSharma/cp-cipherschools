#include<bits/stdc++.h>
using namespace std;

void out1(string &str,vector<string> &r,int st,int ed)
{
	if(st==ed)
	{
		r.push_back(str);
		return;
	}
	for(int i=st;i<=ed;i++)
	{
		swap(str[st],str[i]);
		out1(str,r,st+1,ed);
		swap(str[st],str[i]);
	}
}

vector<string> out(string &s)
{
	if(s.size()==0)
	{
		return {};
	}
	if(s.size()==1)
	{
		return {s};
	}
	vector<string> r;
	out1(s,r,0,s.size()-1);
	return r;
}


int main()
{
	string str="123";
	vector<string> v=out(str);
	for(string st: v)
	{
		cout<<st<<" ";
	}

return 0;
}

