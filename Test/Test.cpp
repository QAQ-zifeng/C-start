#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int a = 0;
//int main()
//{
//
//	int a = 1;
//	printf("%d\n", a);
//	// ::�������޶���
//	printf("%d\n", ::a);
//}

#include<stdio.h>
#include<stdlib.h>
//��Ӱ������������ڣ�ֻ���޶��򣬱�����ҹ���
//Ĭ�ϲ��ҹ������ھֲ��ң���ȫ����
//�����ռ����������ͻ
namespace bit
{
	int rand = 10;//�˴�Ϊȫ�ֱ�������̬��
	int x = 1;
}
void func()
{
	printf("%d\n", rand);
	printf("%d\n", bit::x);//�޶�bit��
	printf("%d\n", bit::rand);
}

int main()
{
	return 0;
}