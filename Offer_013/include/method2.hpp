//方法2:这个也是自己最初所想到的办法,不过空间复杂度会比较大

#ifndef __METHOD_2_HPP__
#define __METHOD_2_HPP__

#include <vector>

using namespace std;

class Solution {
public:
    void reOrderArray(vector<int> &array);
};

void Solution::reOrderArray(vector<int> &array)
{
    vector<int> input=array;
    array.clear();

    for(int i=0;i<input.size();i++)
    {
        if(input[i]%2==1)
        {
            //说明是奇数,存储
            array.push_back(input[i]);
        }
    }

    for(int i=0;i<input.size();i++)
    {
        if(input[i]%2==0)
        {
            //说明是偶数,存储
            array.push_back(input[i]);
        }
    }
    
}

#endif //__METHOD_2_HPP__