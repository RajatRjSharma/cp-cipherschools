#include<bits/stdc++.h>
using namespace std;

void out1(vector<string> &r,int s,int e,string str)
{
	if(s>=e)
	{
		r.push_back(str);
		return ;
	}
	
	for(int i=s;i<=e;i++)
	{
		swap(str[i],str[s]);
		out1(r,s+1,e,str);
		swap(str[i],str[s]);
	}
}


vector<string> out(string str)
{
	vector<string> r;
	out1(r,0,str.size()-1,str);
	return r;
}

int main()
{
	vector<string> o=out("iamrajat");
	for(int i=0;i<o.size();i++)
	{
		cout<<o[i]<<" ";
	}

return 0;
}

