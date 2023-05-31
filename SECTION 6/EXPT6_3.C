/*Write a program to read ‘n’ characters and then delete the duplicate characters.*/
#include "stdio.h"
#include "string.h"
int main()
{
    char str[20];
    int size;
    printf("Enter a string:\n");
    gets(str);
    size = strlen(str);
    printf("You have entered the string of size %d:\n",size);
    puts(str);
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                for (int k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
                size = size - 1;
                j--;
            }
        }
    }
    printf("\nAfter deleting duplicate characters new string:\n");
    puts(str);
    printf("And length of string: %d",size);
    return 0;
}