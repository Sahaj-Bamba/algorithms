#include <stdio.h>
#include<malloc.h>

typedef struct node
{
	struct node *left;
	struct node *right;
	int val;
	int lev;
} N ;

N* new(int x){
	N* q = (N*)(malloc(sizeof(N)));
	q->val = x;
	q->left = q->right = NULL;
	return q;
}

void bfs(N* root){
	root->lev = 0;
	N* A[10000];
	int l=0;
	int r=0;

	A[r++]=root;

	while(l<r){
		N* t = A[l++];

		if (t->left!=NULL)
		{
			t->left->lev = t->lev+1;
			A[r++] = t->left;
		}
		if (t->right!=NULL)
		{
			t->right->lev = t->lev+1;
			A[r++] = t->right;
		}

	}

}

int lev_sum[100000]={0};

void max_lev_sum(N* root){
	if(root==NULL)
		return;
	lev_sum[root->lev]+=root->val;
	max_lev_sum(root->left);
	max_lev_sum(root->right);
}


int mx(int a,int b){
	return (a>b)?a:b;
}

int height(N* root){
	if (root==NULL)
	{
		return 0;
	}
	return mx(height(root->left),height(root->right))+1;
}

int mx_diam = 0;
int diameter(N* root){
	if (root == NULL)
	{
		return 0;
	}
	int x = height(root->left)+height(root->right)+1;
	if(mx_diam<x)
		mx_diam=x;
	diameter(root->left);
	diameter(root->right);
}

int main(int argc, char const *argv[])
{
	N* root = new(1);
	root->left = new(2);
	root->right = new(3);
	root->left->left = new(4);
	root->right->left = new(5);

/*
	bfs(root);

	max_lev_sum(root);

	int mx=0;
	for (int i = 0; i < 100; ++i)
	{
		if (mx<lev_sum[i])
		{
			mx=lev_sum[i];
		}
	}
	*/
	diameter(root);
	printf("%d\n",mx_diam );
	return 0;
}