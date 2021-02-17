#include<bits/stdc++.h>
using namespace std;

string map1="ZABCDEFGHIJKLMNOPQRSTUVWXY";

string out(int n)
{
	string r="";
	while(n>0)
	{
		int q=n%26;
		if(q==0)
		{
			n--;
		}
		r=map1[q]+r;
		n=n/26;
	}
	return r;
}

void out1(int n,string &r)
{
	if(n<=0)
	{
		return;
	}
	//cout<<n<<endl;
	int q=n%26;
	if(q==0)
	{
		n--;
	}
	r=map1[q]+r;
	out1(n/26,r);
}

int main()
{
	int n=701;
	cout<<out(n)<<endl;
	string str="";
	out1(n,str);
	cout<<str<<endl;

return 0;
}

