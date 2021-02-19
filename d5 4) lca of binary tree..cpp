#include<bits/stdc++.h>
using namespace std;

class Tree{
	public:
		int data;
		Tree *left;
		Tree *right;
		Tree()
		{
			Tree(0);
		}
		Tree(int data)
		{
			this->data=data;
			this->left=this->right=NULL;
		}
};

Tree* add(int data)
{
	Tree * newtree=new Tree;
	newtree->data=data;
	newtree->left=newtree->right=NULL;
	return newtree;
}

Tree* out(Tree* root,Tree* a,Tree* b)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(a==root || b==root)
	{
		return root;
	}
	Tree* l=out(root->left,a,b);
	Tree* r=out(root->right,a,b);
	if(l!=NULL && r!=NULL)
	{
		return root;
	}
	else
	{
		return l!=NULL?l:r;
	}
}

int main()
{
	Tree* t=add(1);
	t->left=add(2);
	t->right=add(3);
	t->left->left=add(4);
	t->left->right=add(5);
	t->right->left=add(6);
	t->right->right=add(7);
	Tree* a=t->left->left;
	Tree* b=t->left;
	Tree* c=out(t,a,b);
	cout<<c->data<<endl;

return 0;
}

