#include "data.h"

using namespace std;

//正常数据1
vector<int> getTestData1(void)
{
	vector<int> res;

	res.push_back(3);
	res.push_back(4);
	res.push_back(5);
	res.push_back(1);
	res.push_back(2);

	return res;
}


//正常数据2
vector<int> getTestData2(void)
{
	vector<int> res;

	res.push_back(6);
	res.push_back(7);
	res.push_back(8);
	res.push_back(9);
	res.push_back(10);
	res.push_back(28);
	res.push_back(2);
	res.push_back(3);
	res.push_back(4);
	res.push_back(5);

	return res;
}


//非正常数据1：含有重复数字
vector<int> getTestData3(void)
{
	vector<int> res;
	
	res.push_back(35);
	res.push_back(40);
	res.push_back(42);
	res.push_back(5);
	res.push_back(5);
	res.push_back(5);
	res.push_back(6);
	res.push_back(30);
	res.push_back(31);
	res.push_back(35);

	return res;
}


//非正常数据2：完全升序排序的数组
vector<int> getTestData4(void)
{
	vector<int> res;
	res.push_back(5);
	res.push_back(5);
	res.push_back(5);
	res.push_back(6);
	res.push_back(30);
	res.push_back(31);
	res.push_back(35);
	res.push_back(35);
	res.push_back(40);
	res.push_back(42);
	

	return res;
}

//非正常数据3：只包含一个数字的数组
vector<int> getTestData5(void)
{
	vector<int> res;
	
	res.push_back(6);

	return res;
}

//非正常数据4：特殊输入（空数组）
vector<int> getTestData6(void)
{
	vector<int> res;

	return res;
}




