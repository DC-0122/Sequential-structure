/*
题目描述
输入一个不小于 100 且小于 1000，同时包括小数点后一位的一个浮点数，例如123.4，要求把这个数字翻转过来，变成4.321并输出。

输入格式
无

输出格式
无
*/
/*
解题思路：
读入5个字符，将数字倒序输出。
*/
#include<bits/stdc++.h>
using namespace std;
char ch[7];
int main()
{
	for(int i=1;i<=5;i++)
		cin>>ch[i];
	for (int i=5;i>=1;i--)
		cout<<ch[i];
	return 0;
}