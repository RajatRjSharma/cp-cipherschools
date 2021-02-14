#include<bits/stdc++.h>
using namespace std;

vector<int> sort1(vector<int> &n)
{
	int zp=0,op=n.size()-1;
	while(zp<=op)
	{
		switch(n[zp]){
		case 0:
//			cout<<n[zp]<<" ";
			zp++;
			break;
		case 1:
//			cout<<n[op]<<" ";
			swap(n[op],n[zp]);
			op--;
			break;
		default:
			break;
	}
}
	return n;
}

vector<int> sort11(vector<int> &n)
{
	int zp=0,op=n.size()-1;
	while(zp<=op)
	{
		while(n[zp]==0)
		{
			zp++;
		}
		while(n[op]==1)
		{
			op--;
		}
		if(zp<=op)
		{
			swap(n[zp],n[op]);
			zp++;
			op--;
		}
	}
	return n;
}

int main()
{
	vector<int> v={0,1,0,1,0,0,1,1,1,0};
	vector<int> v1=sort1(v);
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}

return 0;
}

