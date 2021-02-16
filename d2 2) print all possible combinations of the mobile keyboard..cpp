#include<bits/stdc++.h>
using namespace std;

vector<string> key={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void out1(string s,vector<string> &r, int in ,string ss )
{
	if(s.size()==in)
	{
		r.push_back(ss);
		return;
	}
	string poss=key[s[in]-'0'];
	for(int i=0;i<poss.size();i++)
	{
		ss.push_back(poss[i]);
		out1(s,r,in+1,ss);
		ss.pop_back();
	}
}


vector<string> out(string s)
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
	vector<string> v=out("23");
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}

return 0;
}

