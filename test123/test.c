#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//
//
//int main() {
//
//	int N[3];
//	scanf("%d%d%d", &N[0], &N[1], &N[2]);
//
//	int* p1 = &N[0];
//	int* p2 = &N[1];
//	int* p3 = &N[2];
//
//	int w[3];
//	scanf("%c%c%c", &w[0], &w[1], &w[2]);
//
//
//
//	int count1 = 0, count2 = 0;
//	for (count1 = 0; count1 < 2; count1++) {
//		int flag = 1;
//
//		for (count2 = 0; count2 < 2; count2++) {
//
//			if (N[count2 + 1] < N[count2]) {
//				int temp = N[count2];
//				N[count2] = N[count2 + 1];
//				N[count2 + 1] = temp;
//				flag = 0;
//
//			}
//		}
//
//		if (flag == 1) { break; }
//
//	}
//
//	int* p0 = N;
//
//	for (p0 = N; p0 < (N + 3); p0++) {
//		printf("%d \n", *p0);
//	}
//
//	count1 = 0, count2 = 0;
//	for (count1 = 0; count1 < 2; count1++) {
//		int flag = 1;
//
//		for (count2 = 0; count2 < 2; count2++) {
//
//			if (w[count2 + 1] < w[count2]) {
//				int temp = w[count2];
//				w[count2] = w[count2 + 1];
//				w[count2 + 1] = temp;
//				flag = 0;
//
//			}
//		}
//
//		if (flag == 1) { break; }
//
//	}
//
//	p0 = w;
//	for (p0 = w; p0 < (w + 3); p0++) {
//		printf("%d \n", *p0);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() 
//{
//	int a, b, n;
//
//	// 输入分数和小数点后的位数
//	printf("请输入分子 a：");
//	scanf("%d", &a);
//
//	printf("请输入分母 b：");
//	scanf("%d", &b);
//
//	printf("请输入小数点后的位数 n：");
//	scanf("%d", &n);
//
//	int c = a % b;
//
//	// 计算小数点后 n 位
//	for (int i = 0; i < n; ++i) 
//	{
//		c *= 10;
//		if (i == n - 1)
//			printf("%d", c / b);
//		c %= b;
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int a, b, n;
//	scanf("%d %d %d", &a, &b, &n);
//
//	double m;
//	m = (double)a / b;
//
//	// 将 m 移到小数点后第 n 位
//	for (int i = 0; i < n; ++i) {
//		m = m * 10;
//	}
//
//	// 输出小数点后第 n 位
//	int digit = (int)m % 10;
//	printf("%d\n", digit);
//
//	return 0;
//}


#include <stdio.h>

int main() {
	int a, b, n;
	scanf("%d %d %d", &a, &b, &n);

	double m;
	m = (double)a / b;

	for (int c = 1; c <= n; c++) {
		m = m * 10;
		int digit = (int)m % 10;
		if (c == n)
			printf("%d", digit);
	}

	printf("\n");

	return 0;
}