#include <iostream>
#include <vector>

#include "Solution.h"
#include "data.h"

using namespace std;


int main(int argc, char* argv[])
{
	//�½�һ�������������
	Solution s;

	cout << "OFFER 005." << endl;
	
	vector<int> data1 = getTestData1();
	cout << "��������1�Ľ����  "<<endl;
	cout << s.minNumberInRotateArray(data1) << endl;

	vector<int> data2 = getTestData2();
	cout << "��������2�Ľ����  " << endl;
	cout << s.minNumberInRotateArray(data2) << endl;

	vector<int> data3 = getTestData3();
	cout << "��������3�Ľ����  " << endl;
	cout << s.minNumberInRotateArray(data3) << endl;

	vector<int> data4 = getTestData4();
	cout << "��������4�Ľ����  " << endl;
	cout << s.minNumberInRotateArray(data4) << endl;

	vector<int> data5 = getTestData5();
	cout << "��������5�Ľ����  " << endl;
	cout << s.minNumberInRotateArray(data5) << endl;
	
	vector<int> data6 = getTestData6();
	cout << "��������6�Ľ����  " << endl;
	cout << s.minNumberInRotateArray(data6) << endl;
	return 0;
}



