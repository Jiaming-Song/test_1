//打印出所有"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该本身。 例如：153是一个水仙花数，因为153=1^3+5^3+3^3。 
//输入格式
//无
//输出格式
//输出每一个水仙花数，一个数占一行
//样例输入
//无
//样例输出
//无
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i, a, b, c;
    for (i = 100; i >= 100 && i <= 999;i++)//256
    {
        c = i % 10;//6
        b = i / 10 % 10;//5
        a = i / 100;//2
        if (i == a * a * a + b * b * b + c * c * c)///注意==  !!!
        printf("%d\n",i);
    }
    return 0;
}