#define _CRT_SECURE_NO_WARNINGS 1
////С������ŷ�����(���Լ��)
//#include <stdio.h>
//int main()
//{
//    long n = 0;
//    long m = 0;
//    while (scanf("%ld%ld", &n, &m) == 2)
//    {
//        long i = n;
//        long j = m;
//        long c = 0;
//        while (c = i % j)
//        {
//            i = j;
//            j = c;
//        }
//        //j�������Լ����n*m/j����С������,����������
//        printf("%ld\n", n * m / j + j);
//    }
//    return 0;
//}

////����������ͼ��
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
//                    printf("* ");
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

////����ͼ��
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - i; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//
//        for (i = 0; i < n + 1; i++)
//        {
//            int j = 0;
//            for (j = 0; j < i; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j < n + 1 - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

////����Ա����
//#include <stdio.h>
//int main()
//{
//    int score = 0;
//    int n = 0;
//    int max = 0;
//    int min = 100;
//    int sum = 0;
//    while (scanf("%d", &score) == 1)
//    {
//        n++;
//        if (score > max)
//            max = score;
//        if (score < min)
//            min = score;
//        sum += score;
//
//        if (n == 7)
//        {
//            printf("%.2lf\n", (sum - max - min) / 5.0);
//            n = 0;
//            max = 0;
//            min = 100;
//            sum = 0;
//        }
//    }
//    return 0;
//}