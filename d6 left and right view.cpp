#include<bits/stdc++.h>
using namespace std;

class Tree{
	public:
		int data;
		Tree* left;
		Tree* right;
		Tree()
		{
			Tree(0);
		}
		Tree(int data)
		{
			this->data=data;
			this->left=NULL;
			this->right=NULL;
		}
};

void leftview(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	queue<Tree*> q;
	q.push(head);
	Tree* curr;
	while(!q.empty())
	{
		int size=q.size();
		for(int i=0;i<size;i++)
		{
		curr=q.front();
		q.pop();
		if(i==0)
		{
			cout<<curr->data<<" ";
		}
		if(curr->left)
		{
			q.push(curr->left);
		}
		if(curr->right)
		{
			q.push(curr->right);
		}
	    }
	}
}


void rightview(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	queue<Tree*> q;
	q.push(head);
	Tree* curr;
	while(!q.empty())
	{
		int size=q.size();
		for(int i=0;i<size;i++)
		{
		curr=q.front();
		q.pop();
		if(i==size-1)
		{
			cout<<curr->data<<" ";
		}
		if(curr->left)
		{
			q.push(curr->left);
		}
		if(curr->right)
		{
			q.push(curr->right);
		}
	    }
	}
}



int main()
{
	Tree* a=new Tree(-1);
	a->left=new Tree(2);
	a->right=new Tree(3);
	a->left->left=new Tree(4);
	a->left->right=new Tree(5);
	a->right->left=new Tree(6);
	a->right->right=new Tree(7);
	leftview(a);
	cout<<endl;
	rightview(a);

return 0;
}

