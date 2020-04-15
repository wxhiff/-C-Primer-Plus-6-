#include<stdio.h>//下载速度转换
int main(void)
{
	float megabits;
	float megabytes;
	float speed;

	printf("Please enter download speed per second:");
	scanf_s("%f", &megabits);
	printf("Please enter the file's size by megabytes:");
	scanf_s("%f", &megabytes);
	printf("At %.2f megabits per second,a file of %.2f megabytes doemloads in %.2f seconds", megabits, megabytes, megabytes * 8 / megabits);

	return 0;
}