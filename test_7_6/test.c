#define _CRT_SECURE_NO_WARNINGS 1

////模拟实现strcmp
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//int main()
//{
//	char arr1[] = "abcc";
//	char arr2[] = "abcd";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret < 0)
//		printf("<\n");
//	else if (ret == 0)
//		printf("=\n");
//	else
//		printf(">\n");
//	return 0;
//}

////模拟实现strstr
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* p = str1;
//
//	while (*p)
//	{
//		s1 = p;
//		s2 = str2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)p;
//		}
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str1[] = "zzf@google.com";
//	char str2[] = "google";
//	char str3[] = "gmail";
//	char str4[] = "ggggggoogle";
//
//	char* ret = my_strstr(str1, str2);
//	char* tmp = my_strstr(str1, str3);
//	char* s = my_strstr(str4, str2);
//
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//		printf("%s\n", ret);
//	if (tmp == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//		printf("%s\n", tmp);
//	if (s == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//		printf("%s\n", s);
//	return 0;
//}


////模拟实现memcpy
//#include <stdio.h>
//#include <assert.h>
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 ,8 };
//	int arr2[20] = { 0 };
//
//	my_memcpy(arr2, arr1, 32);
//
//	return 0;
//}


//模拟实现memmove

#include <stdio.h>
#include <assert.h>
void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)//前>>后
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else//后>>前
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);

		}
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int arr2[20] = { 0 };

	my_memmove(arr1 + 2, arr1, 20);

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}