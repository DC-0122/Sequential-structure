/*
题目描述
输入一个小写字母，输出其对应的大写字母。例如输入 q[回车] 时，会输出 Q。

输入格式
无

输出格式
无
*/
/*
解题思路：
ASCII码来处理
‘a'-’A'=32；
*/
#include<bits/stdc++.h>
using namespace std;
char ch;
int main()
{
	cin>>ch;
	char ans=ch-'a'+'A';
	cout<<ans;
	return 0;
}