#include<stdio.h>
int main(){
    int a,b,c;
    c = 0;
    scanf("%d %d", &a,&b);
    c += a;
    b = a;
    b = c;
    printf("%d %d", &a, &b);
    return 0;
    
}