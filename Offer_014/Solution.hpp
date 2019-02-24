#ifndef __SOLUTION_HPP__
#define __SOLUTION_HPP__

#include "./ListNode.hpp"

class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k);

};


//初步的想法是延后机制
ListNode* Solution::FindKthToTail(ListNode* pListHead, unsigned int k)
{
    //指向当前遍历节点的指针
    ListNode* pCurr=nullptr;
    //在当前遍历节点的指针的基础上延后了k个节点的指针       
    ListNode* pBack=nullptr;

    if(k==0)   return nullptr;

    //存储了上面两个指针之间差的变量
    unsigned int nCnt=k-1;

    //判断初始条件的合法性
    if(pListHead==nullptr)
    {
        return nullptr;
    }
    else
    {
        pCurr=pListHead;
        pBack=pCurr;
    }
    

    //准备开始对链表展开遍历
    while(1)
    {
        //更新当前遍历
        pCurr=pCurr->next;
        if(pCurr==nullptr)
        {
            break;
        }
        if(nCnt)
        {
            nCnt--;
        }
        else
        {
            pBack=pBack->next;
        }
    } 

    if(nCnt)
    {
        return nullptr;
    }
    else
    {
        return pBack;
    }
}





#endif //__SOLUTION_HPP__