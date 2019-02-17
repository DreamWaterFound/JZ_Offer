#include "Solution.hpp"
#include <iostream>
using namespace std;

int main(int argc,char * argv[])
{
    int a;
    Solution s;
    cout<<"int the num:"<<endl;
    cin>>a;
    cout<<"1 has : "<<s.NumberOf1(a)<<endl;
    return 0;
}