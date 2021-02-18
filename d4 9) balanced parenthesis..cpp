#include<bits/stdc++.h>
using namespace std;

bool check(char op ,char cl)
{
	return (((op=='('&&(cl==')')||(op=='{')&&(cl=='}'))||(op=='[')&&(cl==']')));
}

bool out(string &str)
{
	int size=str.size();
	stack<char> s;
	for(int i=0;i<size;i++)
	{
		if(s.empty())
		{
			if(str[i]==')' || str[i]=='}' || str[i]==']')
			{
				return false;
			}
			else if(str[i]=='(' || str[i]=='{'|| str[i]=='[')
			{
				s.push(str[i]);
			}
		}
		else
		{
			if(str[i]=='(' || str[i]=='{'|| str[i]=='[')
			{
				s.push(str[i]);
			}
			else if(str[i]==')' || str[i]=='}' || str[i]==']')
			{
				char get=s.top();
				s.pop();
				if(!check(get,str[i]))
				{
					return false;
				}
			}
		}
	}
	if(s.empty())
	return true;
	else
	return false;
}

int main()
{
	string str="([)]";
	if(out(str))
	{
		cout<<"Balanced";
	}
	else
	{
		cout<<"Un balanced";
	}

return 0;
}

