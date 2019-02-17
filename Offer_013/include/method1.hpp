//方法1:使用两个指针进行数据的交换

#ifndef __METHOD_1_HPP__
#define __METHOD_1_HPP__

#include <vector>

using namespace std;

class Solution {
public:
    void reOrderArray(vector<int> &array);
};

void Solution::reOrderArray(vector<int> &array)
{
    int p1=0;
    int p2=array.size()-1;

    //只要p1没有超过p2,那么就一直继续;每循环一次,p1或者p2就会移动一下,或者进行偶数或者奇数的交换
    while(p1<p2)
    {
        //我们最初的想法就是, p1指向一个偶数,p2指向一个奇数,然后两者进行交换
        //如果p1指向了偶数
        if(array[p1]%2==0)
        {
            if(array[p2]%2==0)
            {
                //如果p2也指向了一个偶数,那么p2要前移
                p2--;
            }
            else
            {
                //如果p2指向了一个奇数, 那么好我们现在进行交换
                int t=array[p1];
                array[p1]=array[p2];
                array[p2]=t;
            }
        }
        else
        {
            //如果p1指向了奇数
            p1++;
        }
    }
}

#endif //__METHOD_1_HPP__