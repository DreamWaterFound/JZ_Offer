/*
	关于std::stack的操作可以参考这篇博客：https://blog.csdn.net/zy2317878/article/details/79739922
*/


#include "Solution.h"

using namespace std;

//向队列中添加内容
void Solution::push(int node)
{
	//根据分析，我们知道只要是向队列中添加内容，我们就要push 到堆栈1中
	stack1.push((const int)node);
	
	//然后好像就没有其他的什么操作了
}

//函数原型和题目中的要求保持完全一致
int Solution::pop()
{
	int res;
	//根据前面的分析，只要是从队列中向外面弹出东西，就是从堆栈二中弹出
	//于是在这里就产生了判断：这个堆栈二现在里面有没有元素呢？
	if (stack2.empty())
	{
		//如果是空的,那么需要将stack1中的元素逆序添加到stack2中
		int tmp;
		while (!stack1.empty())
		{
			tmp = stack1.top();
			stack1.pop();
			stack2.push(tmp);
		}

		//转移完成之后，就弹出stack2的顶端元素
		res = stack2.top();
		stack2.pop();
	}
	else
	{
		//如果不是空的，那么就直接弹出就可以
		res = stack2.top();
		stack2.pop();
	}

	return res;
}