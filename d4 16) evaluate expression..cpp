#include<bits/stdc++.h>
using namespace std;

void out(vector<string> &str)
{
	int n=str.size();
	stack<int> s;
	for(int i=0;i<n;i++)
	{
		if(str[i]=="-" || str[i]=="+" || str[i]=="*" || str[i]=="/")
		{
			int a=s.top();s.pop();
			int b=s.top();s.pop();
			//int c;
			//cout<<a<<b;
			if(str[i]=="-")
			{
				cout<<b-a<<endl;;
			}
			if(str[i]=="+")
			{
				cout<<b+a<<endl;
			}
			if(str[i]=="*")
			{
				cout<<b*a<<endl;
			}
			if(str[i]=="/")
			{
				cout<<b/a<<endl;
			}
		}
		else
		{
			//cout<<str[i];
			s.push(stoi(str[i]));
		}
	}
}


int main()
{
	vector<string> c={"12","10","5","9","+","+"};
	out(c);

return 0;
}

