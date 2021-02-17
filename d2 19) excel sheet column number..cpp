#include<bits/stdc++.h>
using namespace std;

int out(string str)
{
    int c=0;
    for(int i=str.size()-1,j=0;i>=0,j<str.size();i--,j++)
{
	int a=pow(26,j)*(int)(str[i]-64);
	//cout<<i<<" "<<a<<endl;
	c=c+a;
	//cout<<c<<endl;
}
return c;	
}

void out1(string &str,int &n,int i,int j)
{
	if(i<0)
	{
		return;
	}
	int a=pow(26,j)*(int)(str[i]-64);
	n=n+a;
	//cout<<a<<" "<<n<<endl;
	out1(str,n,i-1,j+1);
}

int main()
{
	string s="ZZ";
	cout<<out(s);
	
	cout<<endl;
	string s1="ZZ";
	int a;
	out1(s1,a,s1.size()-1,0);
	cout<<a;


return 0;
}

