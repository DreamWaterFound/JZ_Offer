# OFFER_005

## ��Ŀ����

��һ�������ʼ�����ɸ�Ԫ�ذᵽ�����ĩβ�����ǳ�֮Ϊ�������ת�� 
����һ���Ǽ�����������һ����ת�������ת�������СԪ�ء�
��������{3,4,5,1,2}Ϊ{1,2,3,4,5}��һ����ת�����������СֵΪ1�� 

**NOTE** ����������Ԫ�ض�����0���������СΪ0���뷵��0��

## ��ʼ��Ϣ
```
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray);
};
```

Ҫ��ʵ�ֺ���minNumberInRotateArray()��

## ʵ�ֵĻ���˼��
һ������򵥵ı���˼�롣���ǳ���ôһ����϶���ֻ�ǿ���ļ򵥱�������

���ʵĽⷨ�Ƕ���˼�룬Ӧ�õ�ǰ�������Ŀ�и�����Լ��������
���Է�����Ŀ�и�������ת���������Ϊ��������������ɵģ�ǰ�벿����һ�����������飬
��벿��Ҳ��һ�����������飻����ǰ������ֵ���������Ԫ�ص�ֵһ�����ڵ��ڣ�����Ϊ�˼򻯣�����Ϊ���Ǵ��ڵģ�
��벿�ֵ�����ģ���˺������ĵ�һ��Ԫ�ؾ���������ת�������Сֵ��

���ڴ˿��Թ������ַ���˼�롣�ȼ���������û���ظ������֡���������ָ��p1,p2�ֱ�ָ������ͷβ��Ȼ������һ��ָ���м��ָ��mid�������

- \*mid\>\*p1 ��ô˵��midָ�����ǰһ�������е�Ԫ�أ���СԪ��Ӧ������mid~p2֮�䣬�����Ҫ����Ϊp1=mid
- \*mid\<\*p1 ��ô˵��midָ����Ǻ�һ�������е�Ԫ�أ���СԪ��Ӧ������p1~mid֮�䣬�����Ҫ����Ϊp2=mid

���p2-p1==1��ô˵����ʱp2�Ѿ�ָ������СԪ�أ��㷨������

���������������д����ظ����ֵ�������ٸ�������

2 3 4 6 6 8 9

��һ����ת����Ϊ

6 8 9 2 3 4 6

����������\*p1==\*p2���������������������Ӷ��ԣ�ͨ���ж�\*mid��\*p1 \*p2�Ĵ�С���ɿ����жϳ�
\*mid�����ĸ����顣���Ƕ�������������

2 2 2 2 2 1 2 �Լ� 2 1 2 2 2 2 2

������Ϊ���ˣ��޷��жϡ���������ʱ���ֻ�ܹ�˳�������ˡ�

����һ��������ǣ���ת���ֵĳ���Ϊ0�����仰��˵���������������������飬���ʹ��ǰ���\*p1>\*p2�ļ��費������
����ʵ���Ͽ������������ʱ������Ӧ��͵���֣���Ϊ�������������飬�������Ԫ�ؾ�����Сֵ��

��ɡ�


## ����
STL��.std::vector.
