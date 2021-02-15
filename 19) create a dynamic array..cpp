#include<bits/stdc++.h>
using namespace std;

struct arry{
	int size;
	int *mem;
};

void creat(arry*a,int s)
{
	a->size=s;
	a->mem=(int*)malloc(s*sizeof(int));
}

void set1(arry*a)
{
	int in;
	for(int i=0;i<a->size;i++)
	{
		cin>>in;
		(a->mem)[i]=in;
	}
}

void dis(arry*a)
{
	for(int i=0;i<a->size;i++)
	{
		cout<<(a->mem)[i]<<" ";
	}
}

void out(int s)
{
	int *arr=new int(s);
	for(int i=0;i<s;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<s;i++)
	{
		cout<<arr[i]<<" ";
	}
	delete arr;
}


int main()
{
//	int s;
//	cin>>s;
//	out(s);
	struct arry a;
	creat(&a,5);
	set1(&a);
	dis(&a);

return 0;
}

