
using namespace std;

class Solution {
public:
    double Power(double base, int exponent) {
        if(exponent==0)
        {
            //指数不合法
            return 1.0;
        }
        else if(exponent<0)   //如果指数为负
        {
            mbNegative=true;
            exponent=-exponent;
        }
        else
        {
            //指数为正
            mbNegative=false;
        }

        //计算指数数值
        double res=1.0;
        for(int i=0;i<exponent;i++)
        {
            res*=base;
        }

        if(mbNegative)
        {
            res=1.0/res;
        }

        return res;
    }

    /**
     * @brief 使用了递归方式
     * 
     * @param[in] base      基数
     * @param[in] exponent  指数
     * @return double       计算结果
     */
    double Power2(double base, int exponent) {
        //首先是判断输入数据是否合法
        if(exponent==0)
        {
            //不管你的基数是什么都返回1
            return 1.0;
        }
        else if(exponent<0)
        {
            mbNegative=true;
            return 1.0/subPower(base,exponent);
        }
        else
        {
            mbNegative=false;
            return subPower(base,exponent);
        }
    }

    //实现递归的函数
    double subPower(double base,int exp)
    {
        if(exp==0)
        {
            return 1.0;
        }

        double tmp;
        //如果指数是偶数
        if(exp%2==0)
        {
            tmp=subPower(base,exp>>1);
            return tmp*tmp;
        }
        else
        {
            //说明指数是奇数
            tmp=subPower(base,(exp-1)>>1);
            return tmp*tmp*base;
        }
        
    }

private:
    //指数为负数的标志
    bool mbNegative;

};

