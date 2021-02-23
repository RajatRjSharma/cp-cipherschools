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

int diameter(Tree* tree,int &h)
{
	if(tree==NULL)
	{
		h=0;
		return 0;
	}
	int ls=0,ld=0;
	ld=diameter(tree->left,ls);
	int rs=0,rd=0;
	rd=diameter(tree->right,rs);
	
	h=max(ls,rs)+1;
	return max(ls+rs+1,max(ld,rd));
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
	int h=0;
	cout<<diameter(a,h)<<" ";

return 0;
}

