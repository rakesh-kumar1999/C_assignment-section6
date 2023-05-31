/*: Write a program to read ‘n’ real numbers and then insert a new real number at a given 
position (after insertion, the array size should increase by 1).*/
#include"stdio.h"
#define max 50
int main()
{  
    int A[max];
    int i,size,num,pos;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    printf("Enter %d elements in array\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the insert number: ");
    scanf("%d",&num);
    printf("Enter position:");
    scanf("%d",&pos);
    if(pos<=0||pos>=size)
    {
        printf("Invalid position");
    }
    else
    {
        for(i=size-1;i>=pos-1;i--)
        {
             A[i+1]=A[i];
        }
        A[pos-1]=num;
        size++;
    }
    for(i=0;i<size;i++)
    {
        printf("%d, ",A[i]);
    }
    return 0;
}