#include<stdio.h>
void primeCheck(int n)
{   
    int i,check = 0;
    for ( i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            check = 1;
            break;
        }    
    }
    if(check  == 0)
        printf("%d is Prime\n",n);
    else
        printf("%d is NOT Prime\n",n);
    
}
int main(){
    int num;
    printf("Enter a num between 1-100 : ");
    scanf("%d",&num);
    primeCheck(num);
    return 0;
}