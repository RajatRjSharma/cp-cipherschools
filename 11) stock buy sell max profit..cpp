#include<bits/stdc++.h>
using namespace std;

int profit(vector<int> v)
{
	int pro=0, in=v[0];
	for(int i=1;i<v.size();i++)
	{
		if(in<=v[i])
		{
			int temp=v[i]-in;
			pro=max(temp,pro);
		}
		else
		{
			in=v[i];
		}
	}
	return pro;
}


int main()
{
	vector<int> v={100,200,210,30,40,240,30,250};
	//vector<int> v={100,300,200,40,654,400,200,400};
	cout<<profit(v);

return 0;
}

