#include <stdio.h>
int main(){
    int marks;
    scanf("%d", &marks);
    if(marks>=90){
        printf("A");}
    
    else if(90> marks && 80<=marks ){
    printf("B");
    }
    else if(70<=marks && marks<80){
    printf("C");}
    else if(60<=marks && marks<70){
    printf("D");}
    else if(marks<60){
    printf("F");}
    return 0;

}