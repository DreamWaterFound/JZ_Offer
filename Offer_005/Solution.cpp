#include "Solution.h"
#include <iostream>

using namespace std;

int Solution::minNumberInRotateArray(vector<int> rotateArray)
{
	//���ȼ����������Ƿ��ǿ�����
	if (rotateArray.size() == 0)
	{
		//����ǿ����飬��ô������ĿҪ����Ҫ����0
		return 0;
	}

	//Ȼ����������ָ��
	int start = 0;
	int end = rotateArray.size() - 1;

	//����������ת�����Ƿ���Ĵ���
	if (rotateArray[start] < rotateArray[end])
	{
		//˵����ת���ֳ���Ϊ0����ʵ��������֮������飬����ͷ������С��Ԫ��
		return rotateArray[0];
	}

	//Ȼ��ʼѭ��
	while (end - start > 1)
	{
		//�����������õ��м�λ��
		int mid = (end - start) / 2 + start;
#ifdef DEBUG
		cout << "[debug] start=" << start << " mid=" << mid << " end=" << end << endl;
#endif 
		//�ж����������
		if (rotateArray[start] == rotateArray[end] && rotateArray[start] == rotateArray[mid])
		{
			//�������ʱû�а취�жϣ�ֻ�ܹ�˳������
			return minInOrder(rotateArray, start, end);
		}
		//ʣ�µ�����У��϶���start>end�ˣ���������ж�mid��start��end֮��Ĵ�С��ϵ��
		if (rotateArray[mid] >= rotateArray[start])		//TODO ����ȺżӲ��ӣ�
		{
			//������˵���м�λ�õ��Ǹ�Ԫ�����ڵ�һ�����������棬������Ҫ�����������䵽mid~end��
			start = mid;
		}
		else
		{
			//������ǣ�˵���м�λ�õ��Ǹ�Ԫ�����ڵڶ������������棬��������Ϊmid~end
			end = mid;
		}
	}

	//���ʱ���˵��end-start==1��
	return rotateArray[end];
}

int Solution::minInOrder(vector<int> arr, int start, int end)
{
	int min=arr[start];
	for (int i = start+1; i <= end; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}

	return min;
}
