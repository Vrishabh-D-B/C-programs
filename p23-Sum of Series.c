#include<stdio.h>
int fact(int x)
{
    if(x<=1)
        return 1;
    else
        return x*fact(x-1);
}
void main()
{
    int n,f=0,i;
    printf("\tEnter any number : ");
    scanf("%d",&n);

    printf("\t");
    for(i=1;i<=n;i++)
    {
        f=f+fact(i);
        if(i==n)
            printf("%d!",i);
        else
            printf("%d! +  ",i);
    }   
    printf("\n\tSum of series = %d\n",f);
    
}