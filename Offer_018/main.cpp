#include <iostream>
#include <vector>

#include "Solution.hpp"

using namespace std;

typedef vector<vector<int> > Mat;

Mat getMat(void);

int main(int argc, char* argv[])
{
    Solution s;

    Mat m=getMat();

    vector<int> res=s.printMatrix(m);

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;

    return 0;
}


Mat getMat(void)
{
    //正常矩阵
    vector<int> r1,r2,r3,r4;

    r1.push_back(1);
    r1.push_back(2);
    r1.push_back(3);
    r1.push_back(4);

    r2.push_back(5);
    r2.push_back(6);
    r2.push_back(7);
    r2.push_back(8);

    r3.push_back(9);
    r3.push_back(10);
    r3.push_back(11);
    r3.push_back(12);
    
    r4.push_back(13);
    r4.push_back(14);
    r4.push_back(15);
    r4.push_back(16);

    Mat m;
    m.push_back(r1);
    m.push_back(r2);
    m.push_back(r3);
    m.push_back(r4);

    //4x5
    // vector<int> r1,r2,r3,r4;

    // r1.push_back(1);
    // r1.push_back(2);
    // r1.push_back(3);
    // r1.push_back(4);
    // r1.push_back(5);

    // r2.push_back(6);
    // r2.push_back(7);
    // r2.push_back(8);
    // r2.push_back(9);
    // r2.push_back(10);

    // r3.push_back(11);
    // r3.push_back(12);
    // r3.push_back(13);
    // r3.push_back(14);
    // r3.push_back(15);
    
    // r4.push_back(16);
    // r4.push_back(17);
    // r4.push_back(18);
    // r4.push_back(19);
    // r4.push_back(20);

    // Mat m;
    // m.push_back(r1);
    // m.push_back(r2);
    // m.push_back(r3);
    // m.push_back(r4);

    //3x5
    // vector<int> r1,r2,r3,r4,r5;

    // r1.push_back(1);
    // r1.push_back(2);
    // r1.push_back(3);

    // r2.push_back(4);
    // r2.push_back(5);
    // r2.push_back(6);
    
    // r3.push_back(7);
    // r3.push_back(8);
    // r3.push_back(9);
    
    // r4.push_back(10);
    // r4.push_back(11);
    // r4.push_back(12);

    // r5.push_back(13);
    // r5.push_back(14);
    // r5.push_back(15);


    // Mat m;
    // m.push_back(r1);
    // m.push_back(r2);
    // m.push_back(r3);
    // m.push_back(r4);
    // m.push_back(r5);


    //3x4
    // vector<int> r1,r2,r3;

    // r1.push_back(1);
    // r1.push_back(2);
    // r1.push_back(3);
    // r1.push_back(4);

    // r2.push_back(5);
    // r2.push_back(6);
    // r2.push_back(7);
    // r2.push_back(8);

    // r3.push_back(9);
    // r3.push_back(10);
    // r3.push_back(11);
    // r3.push_back(12);
    
    // Mat m;
    // m.push_back(r1);
    // m.push_back(r2);
    // m.push_back(r3);

    //特殊:只有一行
    // vector<int> r1;

    // r1.push_back(1);
    // r1.push_back(2);
    // r1.push_back(3);
    // r1.push_back(4);

    // Mat m;
    // m.push_back(r1);

    //特殊:只有一列
    // vector<int> r1,r2,r3,r4;

    // r1.push_back(1);
    // r2.push_back(2);
    // r3.push_back(3);
    // r4.push_back(4);

    // Mat m;
    // m.push_back(r1);
    // m.push_back(r2);
    // m.push_back(r3);
    // m.push_back(r4);

    //特殊:只有一个元素(一行一列)
    // vector<int> r1;

    // r1.push_back(1);

    // Mat m;
    // m.push_back(r1);

    return m;
    
    
    
}