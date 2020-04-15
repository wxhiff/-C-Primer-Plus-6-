#include<stdio.h>//a useful program to a runner
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;//1公里的英里数
int main(void)
{
	double distk, distm;
	double rate;
	int min, sec;
	int time;
	double mtime;//每英里所需时间，以秒为单位
	int mmin, msec;//每英里所需时间，以秒和分钟为单位

	printf("This program converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("Please enter,in kilometers,the distance run.\n");//distk为跑的公里数
	scanf_s("%lf", &distk);
	printf("Next enter the time in minutes and seconds.\n");
	printf("Bein by entering the minutes.\n");
	scanf_s("%d", &min);
	printf("Now enter the seconds.\n");
	scanf_s("%d", &sec);
	
	time = S_PER_M * min + sec;//跑步总秒数
	distm = M_PER_K * distk;//跑步的英里数
	rate = distm / time * S_PER_H;//每小时的平均速度，单位为英里
	mtime = (double)time / distm;//每英里所用时间
	mmin = (int)mtime / S_PER_M;//求分钟
	msec = (int)mtime%S_PER_M;//求模，得秒数

	printf("You ran %1.2fkm (%1.2f miles) in %d min,%d sec.\n", distk, distm, min, sec);
	printf("That pace correponds to running a mile in %d min,", mmin);
	printf("%d sec.\nYou average speed was %1.2f mph.\n", msec, rate);

	return 0;
}