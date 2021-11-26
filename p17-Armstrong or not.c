#include<stdio.h>
void main()
{
    int n, n_original, rem, res = 0;
    
    printf("\tEnter any number : ");
    scanf("%d",&n);

    n_original = n;
    while(n!=0)
    {
        rem = n % 10;   
        res += rem * rem * rem;
        n /= 10;
    }

    if(res == n_original)
        printf("\n\tNumber is Armstrong.\n");
    else
        printf("\n\tNot Armstrong\n");

}