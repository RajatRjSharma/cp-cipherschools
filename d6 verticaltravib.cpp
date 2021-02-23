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

void vertical(Tree* head,int lev,map<int,vector<int>> &mp)
{
	if(head==NULL)
	{
		return;
	}
	mp[lev].push_back(head->data);
	vertical(head->left,lev-1,mp);
	vertical(head->right,lev+1,mp);
}

void vertical(Tree* head)
{
	if(head==NULL)
	{
		return;
	}
	map<int,vector<int>> mp;
	vertical(head,0,mp);
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		for(int i=0;i<it->second.size();i++)
		{
			cout<<it->second[i]<<" ";
		}
		cout<<"\n";
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
	vertical(a);

return 0;
}

