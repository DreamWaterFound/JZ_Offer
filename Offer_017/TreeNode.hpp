#ifndef __TREE_NODE__
#define __TREE_NODE__

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(nullptr), right(nullptr) {
	}
};

#endif //__TREE_NODE__