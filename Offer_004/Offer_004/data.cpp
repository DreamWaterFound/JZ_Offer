#include "data.h"
#include <iostream>
#include "Solution.h"
using namespace std;

//这里，目前就不打算使用类来实现了

//1 2 3 4 5 6
void testOrder1(void)
{
	Solution s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);

	cout << "Push complete. Now we are ready to pop them:" << endl;
	
	for (int i = 0; i < 6; i++)
	{
		cout << s.pop() << " ";
	}

	cout << endl;
}

#include "data.h"
#include <iostream>
#include "Solution.h"
using namespace std;

//这里，目前就不打算使用类来实现了

//0 2 6 8 10
void testOrder2(void)
{
	Solution s;

	s.push(0);
	s.push(1);
	s.pop();
	s.push(2);
	s.push(3);
	s.pop();
	s.push(4);
	s.push(5);
	s.pop();
	s.push(6);
	s.push(7);
	s.pop();
	s.push(8);
	s.push(9);
	s.pop();


	cout << "Push complete. Now we are ready to pop them:" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << s.pop() << " ";
	}

	cout << endl;
}





