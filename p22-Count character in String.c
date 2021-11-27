#define SIZE 20
#include<stdio.h>

void main()
{
    char str[SIZE];
    int i = 0;
    printf("\tEnter any string : ");
    fgets(str,SIZE,stdin);

    while(str[i] != '\0')
    {
        i++;
    }

    printf("\tLength of String : %d\n",i-1);
    
}