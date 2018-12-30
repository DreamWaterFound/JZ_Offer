#include "Solution.h"
#include <iostream>

using namespace std;

int Solution::minNumberInRotateArray(vector<int> rotateArray)
{
	//首先检查这个数组是否是空数组
	if (rotateArray.size() == 0)
	{
		//如果是空数组，那么按照题目要求需要返回0
		return 0;
	}

	//然后设置三个指针
	int start = 0;
	int end = rotateArray.size() - 1;

	//检查数组的旋转部分是否真的存在
	if (rotateArray[start] < rotateArray[end])
	{
		//说明旋转部分长度为0，其实就是排序之后的数组，数组头就是最小的元素
		return rotateArray[0];
	}

	//然后开始循环
	while (end - start > 1)
	{
		//整数除法，得到中间位置
		int mid = (end - start) / 2 + start;
#ifdef DEBUG
		cout << "[debug] start=" << start << " mid=" << mid << " end=" << end << endl;
#endif 
		//判断是哪种情况
		if (rotateArray[start] == rotateArray[end] && rotateArray[start] == rotateArray[mid])
		{
			//这种情况时没有办法判断，只能够顺序排序
			return minInOrder(rotateArray, start, end);
		}
		//剩下的情况中，肯定是start>end了，下面就是判断mid和start和end之间的大小关系了
		if (rotateArray[mid] >= rotateArray[start])		//TODO 这个等号加不加？
		{
			//这样子说明中间位置的那个元素是在第一个子数组里面，所以需要调整搜索区间到mid~end中
			start = mid;
		}
		else
		{
			//如果不是？说明中间位置的那个元素是在第二个子数组里面，调整区间为mid~end
			end = mid;
		}
	}

	//这个时候就说明end-start==1了
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
