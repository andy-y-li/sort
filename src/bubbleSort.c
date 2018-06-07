/*
 * =====================================================================================
 *
 *       Filename:  bubbleSort.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/07/18 12:01:35
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Andy (https://github.com/andy-y-li), andy_y_li@163.com
 *        Company:  
 *
 * =====================================================================================
 */

#include <stdio.h>// 分类 -------------- 内部比较排序
// 数据结构 ---------- 数组
// 最差时间复杂度 ---- O(n^2)
// 最优时间复杂度 ---- 如果能在内部循环第一次运行时,使用一个旗标来表示有无需要交换的可能,可以把最优时间复杂度降低到O(n)
// 平均时间复杂度 ---- O(n^2)
// 所需辅助空间 ------ O(1)
// 稳定性 ------------ 稳定
 
void Swap(int A[], int i, int j)
{
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}

void show(int *A, int n)
{
    for (int i = 0; i < n; i++ )
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void BubbleSort(int *A, int n)
{
    for (int j = 0; j < n - 1; j++)         // 每次最大元素就像气泡一样"浮"到数组的最后
    {
        for (int i = j + 1; i < n; i++) // 依次比较相邻的两个元素,使较大的那个向后移
        {
            if (A[i] > A[j])            // 如果条件改成A[i] >= A[i + 1],则变为不稳定的排序算法
            {
                Swap(A, i, j);
            }
        }
    }
}


 
int main()
{
    int A[] = { 6, 5, 3, 1, 8, 7, 2, 4 };    // 从小到大冒泡排序
    int n = sizeof(A) / sizeof(int);
    BubbleSort(A, n);
    printf("冒泡排序结果：");
    show(A, n);

    return 0;
}

