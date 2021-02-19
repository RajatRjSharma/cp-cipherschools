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
};

class SLL{
	public:
	LL* head;
	SLL()
	{
		this->head=NULL;
	}
	
	LL* addbeg(int data)
	{
		LL* newnode=new LL(data);
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			newnode->next=head;
			head=newnode;
		}
		return head;
	}
	
	void print()
	{
		LL* ptr=head;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
		cout<<endl;
	}
	
	bool checkloop()
	{
		if(head==NULL || head->next==NULL)
		{
			return false;
		}
		LL* slow=head, *fast=head;
		while(slow!=NULL && fast!=NULL && fast->next!=NULL)
		{
			slow=slow->next;
			fast=fast->next->next;
			if(slow==fast)
			{
				return true;
			}
		}
		return false;
	}
	
	void removeloop()
	{
		if(head==NULL || head->next==NULL)
		{
			return;
		}
		LL* slow=head, *fast=head;
		bool loop=false;
		while(slow!=NULL && fast!=NULL && fast->next!=NULL)
		{
			slow=slow->next;
			fast=fast->next->next;
			if(slow==fast)
			{
				loop=true;
				break;
			}
		}
		if(loop)
		{
			slow=head;
			if(slow==fast)
			{
				while(fast->next!=slow)
				{
					fast=fast->next;
				}
			}
			else
			{
				while(slow->next!=fast->next)
				{
					slow=slow->next;
					fast=fast->next;
				}
			}
			fast->next=NULL;
		}
		else
		{
			return;
		}
	}
};

int main()
{
	SLL* he=new SLL();
	he->head=new LL(1);
	he->head->next=new LL(2);
	he->head->next->next=new LL(3);
	he->head->next->next->next=new LL(4);
	he->head->next->next->next->next=new LL(5);
	he->head->next->next->next->next->next=new LL(6);
	he->print();
	cout<<he->checkloop()<<endl;
	he->head->next->next->next->next->next->next=he->head->next;
	cout<<he->checkloop()<<endl;
	he->removeloop();
	cout<<he->checkloop()<<endl;
	he->print();
	

return 0;
}

