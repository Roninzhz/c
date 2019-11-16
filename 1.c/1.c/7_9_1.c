////回文数。一个五位数的个位与万位相同，十位与千位相同。12321
////判断五位数是否为回文数
//#include <stdio.h>
//#pragma warning(disable:4996)
//int hui(long n)
//{
//	int g, s, q, w;
//	w = n / 10000;//获取万位
//	q = n / 1000 % 10;//获取千位
//	s = n % 100 / 10;//获取十位
//	g = n % 10;//获取个位
//	if (g==w&&s==q)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//void main() {
//	long a;
//	printf("请输入一个五位数：\n");
//	scanf("%ld", &a);
//	if (hui(a)==1)
//	{
//		printf("%ld是回文数\n",a);
//	}
//	else
//	{
//		printf("%ld不是回文数\n",a);
//	}
//}