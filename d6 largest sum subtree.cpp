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

int calsum(Tree * head,int &sumsofar)
{
	if(head==NULL)
	{
		return 0;
	}
	int l=calsum(head->left,sumsofar);
	int r=calsum(head->right,sumsofar);
	
	int cusum=head->data+l+r;
	//cout<<l<<" "<<r<<" "<<head->data<<endl;
	sumsofar=max(sumsofar,cusum);
	return cusum;
}

int calsum(Tree * head)
{
	if(head==NULL)
	{
		return 0;
	}
	int sumsofar=INT_MIN;
	int sum=calsum(head,sumsofar);
	return sumsofar;
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
	cout<<calsum(a);

return 0;
}

