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

bool isleaf(Tree* head)
{
	return ((head->left==NULL) && (head->right==NULL));
}

int leaftoleafsum(Tree* head,int &sum)
{
	if(head==NULL)
	{
		sum=0;
		return 0;
	}
	if(isleaf(head))
	{
		sum=0;
		return head->data;
	}
	
	int ls=leaftoleafsum(head->left,sum);
	int rs=leaftoleafsum(head->right,sum);
	cout<<head->data<<" "<<ls<<" "<<rs<<endl;
	if(!isleaf(head))
	{
		sum=max(sum,ls+rs+head->data);
		return (max(ls,rs)+head->data);
	}
	else
	{
		return head->left==NULL?head->data+rs:head->data+ls;
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
	int sum=0;
	cout<<leaftoleafsum(a,sum);
	cout<<endl<<sum;

return 0;
}

