#include <stdio.h>
int main(void)
{
	int feet, fathoms;
	fathoms = 2;
	feet = 6 * fathoms;
	printf("There are feet %d in fathoms %d.\n", feet, fathoms);
	printf("Yes!I sdid %d feet!\n", feet);//feet可以换成6*fathoms，结果值可以是某个合适类型的式子
	return 0;
}