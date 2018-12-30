#pragma once
#include <stack>


using namespace std;


//这次这个类就不太方便作为静态类来使用了
class Solution
{
public:
	void push(int node);

	int pop();

private:
	stack<int> stack1;
	stack<int> stack2;
};