#include<bits/stdc++.h>
using namespace std;

int maxarea(vector<int> &t)
{
	stack<int> s;
	int maxarea=0,area=0,top=0,i=0;
	while(i<t.size())
	{
		if(s.empty() || t[s.top()]<=t[i])
		{
			s.push(i++);
		}
		else
		{
			top=s.top();
			s.pop();
			if(s.empty())
			{
				area=t[top]*i;
			}
			else
			{
				area=t[top]*(i-s.top()-1);
			}
			maxarea=max(area,maxarea);
		}
		
	}
	while(!s.empty())
	{
		top=s.top();
		s.pop();
		if(s.empty())
			{
				area=t[top]*i;
			}
			else
			{
				area=t[top]*(i-s.top()-1);
			}
		maxarea=max(area,maxarea);
	}
	return maxarea;
}


int main()
{
	vector<int> v={1,2,3,1,2};
	cout<<maxarea(v);

return 0;
}

