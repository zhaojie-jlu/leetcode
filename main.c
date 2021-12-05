#include<stdio.h>
#include"InsertPos.c"

int main()
{
    int a[4] = {1, 3, 5, 6};
    int ret = searchInsert(a, 4, 2);
    printf("%d\n", ret);
    return 0;

}