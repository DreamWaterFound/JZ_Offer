#ifndef __SOLUTION_HPP__
#define __SOLUTION_HPP__

#include "./ListNode.hpp"

class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2);

};

ListNode* Solution::Merge(ListNode* pHead1, ListNode* pHead2)
{
    ListNode *pCurr1=nullptr,*pCurr2=nullptr;
    ListNode* pHead=nullptr;
    ListNode* pTmp=nullptr;

    //首先判断输入的节点是否合法
    if(pHead1==nullptr && pHead2==nullptr)
        return nullptr;
    else if(pHead1 == nullptr && pHead2)
        return pHead2;
    else if(pHead2 == nullptr && pHead1)
        return pHead1;

    //首先是初始化的问题,如果只有头节点？
    pCurr1=pHead1;
    pCurr2=pHead2;


    //确定头指针
    if(pCurr1->val <= pCurr2->val)
    {
        pHead=pCurr1;
    }
    else
    {
        pHead=pCurr2;
    }

    
    //先不考虑链表结束的问题
    while(pCurr1 && pCurr2)
    {
        if(pCurr1->val <= pCurr2->val)
        {
            //这里其实合并了两种情况下的操作
            //NOTICE 技巧：在逻辑或表达式中，如果第一个条件满足，那么就不会执行第二个表达式的计算和判断
            if(pCurr1->next == nullptr || pCurr2->val <= pCurr1->next->val)
            {
                pTmp=pCurr1->next;
                pCurr1->next=pCurr2;
                pCurr1=pTmp;
            }
            else
            {
                pCurr1=pCurr1->next;
            } 
        }
        else
        {
            if( pCurr2->next == nullptr || pCurr1->val <= pCurr2->next->val)
            {
                pTmp=pCurr2->next;
                pCurr2->next=pCurr1;
                pCurr2=pTmp;
            }
            else
            {
                pCurr2=pCurr2->next;
            }
        }   
    }

    //如果有一个链表已经空了，说明后面的部分都不用管了
    return pHead;
    
}




#endif //__SOLUTION_HPP__
