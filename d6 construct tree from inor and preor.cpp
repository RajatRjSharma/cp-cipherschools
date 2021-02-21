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
		head=s.top();
		s.pop();
		head=head->right;
	}
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

int search(vector<int> &v,int s,int e,int n)
{
	for(int i=s;i<e;i++)
	{
		if(v[i]==n)
		{
			return i;
		}
	}
}

int ind=0;
Tree* com(vector<int> &pre,vector<int> &in,int s,int e)
{
	if(s>e)
	{
		return NULL;
	}
	Tree* tree=new Tree(pre[ind]);
	ind++;
	if(s==e)
	{
		return tree;
	}
	else
	{
		int m=search(in,s,e,tree->data);
		tree->left=com(pre,in,s,m-1);
		tree->right=com(pre,in,m+1,e);
	}
	return tree;
}

int main()
{
	vector<int> pre={1,2,4,5,3,6,7};
	vector<int> in={4,2,5,1,6,3,7};
	Tree* tree=com(pre,in,0,pre.size()-1);
	preorder(tree);
	cout<<endl;
	inorder(tree);
	
	
	
return 0;
}

