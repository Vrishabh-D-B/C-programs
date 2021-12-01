#include<stdio.h>
#include<string.h>

int main(){
    char str1[10] = "Hello";
    char str2[10] = "World";
    char rslt[20]; 

    //printf("Concatinatimg strings str1 and str2 = %s",str1+str2);
    
    printf("Length of the string str1 = %d\n",strlen(str1));

    printf("Copying str2 in rslt\n");
    strcpy(rslt,str2);
    printf("rslt = %s\n",rslt);

    
}
