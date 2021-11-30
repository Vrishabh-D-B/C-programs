#include<stdio.h>
void main()
{
    int arr[10], i, size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter %d Elements for array : ",size);
    for(i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    
    //int *p = &arr[0];
    
    printf("\nElements of array are : ");
    for(i = 0; i < size; i++)
        printf("%d ",arr[i]);
    printf("\n");
    
}