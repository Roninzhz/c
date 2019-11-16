////输入5位学生的成绩，求平均成绩，并将低于平均成绩的分数输出
//#include <stdio.h>
//#include <math.h>
//#pragma warning(disable:4996)
//void main() {
//	int i;
//	float aver = 0, score[5];
//	printf("please input 5 students scores:\n");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%f", &score[i]);
//	}
//	for ( aver=0,i = 0; i < 5; i++)
//	{
//		aver = aver + score[i];
//	}
//	aver = aver / 5;
//	printf("average=%6.2f\n", aver);
//	printf("the score below the average:\n");
//	for ( i = 0; i < 5; i++)
//	{
//		if (score[i] < aver)
//			printf("%.2f\t", score[i]);
//	}
//}