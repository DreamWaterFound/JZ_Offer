#include "Solution.h"

using namespace std;

int Solution::rectCover(int number)
{
    if(number==0)
        return 0;
    
    if(number==1 || number==2)
        return number;

    int a=2,    //n-1
        b=1,    //n-2
        res;

    for(int i=2;i<number;i++)
    {
        res=a+b;
        b=a;
        a=res;
    }
    return res;
}
