#define SIZE 10
#include<stdio.h>
#include<string.h>
void main()
{
    char str[SIZE];
    int i = 0, count = 0;
    printf("Enter any string : ");
    scanf("%s",str);

    while(str[i] != '\0')
    {
        i++;
        count++;
    }

    printf("Length of String : %d\n",count);
    
}