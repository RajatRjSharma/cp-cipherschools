#include<bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> v)
{
	int rs=0,re=v.size()-1,cs=0,ce=v[0].size()-1;
	while(rs<=re && cs<=ce)
	{
		for(int i=cs;i<=ce;i++)
		{
			cout<<v[rs][i]<<" ";
		}
		rs++;
		for(int i=rs;i<=re;i++)
		{
			cout<<v[i][ce]<<" ";
		}
		ce--;
		//if(rs<=re)
		{
			for(int i=ce;i>=cs;i--)
			{
				cout<<v[re][i]<<" ";
			}
			re--;
		}
			//if(cs<=ce)
			{
				for(int i=re;i>=rs;i--)
				{
					cout<<v[i][cs]<<" ";
				}
				cs++;
			}
		
	}
}


int main()
{
	vector<vector<int>> v={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	print(v);


return 0;
}

