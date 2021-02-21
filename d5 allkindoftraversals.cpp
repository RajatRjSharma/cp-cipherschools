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

void preorder(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	cout<<head->data<<" ";
	preorder(head->left);
	preorder(head->right);
}

void inorder(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	inorder(head->left);
	cout<<head->data<<" ";
	inorder(head->right);
}

void postorder(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	postorder(head->left);
	postorder(head->right);
	cout<<head->data<<" ";
}

int height(Tree* head)
{
	if(head==NULL)
	{
		return 0;
	}
	return 1+height(head->left)+height(head->right);
}

void printthelevel(Tree* head,int lev)
{
	if(head==NULL)
	{
		return;
	}
	if(lev==1)
	{
		cout<<head->data<<" ";
	}
	else
	{
		printthelevel(head->left,lev-1);
		printthelevel(head->right,lev-1);
	}
}

void levelorder(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	int h=height(head);
	for(int i=1;i<=h;i++)
	{
		printthelevel(head,i);
	}
}

void levelorderline(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	int h=height(head);
	for(int i=1;i<=h;i++)
	{
		printthelevel(head,i);
		cout<<"\n";
	}
}

void reverseorderline(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	int h=height(head);
	for(int i=h;i>=1;i--)
	{
		printthelevel(head,i);
		cout<<"\n";
	}
}

void levelorderin(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	queue<Tree*> q;
	q.push(head);
	while(!q.empty())
	{
		Tree* curr=q.front();
		q.pop();
		cout<<curr->data<<" ";
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

void levelorderinline(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	queue<Tree*> q;
	q.push(head);
	q.push(NULL);
	while(q.size()>1)
	{
		Tree* curr=q.front();
		q.pop();
		if(curr==NULL)
		{
//			if(q.empty())
//			{
//				return;
//			}
			q.push(NULL);
			cout<<endl;
		}
		else
		{
		cout<<curr->data<<" ";
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

void reverseorderinline(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	queue<Tree*> q;
	stack<Tree*> s;
	s.push(head);
	s.push(NULL);
	q.push(head);
	q.push(NULL);
	while(q.size()>1)
	{
		Tree* curr=q.front();
		q.pop();
		if(curr==NULL)
		{
//			if(q.empty())
//			{
//				return;
//			}
			q.push(NULL);
			s.push(NULL);
			//cout<<endl;
		}
		else
		{
		//cout<<curr->data<<" ";
		//s.push(curr);
		if(curr->left)
		{
			q.push(curr->left);
			s.push(curr->left);
		}
		if(curr->right)
		{
			q.push(curr->right);
			s.push(curr->right);
		}
	}
	}
	while(!s.empty())
	{
		Tree* c=s.top();
		s.pop();
		if(c==NULL)
	    {
	    	cout<<"\n";
		}
		else
		{
			cout<<c->data<<" ";
		}
	}
}

void preorderin(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	stack<Tree*> s;
	while(1)
	{
		while(head!=NULL)
		{
			cout<<head->data<<" ";
			s.push(head);
			head=head->left;
		}
		if(s.empty())
		{
			return;
		}
		head=s.top();s.pop();
		head=head->right;
	}
}

void inorderin(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	stack<Tree*> s;
	while(1)
	{
		while(head!=NULL)
		{
			s.push(head);
			head=head->left;
		}
		if(s.empty())
		{
			return;
		}
		head=s.top();s.pop();
		cout<<head->data<<" ";
		head=head->right;
	}
}

void postorderin(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	stack<Tree*> s1,s2;
	s1.push(head);
	while(!s1.empty())
	{
		Tree* c=s1.top();
		s1.pop();
		s2.push(c);
		if(c->left)
		s1.push(c->left);
		if(c->right)
		s1.push(c->right);
	}
	while(!s2.empty())
	{
		cout<<s2.top()->data<<" ";
		s2.pop();
	}
}





int main()
{
	Tree* a=new Tree(1);
	a->left=new Tree(2);
	a->right=new Tree(3);
	a->left->left=new Tree(4);
	a->left->right=new Tree(5);
	a->right->left=new Tree(6);
	a->right->right=new Tree(7);
//	preorder(a);
//	cout<<endl;
//	inorder(a);
//	cout<<endl;
//	postorder(a);
//	cout<<endl<<height(a)<<endl;
//	printthelevel(a,3);
//	cout<<endl;
//	levelorder(a);
//	cout<<endl;
//	levelorderline(a);
//	cout<<endl;
//	reverseorderline(a);
//	cout<<endl;
//	levelorderin(a);
//	cout<<endl;
//	levelorderinline(a);
//	cout<<endl;
//	reverseorderinline(a);
    cout<<endl;
    preorderin(a);
    cout<<endl;
    inorderin(a);
    cout<<endl;
    postorderin(a);
	

return 0;
}

