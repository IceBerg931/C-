#include<stdio.h>

int main(){
    int n1,n2;
    n1 = printf("hello world\n");
    printf("%d\n",'\n');//输出换行符ASCII码的值
    int a = 123;
    n2 = printf("hello world :%d\n",a);
    printf("n1 = %d,n2 = %d\n",n1,n2);//输出后面有个换行符\n,它本质上也是一个字符
    return 0;    
    
    }
