#include<bits/stdc++.h>
using namespace std;

int sumis(vector<int> &v)
{
	int sum=v[0];
	int max1=v[0];
	for(int i=0;i<v.size();i++)
	{
		if(v[i]>v[i]+sum)
		{
			sum=v[i];
		}
		else
		{
			sum=sum+v[i];
		}
//		if(sum>max)
//		{
//			max=sum;
//		}
        max1=max(sum,max1);
	}
	return max1;
}


int main()
{
	vector<int> v={-1,2,3,-6,7,4,-4,-5,9,1,-10};
	cout<<sumis(v);

return 0;
}

