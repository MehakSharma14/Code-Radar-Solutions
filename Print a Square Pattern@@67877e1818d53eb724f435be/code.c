#include<stdio.h>
void main(){
    int i,j,k,rows;
    scanf("%d", &rows);
    for(i=1; i<=rows ; i++){
        for(j=rows ; j>=1;j--){
            printf(" ");
        }
        for(k=1; k<=rows ; k++){
            printf("* ");
        }
        printf("\n");
    }
}