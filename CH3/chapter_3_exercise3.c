#include<stdio.h>//蜂鸣器发声并打印一些字符
int main(void)
{
	char a = '\7';

	printf("%c Startled by the sudden sound,Sally shouted.\nBy the Great Pumpkin, what was that.",a);/*有好几种写法
    printf("\7 Startled by the sudden sound,Sally shouted.\n\By the Great Pumpkin, what was that.")*/

	return 0;
}