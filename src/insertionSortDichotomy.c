/*
 * =====================================================================================
 *
 *       Filename:  insertionSortDichotomy.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/07/18 21:40:18
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Andy (https://github.com/andy-y-li), andy_y_li@163.com
 *        Company:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "create_rand.h"

int BinarySearch(int *A, int left, int right, int get)
{
    while (left <= right) {
        int middle = (left + right) / 2;
        if (A[middle] > get) {
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }
    return left;
}

void InsertionSortDichotomy(int *A, int n)
{
    for (int i = 1; i < n; i++) {
        // 右手抓到一张扑克牌
        int get = A[i];
        // 拿在左手上的牌总是排序好的，所以可以用二分法
        int left = 0;
        // 手牌左右边界进行初始化
        int right = i - 1;
        // 采用二分法定位新牌的位置
        left = BinarySearch(A, left, right, get);
        //printf("left:%d,right:%d\n", left, right);

        // 将欲插入新牌位置右边的牌整体向右移动一个单位
        for (int j = i - 1; j >= left; j--) {
            A[j + 1] = A[j];
        }
        // 将抓到的牌插入手牌
        A[left] = get;
        //show(A, n);
    }
}

int main()
{
    int A[10];
    create_rand(A, 10);
    show(A, 10);

    InsertionSortDichotomy(A, 10);
    printf("二分插入排序结果：");
    show(A, 10);
    return 0;
}

