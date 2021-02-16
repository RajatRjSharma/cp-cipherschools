#include<bits/stdc++.h>
using namespace std;

string map1=" ABCDEFGHIJKLMNOPQRSTUVWNYZ";

void out1(string &s,vector<string> &r,int n,string ss)
{
	if(n>=s.size())
	{
		r.push_back(ss);
		return;
	}
	int a=int(s[n]-'0');
	if(a==0)
	{
		return;
	}
	out1(s,r,n+1,ss+map1[a]);
	
	if(n+1>=s.size())
	{
		return;
	}
	int b=int(s[n+1]-'0');
	if(int(10*a+b)<=26)
	out1(s,r,n+2,ss+map1[10*a+b]);
}

vector<string> out(string &s)
{
	if(s.size()==0)
	{
		return {};
	}
	vector<string> r;
	out1(s,r,0,"");
	return r;
}

int main()
{
	string s="20";
	vector<string> v=out(s);
	for(string s1:v)
	{
		cout<<s1<<" ";
	}

return 0;
}

