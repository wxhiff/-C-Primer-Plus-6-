/*第2章第5个程序，修复语法错误的程序*/
#include<stdio.h>

int main(void)
{
    int n, n2, n3;

    /*本意是n3等于n的3次方，结果写成n2的平方*/
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n=%d,n squared=%d,n cubed=%d\n", n, n2, n3);

    return 0;
}
