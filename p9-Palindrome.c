#include<stdio.h>
void main()
{
    char str[10];
    int i = 0, length = 0, flag = 1; 
    printf("Enter a string : ");
    scanf("%s",str);

    while(str[i] != '\0')
    {
        length++;
        i++;
    }
    //printf("%s \n",str);
    for(i=0;i<length;i++)
    {
        if(str[i] != str[length-i-1])
            flag = 0;
            break;
    }

    if(flag == 0)
        printf("String is NOT Palindrome \n");
    else
        printf("String is Panildrome \n");

}