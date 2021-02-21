#include<bits/stdc++.h>
using namespace std;

void nextge(vector<int> &v)
{
	stack<int> s;
	s.push(v[0]);
	for(int i=1;i<v.size();i++)
	{
		if(s.empty())
		{
			s.push(v[i]);
			continue;
		}

			
			while(!s.empty()&& s.top()<v[i])
			{
				cout<<s.top()<<" "<<v[i]<<endl;
				s.pop();
			}
		
		
		s.push(v[i]);
	}
	while(!s.empty())
	{
		cout<<s.top()<<" "<<-1<<endl;
		s.pop();
	}
}


int main()
{
	vector<int> v={9,8,7,6,5,4,3,2,1};
	nextge(v);

return 0;
}

