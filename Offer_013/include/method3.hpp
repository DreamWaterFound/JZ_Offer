//方法3:"平移"的想法,时间复杂度比较大

#ifndef __METHOD_3_HPP__
#define __METHOD_3_HPP__

#include <vector>

using namespace std;

class Solution {
public:
    void reOrderArray(vector<int> &array);
};

void Solution::reOrderArray(vector<int> &array)
{
    int i=0;  //索引
    int t;  //暂存

    int first_odd_pos=0;      //第一个奇数的位置
    int even_len=0;           //偶数序列的长度

    //首先要检查一下前面出现的偶数,或者是连续偶数
    if(array[i]%2==0)
    {
        //如果第一个是偶数,接下来再找不是偶数的
        for(;i<array.size();i++)
        {
            if(array[i]%2==1)
            {
                //第一个奇数,记录位置
                first_odd_pos=i;
                break;
            }
        }
        //调整指针到下一个
        i++;        

        //然后开始调换
        t=array[first_odd_pos];
        for(int m=first_odd_pos;m>0;m--)
        {
            //向后移动
            array[m]=array[m-1];
        }
        //最后把奇数放在前面
        array[0]=t;
        //计算偶数序列的长度
        even_len=first_odd_pos;

    }
   
    //下面就是正常的遍历了
    for(;i<array.size();i++)
    {
        if(array[i]%2==0)
        {
            //说明遇到了偶数,按兵不动
            even_len++;
        }
        else
        {
            //说明是奇数,移动
            t=array[i];
            for(int m=i,cnt=0;cnt<even_len;cnt++,m--)
            {
                array[m]=array[m-1];
            }
            
            array[i-even_len]=t;
        }
    }
    
}

#endif //__METHOD_3_HPP__