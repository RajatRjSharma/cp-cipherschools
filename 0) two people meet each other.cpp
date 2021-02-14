#include<bits/stdc++.h>
using namespace std;

void check(int a,int b,int a1, int b1)
{
	
	while(a!=b)
	{
		if((a>b && a1>=b1 )||(b>a && b1>=a1))
		{
			break;
		}
		a=a+a1;
		b=b+b1;
		
	}
	if(a==b && (abs(a-b)% abs(a1-b1)==0))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}


int main()
{
	check(0,5,3,2);

return 0;
}

