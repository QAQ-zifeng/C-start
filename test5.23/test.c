#define _CRT_SECURE_NO_WARNINGS 1


//������
//#include <stdio.h>
//int main()
//{
//	int A, B, C, D, E;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if ((B == 2) + (A == 3) == 1 &&
//							(B == 2) + (E == 4) == 1 &&
//							(C == 1) + (D == 2) == 1 &&
//							(C == 5) + (D == 3) == 1 &&
//							(E == 4) + (A == 1) == 1 &&
//							A * B * C * D * E == 120)
//						{
//							printf("A��%d B��%d C��%d D��%d E��%d ", A, B, C, D, E);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

////˭������
//#include <stdio.h>
//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (3 == (killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D'))
//		{
//			printf("������%c", killer);
//		}
//	}
//	return 0;
//}

//�������
#include <stdio.h>
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}

		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}