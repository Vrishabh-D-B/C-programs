#include<stdio.h>
void main()
{
    int n, n_original, remainder, result = 0;
    
    printf("\tEnter any number : ");
    scanf("%d",&n);

    n_original = n;
    while(n!=0)
    {
        remainder = n % 10;   
        result += remainder * remainder * remainder;
        n /= 10;
    }

    if(result == n_original)
        printf("\n\tNumber is Armstrong.\n");
    else
        printf("\n\tNot Armstrong\n");

}