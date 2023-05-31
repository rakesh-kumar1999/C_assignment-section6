/*Write a program to input ‘n’ numbers and print the 2nd largest and 2nd smallest number*/
#include "stdio.h"
#define max 50
int main()
{
    int Array[max];
    int i, size, max1, max2, min1, min2;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    printf("Enter %d elements in array\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &Array[i]);
    // for 2nd largest
    if (Array[0] > Array[1])
    {
        max1 = Array[0];
        max2 = Array[1];
    }
    else
    {
        max1 = Array[1];
        max2 = Array[0];
    }
    for (i = 2; i < size; i++)
    {
        if (max1 < Array[i])
        {
            max2 = max1;
            max1 = Array[i];
        }
        else if (max2 < Array[i])
        {
            max2 = Array[i];
        }
    }
    printf("2nd largest of array: %d", max2);
    // for 2nd smallest
    if (Array[0] < Array[1])
    {
        min1 = Array[0];
        min2 = Array[1];
    }
    else
    {
        min1 = Array[1];
        min2 = Array[0];
    }
    for (i = 2; i < size; i++)
    {
        if (min1 > Array[i])
        {
            min2 = min1;
            min1 = Array[i];
        }
        else if (min2 > Array[i])
        {
            min2 = Array[i];
        }
    }
    printf("\n2nd smallest of array: %d", min2);
    return 0;
}