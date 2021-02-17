#include<bits/stdc++.h>
using namespace std;

void out1(string &str,vector<string> &r,int st,int ed,string ss)
{
	if(st==ed)
	{
		return;
	}
	r.push_back(ss);
	for(int i=st+1;i<ed;i++)
	{
		//swap(str[st],str[i]);
		ss+=str[i];
		out1(str,r,i,ed,ss);
		ss.erase(ss.size()-1);
		//r.push_back(ss);
		//swap(str[st],str[i]);
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
	out1(s,r,-1,s.size(),"");
	return r;
}


int main()
{
	string str="abc";
	vector<string> v=out(str);
	for(string st: v)
	{
		cout<<st<<" ";
	}

return 0;
}

