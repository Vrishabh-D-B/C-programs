#include<stdio.h>

void callByValue(int a){
    a = 30;
    printf("Value of a inside callByValue funcion : %d\n",a);
}

void callByReference(int *a){
    *a = 30;
    printf("Value of a inside callByReference funcion : %d\n",*a);
}

int main(){
    int a = 20;
    
    printf("Value of a before callByValue : %d\n",a);
    callByValue(a);
    printf("Value of a after callByValue : %d\n",a);

    printf("Value of a before callByReference : %d\n",a);
    callByReference(&a);
    printf("Value of a after callByReference : %d\n",a);
    return 0;
}