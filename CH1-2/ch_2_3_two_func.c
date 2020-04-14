#include <stdio.h>            //在一个文件中建立两个函数
void butler(void);           //ISO/ANSI C 函数原型
int main1(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes.Bring me some tea and writeable CD-ROMS.\n");
	return 0;
}

void butler(void)            //函数定义的开始
{
	printf("You rang,Sir?\n");
}