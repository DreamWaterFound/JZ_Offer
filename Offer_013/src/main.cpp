#include <iostream>
#include <vector>
#include "method3.hpp"

using namespace std;

vector<int> getData(void);
void dispArray(const vector<int> array);

int main(int argc,char *argv[])
{

    cout<<"Offer_012:"<<endl;

    Solution s;

    vector<int> array=getData();

    cout<<"Origin sequence:"<<endl<<"\t";
    dispArray(array);
    cout<<endl;

    s.reOrderArray(array);

    cout<<"Orded sequence:"<<endl<<"\t";
    dispArray(array);
    cout<<endl;

    return 0;
}

vector<int> getData(void)
{
    vector<int> res;

    // res.push_back(1);
    // res.push_back(2);
    // res.push_back(3);
    // res.push_back(4);
    // res.push_back(5);
    // res.push_back(6);
    // res.push_back(7);
    // res.push_back(8);
    // res.push_back(9);
    // res.push_back(10);

    res.push_back(2);
    res.push_back(2);
    res.push_back(4);
    res.push_back(4);
    res.push_back(5);
    res.push_back(6);
    res.push_back(7);
    res.push_back(8);
    res.push_back(9);
    res.push_back(10);

    return res;    
}

void dispArray(const vector<int> array)
{
    for(int i=0;i<array.size();i++)
    {
        cout<<array[i]<<" ";
    }
}