#include <stdio.h>

int main()
{
    printf("hello world\n");

    int a = 0, b = 0;
    scanf("%d", &a);  //输入整数并赋值给变量a
    scanf("%d", &b);  //输入整数并赋值给变量b
    printf("a+b=%d\n", a+b);  //计算a+b的值并输出

    return 0;
}