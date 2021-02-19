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
//};

//class SLL{
//	public:
//	LL* head;
//	SLL()
//	{
//		this->head=NULL;
//	}
	
	
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

LL* helper(LL* a,LL* b,int d)
	{
		LL* p=a,*q=b;
		for(int i=0;i<d;i++)
		{
			if(p==NULL)
			{
				return NULL;
			}
			p=p->next;
		}
		while(p!=NULL && q!=NULL)
		{
		if(p==q)
		{
			return p;
		}
		p=p->next;
		q=q->next;
	}
	return NULL;
	}
	
	LL* checkinter(LL* a,LL* b)
	{
		if(a==NULL || b==NULL)
		{
			return NULL;
		}
		int sizea=a->getsize(a);
		int sizeb=b->getsize(b);
		int diff=sizea-sizeb;
		if(diff>=0)
		{
			return helper(a,b,diff);
		}
		else
		{
			return helper(b,a,-1*diff);
		}
	}
	

int main()
{
	LL* he=new LL(0);
	LL* she=new LL(0);
	he->next=new LL(1);
	he->next->next=new LL(2);
	he->next->next->next=new LL(3);
	he->next->next->next->next=new LL(4);
	he->next->next->next->next->next=new LL(5);
	he->next->next->next->next->next->next=new LL(6);
	she->next=new LL(11);
	she->next->next=new LL(12);
	she->next->next->next=new LL(13);
	she->next->next->next->next=he->next->next->next->next->next;
	he->print(he);
	she->print(she);
	cout<<he->getsize(he);
	cout<<"\n";
	cout<<she->getsize(she);
	cout<<"\n";
	LL* out=checkinter(he,she);
	out->print(out);

return 0;
}

