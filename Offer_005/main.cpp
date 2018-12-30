#include <iostream>
#include <vector>

#include "Solution.h"
#include "data.h"

using namespace std;


int main(int argc, char* argv[])
{
	//新建一个解决方案对象
	Solution s;

	cout << "OFFER 005." << endl;
	
	vector<int> data1 = getTestData1();
	cout << "测试数据1的结果：  "<<endl;
	cout << s.minNumberInRotateArray(data1) << endl;

	vector<int> data2 = getTestData2();
	cout << "测试数据2的结果：  " << endl;
	cout << s.minNumberInRotateArray(data2) << endl;

	vector<int> data3 = getTestData3();
	cout << "测试数据3的结果：  " << endl;
	cout << s.minNumberInRotateArray(data3) << endl;

	vector<int> data4 = getTestData4();
	cout << "测试数据4的结果：  " << endl;
	cout << s.minNumberInRotateArray(data4) << endl;

	vector<int> data5 = getTestData5();
	cout << "测试数据5的结果：  " << endl;
	cout << s.minNumberInRotateArray(data5) << endl;
	
	vector<int> data6 = getTestData6();
	cout << "测试数据6的结果：  " << endl;
	cout << s.minNumberInRotateArray(data6) << endl;
	return 0;
}



