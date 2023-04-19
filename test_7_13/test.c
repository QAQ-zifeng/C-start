#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void find_single_dog(int arr[], int sz, int* pd1, int* pd2)
//{
//	int i = 0;
//	int ret = 0;
//	//(1).将数组所有数字进行异或
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	//(2).找到异或结果(二进制)最右边的的1的位置
//	int pos = 0;
//	for (pos = 0; pos < 32; pos++)
//	{
//		if (((ret >> pos) & 1) == 1)
//		{
//			break;
//		}
//	}
//	//(3).按照0或1进行分组，再次进行异或运算,最后输出
//	for (i = 0; i < sz; i++)
//	{
//		if (((arr[i] >> pos) & 1) == 1)
//		{
//			*pd1 ^= arr[i];
//		}
//		else
//			*pd2 ^= arr[i];
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int dog1 = 0;
//	int dog2 = 0;
//
//	find_single_dog(arr, sz, &dog1, &dog2);
//
//	printf("%d %d\n", dog1, dog2);
//
//	return 0;
//}


//1.分组
//(1).将数组所有数字进行异或
//(2).找到异或结果(二进制)最右边的的1的位置
//(3).按照0或1进行分组，再次进行异或运算,最后输出




////模拟实现strncpy


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>

//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//
//	char* ret = dest;
//	while (num && (*dest++ = *src++) != '\0')
//	{
//		num--;//两个条件，只要有一个满足就停止
//	}
//	if (num)
//	{
//		while (--num)
//		{
//			*dest++ = '\0';
//		}
//	}//判断num是否大于src，如果大于就补\0，反之，则直接return。
//
//	return ret;
//}
//
//int main()
//{
//
//	char ch1[] = { "apple" };
//	char ch2[] = { "xxxxxxxxxx" };
//
//	my_strncpy(ch2, ch1, 7);
//	//strncpy(ch2, ch1, 3);
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c", ch2[i]);
//	}
//
//	return 0;
//}

////模拟实现strncat


////char* strncat(char* dest, const char* src, size_t num);
//
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//
//	char* ret = dest;
//
//	while (*dest++)
//	{
//		;//让dest先找到尾部
//	}
//	dest--;//while循环会多加一次，所以为了保证位置准确，进行--操作
//	while (num--)
//	{
//		if ((*dest++ = *src++) == 0)
//		{
//			return ret;
//		}
//	}//进行字符串的追加
// 
//	*dest = '\0';//补\0
//
//	return ret;
//}
//
//int main()
//{
//
//	char str1[20] = { "apple" };
//	char str2[20] = { "red " };
// 
//	my_strncat(str2, str1, 5);
//
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%c", str2[i]);
//	}
//
//	return 0;
//}


