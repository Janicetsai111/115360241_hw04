#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void modifyArray(int b[], int size);
void modifyElement(int e);

int main(void)
{
    int a[SIZE] = {0,1,2,3,4};
    int i;

    printf("Effects of passing entire array by reference:\n\nThe"
           "values of the original array are:\n");

    for (i=0;i<SIZE;i++)
    {
        printf("%3d",a[i]);
    }
    printf("\n");

    modifyArray(a, SIZE);
    printf("The values of the modified array are:\n");
    for (i=0;i<SIZE;i++)
    {
        printf("%3d",a[i]);
    }

    printf("\n\n\nEffects of passing array element"
           "by value:\n\nThe value of a[3] is %d\n",a[3]);

    modifyElement(a[3]);
    printf("The value of a[3] is %d\n", a[3]);

    return 0;
}

// 傳遞整個陣列（傳址呼叫）：會直接修改原本陣列的數值
void modifyArray(int b[], int size)
{
    int j;

    for (j = 0; j < size; j++)
    {
        b[j] *= 2;
    }
}

// 傳遞單一陣列元素（傳值呼叫）：僅修改複本，不影響原本陣列
void modifyElement(int e)
{
    printf("Value in modifyElement is %d\n", e *= 2);
}