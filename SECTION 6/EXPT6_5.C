/*Write a program to read ‘n’ numbers and find the frequency of occurrence of each 
number.*/
#include"stdio.h"
int main()
{  
    int Arr[50],fre[50];
    int i,j,size,count;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    printf("Enter %d elements in array\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &Arr[i]);
        fre[i]=-1;
    }
    for(i=0;i<size;i++)
    {   count=1;
        for(j=i+1;j<size;j++)
        {
            if(Arr[i]==Arr[j])
            {
              fre[j]=0;
              count++;
            }
        }
        if(fre[i]!=0)
        {
            fre[i]=count;
        }
    }
    for(i=0;i<size;i++)
    {
        if(fre[i]!=0)
        {
            printf("%d frequency is %d\n",Arr[i],fre[i]);
        }
    }
    return 0;
}