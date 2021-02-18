#include<bits/stdc++.h>
using namespace std;

bool ispal(string str,int s,int e)
{
	while(s<e)
	{
		if(str[s]!=str[e])
		{
			return false;
		}
		s++;
		e--;
	}
	return true;
}

void out1(vector<string> &c, vector<vector<string>> &r,int s,int e,string str)
{
	if(s>=e)
	{
		r.push_back(c);
		return;
	}
	for(int i=s;i<e;i++)
	{
		if(ispal(str,s,i))
		{
			c.push_back(str.substr(s,i-s+1));
			out1(c,r,i+1,e,str);
			c.pop_back();
		}
	}
	
}


vector<vector<string>> out(string &str)
{
	if(str.size()==0)
	{
		return {};
	}
	vector<string> c;
	vector<vector<string>> r;
	out1(c,r,0,str.size(),str);
	return r;
}

int main()
{
	string st="wassamassaw";
	vector<vector<string>> v=out(st);
	for(vector<string> s : v)
	{
		for(string s1:s)
		{
		cout<<s1<<" ";
	    }
	    cout<<"\n";
	}
	

return 0;
}

