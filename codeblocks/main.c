    /* ����������֤��ѭ�����淴������һ�������Ƿ񱨴� */
    /* �����������֤��ѭ�����涨��ı���������ֻ�ڵ���ѭ��*/
    /* ʵ��������ѭ�����ڲ�����ı���������ֻ��ѭ���ڲ�*/


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
