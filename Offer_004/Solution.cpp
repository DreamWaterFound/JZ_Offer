/*
	����std::stack�Ĳ������Բο���ƪ���ͣ�https://blog.csdn.net/zy2317878/article/details/79739922
*/


#include "Solution.h"

using namespace std;

//��������������
void Solution::push(int node)
{
	//���ݷ���������֪��ֻҪ���������������ݣ����Ǿ�Ҫpush ����ջ1��
	stack1.push((const int)node);
	
	//Ȼ������û��������ʲô������
}

//����ԭ�ͺ���Ŀ�е�Ҫ�󱣳���ȫһ��
int Solution::pop()
{
	int res;
	//����ǰ��ķ�����ֻҪ�ǴӶ����������浯�����������ǴӶ�ջ���е���
	//����������Ͳ������жϣ������ջ������������û��Ԫ���أ�
	if (stack2.empty())
	{
		//����ǿյ�,��ô��Ҫ��stack1�е�Ԫ��������ӵ�stack2��
		int tmp;
		while (!stack1.empty())
		{
			tmp = stack1.top();
			stack1.pop();
			stack2.push(tmp);
		}

		//ת�����֮�󣬾͵���stack2�Ķ���Ԫ��
		res = stack2.top();
		stack2.pop();
	}
	else
	{
		//������ǿյģ���ô��ֱ�ӵ����Ϳ���
		res = stack2.top();
		stack2.pop();
	}

	return res;
}