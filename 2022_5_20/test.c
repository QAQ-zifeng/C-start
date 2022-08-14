#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j < 2 * (n - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	printf("你要买多少钱的饮料:>");
//	scanf("%d", &i);
//
//	int ret = 0;
//
//	int n = i;//汽水一块钱一瓶
//
//	while (i != 0)//两个空瓶换一瓶
//	{
//		i /= 2;
//		ret += i;
//		if (i == 1)//多余一个空瓶，借一个空瓶，换完喝完还一个瓶子
//		{
//			ret = ret + i;
//		}
//	}
//
//	ret = ret + n;
//
//	printf("%d元能喝%d瓶饮料", n, ret);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	scanf("%d%d", &A, &B);
	if (A % 2 != 0 && B % 2 != 0)
	{
		C = A * B;
		printf("%d", C);
	}
	else if ((A % 2 != 0 && B % 2 == 0) || (A % 2 == 0 && B % 2 != 0))
	{
		if (A % B == 0)
			printf("%d", A);
		else if (B % A == 0)
			printf("%d", B);
		else
		{
			C = A * B;
			printf("%d", C);
		}
	}
	else if (A % 2 == 0 && B % 2 == 0)
	{
		if (A % B == 0)
			printf("%d", A);
		else if (B % A == 0)
			printf("%d", B);
		else if (A % B != 0 && B % A != 0)
		{
			C = (A * B) / 2;
			printf("%d", C);
		}

	}

	return 0;
}