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

void removedupli(LL* head)
{
	if(head==NULL || head->next== NULL)
	{
		return;
	}
	LL* cur=head,*nxt=NULL;
	while(cur->next!=NULL)
	{
		if(cur->data == cur->next->data)
		{
			nxt=cur->next;
			cur->next=nxt->next;
			delete(nxt);
		}
		else
		{
			cur=cur->next;
		}
	}
}


int main()
{
	LL * he=new LL(1);
	he->next=new LL(2);
	he->next->next=new LL(2);
	he->next->next->next=new LL(3);
	he->next->next->next->next=new LL(4);
	he->next->next->next->next->next=new LL(5);
	he->next->next->next->next->next->next=new LL(5);
	he->print(he);
	removedupli(he);
	he->print(he);

return 0;
}

