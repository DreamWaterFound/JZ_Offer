#include "Solution.h"

using namespace std;

int Solution::jumpFloorII(int number)
{
    if(number==0)
        return 0;
    long res=1;

    for(int i=1;i<number;i++)
    {
        res*=2;
    }
    return res;
}
