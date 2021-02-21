#include<bits/stdc++.h>
using namespace std;

stack<int> s;
int getmin;

void push(int data)
{
	if(s.empty())
	{
		s.push(data);
		getmin=data;
	}
	if(data>=getmin)
	{
		s.push(data);
	}
	else
	{
		s.push(2*data-getmin);
		getmin=data;
	}
}

void pop()
{
	if(s.empty())
	{
		return;
	}
	int top=s.top();
	if(top>=getmin)
	{
		s.pop();
	}
	else
	{
		getmin=2*getmin-top;
		s.pop();
	}
}

int getminum()
{
	return getmin;
}


int main()
{
	push(9);
	push(8);
	push(7);
	push(6);
	push(5);
	push(4);
	cout<<getminum()<<endl;
    pop();
    cout<<getminum()<<endl;
    pop();
    cout<<getminum()<<endl;
    pop();
	cout<<getminum()<<endl;
    pop();
return 0;
}

