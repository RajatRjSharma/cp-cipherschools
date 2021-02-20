#include <bits/stdc++.h>
using namespace std;

class LL
{
public:
	int data;
	LL *next;
	LL(int data)
	{
		this->data = data;
		this->next = NULL;
	}
	LL()
	{
		LL(0);
	}
};

class SLL
{
public:
	LL *head;
	SLL()
	{
		this->head = NULL;
	}

	void addbeg(int data)
	{
		LL *newnode = new LL(data);
		//newnode->data=data;
		if (head == NULL)
		{
			head = newnode;
		}
		else
		{
			newnode->next = head;
			head = newnode;
		}
	}

	void addend(int data)
	{
		LL *newnode = new LL(data);
		//newnode->data=data;
		if (head == NULL)
		{
			head = newnode;
		}
		else
		{
			LL *ptr = head;
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = newnode;
		}
	}

	void print()
	{
		LL *curr = head;
		while (curr != NULL)
		{
			cout << curr->data << " ";
			curr = curr->next;
		}
		cout << "\n";
	}

	int size()
	{
		LL *curr = head;
		int size = 0;
		while (curr != NULL)
		{
			size++;
			curr = curr->next;
		}
		cout << "\n";
		return size;
	}

	void reverse()
	{
		if (head == NULL)
		{
			return;
		}
		LL *curr = head;
		LL *next = NULL;
		LL *prev = NULL;
		while (curr->next != NULL)
		{
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		curr->next = prev;
		head = curr;
		//return head;
	}
};

LL* addup(LL* a,LL* b)
{
	if(a==NULL)
	{
		return b;
	}
	if(b==NULL)
	{
		return a;
	}
	LL cop;
	LL* res=&cop,*p =a,*q =b;
	int car=0,sum=0;
	while(p!=NULL && q!=NULL)
	{
		sum=car+(p!=NULL?p->data:0)+(q!=NULL?q->data:0);
		car=sum/10;
		sum=sum%10;
		res->next=new LL(sum);
		res=res->next;
		
		if(p!=NULL)
		{
			p=p->next;
		}
		if(q!=NULL)
		{
			q=q->next;
		}
	}
	while(car>0)
	{
		res->next=new LL(car);
	}
	return cop.next;
}

int main()
{
	SLL l1, l2;
	for (int i = 1; i < 10; i++)
	{
		l1.addbeg(i);
		l2.addend(i);
	}
	l1.print();
	l2.print();
	cout << l1.size();
	cout << l2.size();
	cout << endl;
	//	LL * rev=l1.reverse();
	//	print(rev);
	l2.reverse();
	l2.print();
	SLL c;
	c.head=addup(l1.head,l2.head);
	c.print();

	return 0;
}
