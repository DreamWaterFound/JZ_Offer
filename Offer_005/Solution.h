#pragma once

#include <vector>
using namespace std;

class Solution {
public:
	int minNumberInRotateArray(vector<int> rotateArray);
private:
	int minInOrder(vector<int> arr, int start, int end);
};