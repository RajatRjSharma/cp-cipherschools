#include<bits/stdc++.h>
using namespace std;

class LL{
	public:
	int data;
	LL* next;
	LL()
	{
		LL(0);
	}
	LL(int data)
	{
		this->data=data;
		this->next=NULL;
	}
	
		void print(LL* head)
	{
		LL* ptr=head;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
		cout<<endl;
	}
	
	int getsize(LL* head)
	{
		LL* ptr=head;
		int c=0;
		while(ptr!=NULL)
		{
			c++;
			ptr=ptr->next;
		}
		return c;
	}
};

LL* merge(LL* a,LL* b)
{
	if(a==NULL)
	{
		return b;
	}
	else if(b==NULL)
	{
		return a;
	}
	LL copy;
	LL* ptr=&copy;
	copy.next=NULL;
	while(a!=NULL && b!=NULL)
	{
		//cout<<a->data<<" "<<b->data<<endl;
		if(a->data<b->data)
		{
		    ptr->next=a;
			a=a->next;
		}
		else
		{
			ptr->next=b;
			b=b->next;
		}
		ptr=ptr->next;
	}
	
	while(a!=NULL)
	{
		ptr->next=a;
		a=a->next;
		ptr=ptr->next;
	}
	while(b!=NULL)
	{
		ptr->next=b;
		b=b->next;
		ptr=ptr->next;
	}
	return copy.next;
}

int main()
{
	LL* he=new LL(0);
	LL* she=new LL(1);
	he->next=new LL(2);
	he->next->next=new LL(4);
	he->next->next->next=new LL(6);
	he->next->next->next->next=new LL(8);
	he->next->next->next->next->next=new LL(10);
	he->next->next->next->next->next->next=new LL(12);
	she->next=new LL(3);
	she->next->next=new LL(5);
	she->next->next->next=new LL(7);
	he->print(he);
	she->print(she);
	LL* p=merge(he,she);
	p->print(p);

return 0;
}

