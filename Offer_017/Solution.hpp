#ifndef __SOLUTION_HPP__
#define __SOLUTION_HPP__

#include "TreeNode.hpp"

class Solution {
public:
    void Mirror(TreeNode *pRoot);
};


void Solution::Mirror(TreeNode *pRoot)
{
    //有效性检查
    if(pRoot==nullptr)  return ;

    //交换其两个子节点
    TreeNode *tmp;
    tmp=pRoot->left;
    pRoot->left=pRoot->right;
    pRoot->right=tmp;

    //然后对于两个子节点也要进行相同的操作
    Mirror(pRoot->left);
    Mirror(pRoot->right);

    return ;
}


#endif  //__SOLUTION_HPP__