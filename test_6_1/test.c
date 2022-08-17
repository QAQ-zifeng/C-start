#define _CRT_SECURE_NO_WARNINGS 1


//ÅÐ¶Ïs1ÊÇ·ñ¿ÉÒÔÐý×ªµÃµ½s2(×ó/ÓÒÐý)
//#include <stdio.h>
//#include <string.h>
//int is_right_move(char s1[20], char s2[20])//ÓÒÐý
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
//int is_left_move(char s1[20], char s2[20])//×óÐý
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

//qsortÊ¹ÓÃ

//#include<stdio.h>
//#include<stdlib.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//return(*(int*)e1 - *(int*)e2);ÉýÐò
//	return(*(int*)e2 - *(int*)e1);//½µÐò
//
//}
//int main()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };ÉýÐò
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//½µÐò
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
#include <stdlib.h>
#include <string.h>

struct Stu
{
	char name[20];
	int age;
};

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test()
{
	struct Stu s[] = { {"zhangsan" ,14},{"lisi",16},{"wangwu",15} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}


int cmp_int(const void* e1, const void* e2)
{
	return(*(int*)e1 - *(int*)e2);//ÉýÐò
	//return(*(int*)e2 - *(int*)e1);//½µÐò
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//0 1 2 3 4 5 6 7 8 9
	//°ÑÊý×éÅÅ³ÉÉýÐò
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);

	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}



int main()
{
	//test();
	test1();
	return 0;
}