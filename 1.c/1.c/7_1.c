#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)
//main(){
//	int i, j, n;
//	char a[999], b[999];
//	printf("请输入字符串：\n");
//	scanf("%s",&a);
//	n = strlen(a);
//	for ( i = 0,j=n-1;i<n;i++,j--)
//	{
//		b[j] = a[i];
//	}
//	for ( i = 0; i < n; i++)
//	{
//		if (b[i]!=a[i])
//		{
//			break;
//		}
//	}
//	if (i == n)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}


main() {
	int i, n;
	char str[80];
	printf("请输入字符串，以判断是否为回文数！\n");
	gets(str);
	n = strlen(str);
	for ( i = 0; i < n/2; i++)
	{
		if (str[i] != str[n - 1 - i])
		{
			printf("NO");
			break;
		}
	}
	if (i ==n/2)
	{
		printf("YES");
	}
}