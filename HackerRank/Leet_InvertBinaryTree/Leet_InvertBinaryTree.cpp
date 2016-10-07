// Leet_InvertBinaryTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include "stdafx.h"

using namespace std;

class TreeNode
{	
	public:
	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int _data)
	{
		val=_data;
	}
};

class Solution2 {
public:
	TreeNode* invertTree(TreeNode* root) {
		TreeNode* head = root;

	}
};

class Solution {
	int summ;

public:
	int sumOfLeftLeaves(TreeNode* root) {

		if (root==NULL)
		{
			return 0;
		}
		summ=0;
		bool ok=false;
		Rec(root, ok);
		return summ;
	}

	void Rec(TreeNode* root, bool ok)
	{		
		if (root==NULL) 
		{
			return;
		}
		if (ok && root->left==NULL && root->right==NULL)
		{
			summ = summ + root->val;
		}
		

		Rec (root->left, true);

		Rec(root->right, false);
	}

};


int _tmain(int argc, _TCHAR* argv[])
{
	Solution s;
	TreeNode tr(1); 	
	tr.left = new TreeNode (2);
	tr.right = new TreeNode (20);
	tr.right->left = new TreeNode (15);
	tr.right->right = new TreeNode (7);

	int k = s.sumOfLeftLeaves(&tr);

	return 0;
}
