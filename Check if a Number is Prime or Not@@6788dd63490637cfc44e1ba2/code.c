#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num<=1 || (num%2==0 && num!=2))
    printf("Not Prime");
    else
    printf("Prime");
    return 0;

}