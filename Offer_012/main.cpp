#include <iostream>
#include "Solution.hpp"
using namespace std;

int main(int argc,char *argv[])
{
    Solution s;
    double base;
    int exp;
    while(1)
    {
        cout<<"Input base:";
        cin>>base;
        cout<<"Input exp:";
        cin>>exp;
        cout<<base<<" ^ "<<exp<<" = "<<s.Power2(base,exp)<<endl;
    }
    
    cout<<"Program terminated."<<endl;
    return 0;
}

