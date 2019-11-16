////函数递归调用求x的n次方的值
//#include <stdio.h>
//#pragma warning(disable:4996)
//double xpn(float x, int n) {
//	if (n==0)
//	{
//		return(1);
//	}
//	else
//	{
//		return(x * xpn(x, n - 1));
//	}
//}
//void main() {
//	int n;
//	float x;
//	double y;
//	printf("Please input x(float)&n(integer):\n");
//	scanf("%f%d", &x, &n);
//	printf("\n");
//	if (n<0)
//	{
//		printf("Input n<0 error!\n");
//	}
//	else
//	{
//		y = xpn(x, n);
//		printf("result=%5.4f", y);
//	}
//}