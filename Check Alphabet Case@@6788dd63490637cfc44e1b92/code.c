#include <stdio.h>
#include<ctype.h>
void main(){
    char value;
    scanf("%c", &value);
    if(isupper(value)){
        printf("Uppercase");
    }else if(islower(value)){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
}