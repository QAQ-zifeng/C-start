#define _CRT_SECURE_NO_WARNINGS 1

////模拟实现strlen
//#include <stdio.h>
//#include <assert.h>
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%u\n", len);
//	return 0;
//}




////模拟实现strcpy
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src && dest);
//	char* ret = dest;
//	while (*dest++ = *src++)
//		;
//	return ret;
//}
//int main()
//{
//	char arr[] = "bitNB";
//	char name[20] = { 0 };
//	my_strcpy(name, arr);
//	printf("%s\n", name);
//	return 0;
//}


////字符串追加(strcat)
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//		;
//	return  ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	my_strcat(arr1, "world");
//	printf("%s\n", arr1);
//	return 0;
//}