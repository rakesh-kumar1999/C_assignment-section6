/*: Write a program to input ‘n’ numbers and sort them in descending order*/
#include "stdio.h"
#define max 50
int main()
{
    int A[max];
    int i, round, size, temp;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    printf("Enter %d elements in array\n",size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }
    for (round = 1; round <=size - 1; round++)
    {
        for (i = 0; i <=size - 1 - round; i++)
        {
            if (A[i] < A[i + 1])
            {
                temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }
    printf("After descending,New array:");
    for (i = 0; i < size; i++)
    {
        printf("%d ,", A[i]);
    }
    return 0;
}