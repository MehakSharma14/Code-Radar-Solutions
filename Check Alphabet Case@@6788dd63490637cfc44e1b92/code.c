#include <stdio.h>
void main(){
    char value;
    scanf("%c", &value);
    if(isupper(value)){
        printf("Uppercase");
    }else{
        printf("Lowercase")
    }
}