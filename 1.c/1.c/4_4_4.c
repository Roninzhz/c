////判断a b c的值是否构成三角形，若可以则输出面积，若不可以则输出不能。
//#include <stdio.h>
//#include "math.h"
//#pragma warning(disable:4996)
//void main() {
//	float a, b, c,s, area;
//	printf("请输入三角形三边的长度，按逗号分开：");
//	scanf("%f,%f,%f", &a, &b, &c);
//	if (a+b>c&&a+c>b&&b+c>a)
//	{
//		s = (a + b + c) / 2.0;//海伦公式
//		area = sqrt(s * (s - a) * (s - b) * (s - c));
//		printf("area=%f\n", area);
//	}
//	else
//	{
//		printf("不能构成三角形");
//	}
//}