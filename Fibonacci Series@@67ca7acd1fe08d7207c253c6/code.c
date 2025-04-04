#include<stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}
void fibonacciSeries(int s){
int a= 0, b=1, next;
for(int i=1; i<s;i++){
    printf("%d", a);
    next = a+b;
    a=b;
    b= next;
}
}
