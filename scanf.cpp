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
    printf("n = %d\n",n);//abc�ᱻscanf������ʽ���̵�
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
        printf("EOF = %d\n", EOF);//���������ctrl+d�Ǹ��߼���������Ѿ�û�пɶ�������ݣ�����scanf����ֵ���Ǹ�1�������Mac OS��
        //Windowsϵͳͨ����ctrl + z
    return 0;
}
