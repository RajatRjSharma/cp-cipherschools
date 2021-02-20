#include<bits/stdc++.h>
using namespace std;

int lsis(vector<int> &v)
{
	//vector<int> c(v.size(),1);
	vector<int> s(v.size(),1);
	int max1=INT_MIN;
	for(int i=0;i<v.size();i++)
	{
		s[i]=v[i];
	}
	for(int i=0;i<v.size();i++)
	{
		for(int j=0;j<i;j++)
		{
			if(v[j]<v[i])
			{
				//c[i]=max(c[i],c[j]+1);
				s[i]=max(s[i],s[j]+v[i]);
				//cout<<s[j]+v[i]<<endl;
			}
		}
		max1=max(max1,s[i]);
		//cout<<v[i]<<" "<<s[i]<<endl;
	}
	return max1;
}


int main()
{
	vector<int> vec = {10, 22, 9, 33, 21, 50, 41, 60};
	cout<<lsis(vec);

return 0;
}

