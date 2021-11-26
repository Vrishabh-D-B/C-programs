#define SIZE 10
#include<stdio.h>
#include<string.h>
void main()
{
    char str[SIZE];
    int i = 0, count = 0;
    printf("\tEnter any string : ");
    scanf("%s",str);

    while(str[i] != '\0')
    {
        i++;
        count++;
    }

    printf("\tLength of String : %d\n",count);
    
}