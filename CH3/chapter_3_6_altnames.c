#include<stdio.h>//可移植整数类型名
#include<inttypes.h>//支持可移植类型
int main(void)
{
    int32_t me32;//32位有符号整型变量
    me32 = 45933945;
    printf("First,assume int_32 is int:");
    printf("me32=%d\n", me32);
    printf("Next,let's not make any assumptions.\n");
    printf("Instead,use a \"macro\" from inttypes.h:");
    printf("me32=%""d""\n", me32);
    return 0;
}
