#ifndef __SOLUTION_HPP__
#define __SOLUTION_HPP__

#include "TreeNode.hpp"


class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2);
    bool Check(TreeNode* pRoot1, TreeNode* pRoot2);
};

/**
 * @brief 判断pRoot2是否是pRoot1的子结构
 * 
 * @param[in] pRoot1 节点
 * @param[in] pRoot2 节点
 * @return true 
 * @return false 
 */
bool Solution::HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
{
    //注意对任何二叉树来说，每个节点下面要么没有任何东西，要么就有两个叶子节点

    //边界检查：A树节点为空吗？为空那么false
    //同样地,   B树节点为空吗?如果是,那么根据假设,拜拜
    if(pRoot1==nullptr || pRoot2==nullptr )
    {
        return false;
    }
    


    //进行进一步检查
    if(Check(pRoot1,pRoot2)==true)
    {
        //是子结构,返回true
        return true;
    }
        //如果不是?没事继续走
    

    //接着遍历接下来的节点
    
    
    return (HasSubtree(pRoot1->left,pRoot2) || HasSubtree(pRoot1->right,pRoot2)) ;//
}

bool Solution::Check(TreeNode* pRoot1, TreeNode* pRoot2)
{
    
    //我们要比较的是两个节点的数值是否相同
    //如果两个均为空指针
    
    if(pRoot1==nullptr && pRoot2==nullptr)
    {
        return true;
    }
    

    if(pRoot1==nullptr && pRoot2!=nullptr)
    {
        return false;
    }

    if(pRoot1!=nullptr && pRoot2==nullptr)
    {
        return true;
    }

    //剩下的说明比较都是合法的了
    if(pRoot1->val == pRoot2->val)
    {
        return (Check(pRoot1->left,pRoot2->left) && Check(pRoot1->right,pRoot2->right));
    }
    else
    {
        return false;
    }
    
    

    
    
    

/*

    //虽然可能并没有必要,但是还要检查一下自身是否为空指针
    if(pRoot2==nullptr && pRoot1)
    {

    }

    //边界检查
    if(pRoot1->left==nullptr && pRoot1->right==nullptr)
    {
        //当前节点到底了.如果要为真,那么相应的B树节点必须也要到底
        return (pRoot2->left==nullptr && pRoot2->right==nullptr);
    }

    //此外如果到了树B的子节点,说明匹配完成了
    if(pRoot2->left==nullptr && pRoot2->right==nullptr)
        return true;

    //如果有子节点,那么就比较各自的两个子节点
    //NOTICE 这里已经使用了二叉树的假设, 不会出现左节点为空但是右节点不为空的情况
    if( ((pRoot1->left->val ) == (pRoot2->left->val )) &&
        ((pRoot1->right->val) == (pRoot2->right->val)) )
    {
        //这个时候还不敢确定,还要分别再比较两个子节点的
        return (Check(pRoot1->left,pRoot2->left)&&Check(pRoot1->right,pRoot2->right));
        
    }
    else
    {
        //如果不相等,那么肯定为否
        return false;
    }
    */

}





#endif //__SOLUTION_HPP__