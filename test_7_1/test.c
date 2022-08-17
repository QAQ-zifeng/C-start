#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//æÿ’Û◊™÷√
//#include <stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d%d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//…œ»˝Ω«æÿ’Û≈–∂®
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i, j;
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i > j)
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//    if (sum == 0)
//    {
//        printf("YES\n");
//    }
//    else
//    {
//        printf("NO\n");
//    }
//    return 0;
//}


//”––Ú–Ú¡–≈–∂œ
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int flag = 3;
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    int arr[50] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = n - 1, j = 0; i > 0; i--, j++)
//    {
//        if (arr[i] >= arr[i - 1] || arr[j] >= arr[j + 1])
//        {
//            flag = 1;
//        }
//        else
//        {
//            flag = 0;
//            break;
//        }
//    }
//    if (flag == 1)
//    {
//        printf("sorted");
//    }
//    else if (flag == 0)
//    {
//        printf("unsorted");
//    }
//    return 0;
//}