#include<stdio.h>
#include<string.h>

int main(){
    char str1[10] = "Hello";
    char str2[10] = "World";
    char rslt[20] = "";
    
    printf("Concatinatimg strings str1 and str2 = %s\n",strcat(str1,str2));
    
    printf("Length of the string str1 = %d\n",strlen(str1));
    
    strcpy(rslt,str2);
    printf("Copying str2 in rslt = %s\n",rslt);
    

    // strrev(str1);
    // printf("Reversing a str1 = %s\n",str1);
    
    return 0;
}
