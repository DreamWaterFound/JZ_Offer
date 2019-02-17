

/**
 * @brief 解决方案
 * 
 */

class Solution {
public:
     //使用比较好的思想
     int  NumberOf1(int n) {
         int res=0;

         while(n)
         {
              n=((n-1)&n);
              res++;
         }

         return res;
     }
};