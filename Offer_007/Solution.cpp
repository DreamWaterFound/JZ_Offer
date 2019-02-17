#include "Solution.h"

using namespace std;

//最笨的办法，但是时间复杂度也是非常高的，因为其中有非常复杂的计算
/*
int Solution::Fibonacci(int n)
{
    //递归函数，如果n=1or2就是1，否则递归调用
    if(n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return Fibonacci(n-1)+Fibonacci(n-2);
    }
}
*/

//常规思路
int Solution::Fibonacci(int n)
{
    //特殊情况考虑
    if(n<=0)
        return 0;


    //递归函数，如果n=1or2就是1，否则递归调用
    if(n==1 || n==2)
    {
        return 1;
    }
    
    int a=1,    //n-1
        b=1;    //n-2
    int res;
    for(int i=2;i<n;i++)
    {
        res=a+b;
        //移动
        b=a;
        a=res;
    }

    return res;
}