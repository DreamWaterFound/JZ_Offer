#include <vector>
#include <iostream>

using namespace std;


class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix);

    void printCircle(const int start,vector<int>& res,vector<vector<int> > matrix);

    int mRows,mCols;
};

vector<int> Solution::printMatrix(vector<vector<int> > matrix) {

    vector<int> res;

    //获取行数和列数
    mRows=matrix.size();
    if(mRows==0) return res;

    mCols=matrix[0].size();
    if(mCols==0) return res;

    // cout<<"mRows="<<mRows<<",mCols="<<mCols<<endl;

    //下标从0开始
    mRows--;
    mCols--;

    int start=0;
    do
    {
        // cout<<"start=("<<start<<","<<start<<")"<<endl;
        printCircle(start,res,matrix);
        start++;
    }while(mRows+1>start*2 && mCols+1>start*2);

    return res;
}


void Solution::printCircle(const int start,vector<int>& res,vector<vector<int> > matrix)
{
    //第一步，输出第start行，列范围为 start => mCols-start之间的元素
    // cout<<"-- Setp 1, row = "<<start<<", col= "<<start<<" => "<<mCols-start<<endl;
    for(int i=start;i<=(mCols-start);++i)
    {
        res.push_back(matrix[start][i]);
    }

    //判断是否需要进行第二步：判断起始行号 mRows-start 是否小于起始行号 start+1 ，是的话就完事了
    if(mRows-start<start+1 ) return;

    //进行第二步： 在终止列 mCols-start 中，输出行范围为 start+1 => mRows-strat 范围的元素
    // cout<<"-- Setp 2, col = "<<mCols-start<<", row= "<<start+1<<" => "<<mRows-start<<endl;
    for(int i= start+1;i<=(mRows-start);++i)
    {
        res.push_back(matrix[i][mCols-start]);
    }

    //判断是否需要进行第三步：判断起始列号 mCols-start-1 是否小于终止列号 start
    if((mCols-start-1)<start) return;

    //进行第三步： 在终止行 mRows-start 中，输出列范围为 mCols-start-1 => start 范围的元素
    // cout<<"-- Setp 3, row = "<<mRows-start<<", col= "<<mCols-start-1<<" => "<<start<<endl;    
    for(volatile int i=mCols-start-1;i>=start;--i)
    {
        res.push_back(matrix[mRows-start][i]);
    }

    //判断是否需要进行第四步： 终止行号 start+1 是否大于起始行号 mRows-start-1 ，是的话完事了
    if(start+1 > mRows-start-1 ) return ;

    //进行第四步， 在列 start 中，输出范围为 mRows-start-1 => start+1 的元素
    // cout<<"-- Setp 4, col = "<<start<<", row= "<<mRows-start-1<<" => "<<start+1<<endl;
    for(int i= mRows-start-1;i>=start+1;--i)
    {
        res.push_back(matrix[i][start]);
    }
}
