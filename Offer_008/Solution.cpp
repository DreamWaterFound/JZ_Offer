#include "Solution.h"

using namespace std;

int Solution::jumpFloor(int number)
{
    if(number==0)
        return 0;
    if(number==1)
        return 1;
    if(number==2)
        return 2;

    int a=2,    //n-1
        b=1;    //n-2
    int res;

    for(int i=2;i<number;i++)
    {
        res=a+b;
        b=a;
        a=res;
    }
    return res;
}
// 1 2 3 5