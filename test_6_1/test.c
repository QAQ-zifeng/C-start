#define _CRT_SECURE_NO_WARNINGS 1


//�ж�s1�Ƿ������ת�õ�s2(��/����)
//#include <stdio.h>
//#include <string.h>
//int is_right_move(char s1[20], char s2[20])//����
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = len - 1; i >= 0; i--)
//	{
//		char tmp = s1[len - 1];
//		int j = 0;
//		for (j = len - 1; j >= 0; j--)
//		{
//			s1[j] = s1[j - 1];
//		}
//		s1[0] = tmp;
//
//		if (strcmp(s2, s1) == 0)
//			return 1;
//	}
//	return 0;
//}
//int is_left_move(char s1[20], char s2[20])//����
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		char tmp = s1[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			s1[j] = s1[j + 1];
//		}
//		s1[len - 1] = tmp;
//
//		if (strcmp(s2, s1) == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char s1[20] = { 0 };
//	char s2[20] = { 0 };
//	scanf("%s", &s1);
//	scanf("%s", &s2);
//	int ret = is_right_move(s1, s2) && is_left_move(s1, s2);
//	if (ret == 1)
//		printf("ok\n");
//	else
//		printf("No\n");
//	return 0;
//}

//qsortʹ��

//#include<stdio.h>
//#include<stdlib.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//return(*(int*)e1 - *(int*)e2);����
//	return(*(int*)e2 - *(int*)e1);//����
//
//}
//int main()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };����
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//����
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

#include <stdio.h>

int main()
{

	return 0;
}