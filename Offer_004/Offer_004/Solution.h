#pragma once
#include <stack>


using namespace std;


//��������Ͳ�̫������Ϊ��̬����ʹ����
class Solution
{
public:
	void push(int node);

	int pop();

private:
	stack<int> stack1;
	stack<int> stack2;
};