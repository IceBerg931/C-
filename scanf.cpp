#include<stdio.h>

int main(){
    int a,b,n;
    printf("normal scanf , input a, b:");
    n = scanf("%d%d", &a , &b);
    printf("a = %d,b = %d\n",a,b);
    printf("n = %d\n", n);
    printf("format scanf , input %%dabc%%d:");
    n = scanf("%dabc%d",&a,&b);
    printf("a = %d,b = %d\n" , a,b);
    printf("n = %d\n",n);//abc会被scanf函数格式化吞掉
    n = scanf("%d", &a);
        printf("n = %d\n", n);
        n = scanf("%d", &a);
        printf("n = %d\n", n);
        n = scanf("%d", &a);
        printf("n = %d\n", n);
        n = scanf("%d", &a);
        printf("n = %d\n", n);
        n = scanf("%d", &a);
        printf("n = %d\n", n);
        n = scanf("%d", &a);
        printf("n = %d\n", n);
        n = scanf("%d", &a);
        printf("n = %d\n", n);
        n = scanf("%d", &a);
        printf("n = %d\n", n);
        n = scanf("%d", &a);
        printf("n = %d\n", n);
        n = scanf("%d", &a);
        printf("n = %d\n", n);
        printf("EOF = %d\n", EOF);//输入过程中ctrl+d是告诉计算机后面已经没有可读入的数据，所有scanf返回值都是负1，这个是Mac OS上
        //Windows系统通常是ctrl + z
    return 0;
}
