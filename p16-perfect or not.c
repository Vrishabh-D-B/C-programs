#include <stdio.h>

int main()
{
    int i, num, sum = 0;

   
    printf("\tEnter any number to check perfect number: ");
    scanf("%d", &num);

    
    for(i = 1; i <= num / 2; i++)
    {
        
        if(num%i == 0)
        {
            sum += i;
        }
    }

    
    if(sum == num && num > 0)
    {
        printf("\t%d is PERFECT NUMBER\n", num);
    }
    else
    {
        printf("\t%d is NOT PERFECT NUMBER\n", num);
    }

    return 0;
    }