#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int a = 0;
//int main()
//{
//
//	int a = 1;
//	printf("%d\n", a);
//	// ::域作用限定符
//	printf("%d\n", ::a);
//}

#include<stdio.h>
#include<stdlib.h>
//不影响变量生命周期，只是限定域，编译查找规则
//默认查找规则。先在局部找，再全局找
//命名空间避免命名冲突
namespace bit
{
	int rand = 10;//此处为全局变量，静态区
	int x = 1;
}
void func()
{
	printf("%d\n", rand);
	printf("%d\n", bit::x);//限定bit域
	printf("%d\n", bit::rand);
}

int main()
{
	return 0;
}