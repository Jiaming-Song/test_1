//猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。 第二天早上又将剩下的桃子吃掉一半，又多吃一个。
//以后每天早上都吃了前一天剩下的一半零一个。 到第N天早上想再吃时，见只剩下一个桃子了。求第一天共摘多少桃子。
//输入格式
//N
//输出格式
//桃子总数
//样例输入
//10
//样例输出
//1534
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0, sum = 1;
	scanf("%d", &n);
	while (--n)
		sum = (sum + 1) * 2;
	printf("%d\n", sum);
	return 0;
}