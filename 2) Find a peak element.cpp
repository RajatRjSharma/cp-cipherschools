#include<bits/stdc++.h>
using namespace std;
//
//int out(vector<int> v)
//{
//	sort(v.begin(),v.end());
//	return v[v.size()-1];
//}
//
//void out1(vector<int> &v)
//{
//	if(v.size()==0)
//	{
//		cout<<-1;
//	}
//	if(v.size()==1)
//	{
//		cout<<0;
//	}
//	int peak=v[0];
//	for(int i=1;i<v.size()-1;i++)
//	{
//		if(v[i]>v[i-1] && v[i]>v[i+1])
//		{
//			peak=v[i];
//			cout<<peak<<" at "<<i<<endl;
//		}
//	}
//}
//
//int main()
//{
//	vector<int> v={10,20,15,2,23,90,67};
//	cout<<out(v)<<endl;
//	out1(v);
//
//return 0;
//
//}
//







    int out(vector<int>& v) {
    if(v.size()==0)
	{
		return -1;
	}
	if(v.size()==1)
	{
		return 0;
	}
	int peak=v[0];
	for(int i=1;i<v.size()-1;i++)
	{
        peak=max(peak,v[i]);
		if(v[i]>v[i-1] && v[i]>v[i+1])
		{
			// peak=v[i];
			// cout<<peak<<" at "<<i<<endl;
            return i;
            
		}
	}
        peak=max(peak,v[v.size()-1]);
        if(peak==v[0])
            return 0;
        if(peak==v[v.size()-1])
            return v.size()-1;
        return -1;
    }
int main()
{
	vector<int> v={10,20,15,2,23,90,67};
	cout<<out(v)<<endl;
	//out1(v);

return 0;
}

