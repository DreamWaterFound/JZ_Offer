# OFFER004
这个是第四题。（其实应该是第五道题了。。建工程的时候打错了。。。）

## 题目描述

用两个栈来实现一个队列，完成队列的Push和Pop操作。 队列中的元素为int类型。

## 初始信息
```
class Solution
{
public:
    void push(int node) ;

    int pop() ;

private:
    stack<int> stack1;
    stack<int> stack2;
};
```

要求实现队列的push和pop函数。

## 实现的基本思想
由于堆栈是“先进后出”，队列是“先进后出”，为了调节这个顺序关系，我们就需要首先将压入队列中的数据存储在stack1中，
然后再弹出、压入到stack2中，此时如果需要从队列中弹出数据，那么就从堆栈stack2中弹出数据就可以了。因为经过了
这样一个stack1->stack2的操作，等到从stack2中弹出的时候，数据就已经有了正确了弹出顺序了。
注意的是，在弹出的时候需要判断一下stack2是否为空

## 依赖
STL库.std::stack.

