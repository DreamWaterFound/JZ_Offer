#include <iostream>
#include "Solution.h"

using namespace std;

int main(int argc,char *argv[])
{
    Solution s;

    int n;
    while(1)
    {
        cout<<"input n , -1 =exit:";
        cin>>n;

        if(n==-1)
        {                                                                                
            break;
        }
        else
        {
            cout<<"floor "<<n<<" has "<<s.rectCover(n)<<" solution(s)."<<endl;
        }
    }

    return 0;
}