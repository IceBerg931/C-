#include<stdio.h>

int main(){
    int n , digit;
    scanf("%d" , &n);
    digit = printf("%d", n);
    printf("has %d digit(s)\n",digit);//关键是传参
    return 0;
}
