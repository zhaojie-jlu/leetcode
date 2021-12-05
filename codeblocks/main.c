    /* 本程序是验证在循环里面反复定义一个变量是否报错 */
    /* 如果不报错，则证明循环里面定义的变量生存期只在当次循环*/
    /* 实验结果，在循环体内部定义的变量生存期只在循环内部*/


#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main()
{

    for(int i = 0; i < MAX; i++){
        int j = i;
        printf(">>The loop count is %d, and the val j's value is %d, the val j's addr(pointer) is %p.\n", i, j, &j);
    }
    int j = 999;
    printf(">>Define the val j out of the loop succeed, the j's value is %d.\n", j);
    return 0;
}
