#include <iostream>
#include "Solution.h"

using namespace std;

int main(int argc,char* argv[])
{
    Solution s;
    int n;

    while(1)
    {
        cout<<"Input n, which -10 means exit:";
        cin>>n;
        if(n!=-10)
        {
            cout<<"Fibonacci( "<<n<<" ) = "<<s.Fibonacci(n)<<endl;
        }
        else
        {
            break;
        }
    }

    cout<<"Program terminated."<<endl;
    return 0;
}