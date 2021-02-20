#include<bits/stdc++.h>
using namespace std;

int lsis(vector<int> &v)
{
	vector<int> c(v.size(),1);
	int max1=1;
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<i;j++)
		{
			if(v[j]<v[i])
			{
				c[i]=max(c[i],c[j]+1);
			}
		}
		max1=max(max1,c[i]);
	}
	return max1;
}


int main()
{
	vector<int> vec = {10, 22, 9, 33, 21, 50, 41, 60};
	cout<<lsis(vec);

return 0;
}

