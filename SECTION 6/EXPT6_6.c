/*Write a menu-based program that takes two linear arrays Array and B as input and displays
the results of the following operations based on user’s choice.
1. Traverse Array.
2. Traverse B.
3. Insert a new element in Array (after insertion, the size of Array should increase by 1).
4. Insert a new element in B (after insertion, the size of B should increase by 1).
5. Delete an element from Array.
6. Delete an element from B.
7. Search an element in Array.
8. Search an element in B.
9. Sort Array (in ascending order).
10. Sort B (in ascending order).
11. Merge Array and B to form a new array C.*/
#include "stdio.h"
#include "stdlib.h"
#define max 50
//Array build
void createArray(int Array[],int size,char ch)
{
  printf("\nEnter the elements in %c array:\n",ch);
  for(int i=0;i<size;i++)
  {
    scanf("%d",&Array[i]);
  }
}

//Array traverse
void displayArray(int Array[],int size,char ch)
{
  printf("%c array:\n",ch);
for(int i=0;i<size;i++)
{
  printf("%d, ",Array[i]);
}
}

//Array insert
void insertElement(int Array[],int size,char ch)
{
  int num,pos,i;
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
            
                Array[i+1]=Array[i];
            
        }
        Array[pos-1]=num;
        size++;
    }
    printf("\nAfter insert new %c array:\n",ch);
    for(i=0;i<size;i++)
    {
        printf("%d, ",Array[i]);
    }
}

//Array delete
 void deleteElement(int arr[],int size,char ch)
 {
  int i,pos;
  printf("\nEnter the position of the deleting element:");
    scanf("%d", &pos);
    if (pos < 0 || pos > size)
    {
        printf("invalid position");
    }
    else
    {
        for (i = pos - 1; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        printf("\nAfter deleting an element %d position,the new %c array: ",pos,ch);
        for (i = 0; i < size; i++)
        {
            printf("%d, ", arr[i]);
        }
    }
 }

 //Array search
  void SearchElement(int Arr[],int size,char ch)
  {
    int i,value,flag=0;
       printf("Enter the value you want to search in array %c:\n",ch);
         scanf("%d\n",&value);
          for(i=0;i<size;i++)
           {
             if(Arr[i]==value)
             {
               flag=i;
               goto end;
               
             }
          }
          end:
   if(flag!=0)
   {
    printf("\n%d element is at position %d",value,(flag+1));
   }
   else
   {
    printf("\n%d element is not present in array",value);
   }

  }

  //Array sort
  void SortArray(int Arr[],int size,char ch)
  { int round,i,temp;
    for (round = 1; round <=size - 1; round++)
    {
        for (i = 0; i <=size - 1 - round; i++)
        {
            if (Arr[i] < Arr[i + 1])
            {
                temp = Arr[i];
                Arr[i] = Arr[i + 1];
                Arr[i + 1] = temp;
            }
        }
    }
    printf("\nAfter descending sort,New %c array:\n",ch);
    for (i = 0; i < size; i++)
    {
        printf("%d ,", Arr[i]);
    }
  }

  //Two Arrays merge
  void mergeAtoB(int A[],int B[],int sizeA,int sizeB,char ch)
  {
    int i,j,C[50],sizeC;
    sizeC=sizeA+sizeB;
    for(i=0;i<sizeC;i++)
    {
      C[i]=A[i];
    }
    for(i=sizeA,j=0;i<sizeC;i++,j++)
    {
      C[i]=B[j];
    }
    printf("\nAfter mergeing new array %c:\n",ch);
    for(i=0;i<sizeC;i++)
    {
      printf("%d, ",C[i]);
    }
  }
  //main function
int main()
{
    int choice,A[max],B[max],C[max],sizeA,sizeB,sizeC;

    printf("Enter the size of Array A:");
    scanf("%d",&sizeA);
    createArray(A,sizeA,'A');
    printf("Enter the size of Array B:");
    scanf("%d",&sizeB);
    createArray(B,sizeB,'B');

    while(1)
    {
      printf("\n-----------\t-----------\t-----------\t---------");
      printf("\n1. Traverse A.\n2. Traverse B.");
      printf("\n3. Insert a new element in A.\n4. Insert a new element in B");
      printf("\n5. Delete an element from A.\n6. Delete an element from B.");
      printf("\n7. Search an element in A.\n8. Search an element in B.");
      printf("\n9. Sort A (in ascending order).\n10. Sort B (in ascending order).");
      printf("\n11. Merge A and B to form a new array C.\n12. For exit");
      printf("\n--------\t---------\t---------\t------------");
       printf("\n\n Enter your choice : ");
       scanf("%d", &choice);
        switch (choice)
        {
           
            case 1:
              displayArray(A,sizeA,'A');
              break;
            case 2:
              displayArray(B,sizeB,'B');
              break;
            case 3:
              insertElement(A,sizeA,'A');
              break;
            case 4:
              insertElement(B,sizeB,'B');
              break;
            case 5:
              deleteElement(A,sizeA,'A');
              break;
            case 6:
              deleteElement(B,sizeB,'B');
              break;
            case 7:
             SearchElement(A,sizeA,'A');
              break;
            case 8:
            SearchElement(B,sizeB,'B');
              break;
            case 9:
             SortArray(A,sizeA,'A');
              break;
            case 10:
              SortArray(B,sizeB,'B');
              break;
            case 11:
              mergeAtoB(A,B,sizeA,sizeB,'C');
              break;
            case 12:
              exit(0);
              break;
            default:
              printf("Invalid!! Choice");
                   
         printf("\n------------------------------------------------\n");
         
        }
    }

    return 0;
}