#include<stdio.h>//a useful program to a runner
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;//1�����Ӣ����
int main(void)
{
	double distk, distm;
	double rate;
	int min, sec;
	int time;
	double mtime;//ÿӢ������ʱ�䣬����Ϊ��λ
	int mmin, msec;//ÿӢ������ʱ�䣬����ͷ���Ϊ��λ

	printf("This program converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("Please enter,in kilometers,the distance run.\n");//distkΪ�ܵĹ�����
	scanf_s("%lf", &distk);
	printf("Next enter the time in minutes and seconds.\n");
	printf("Bein by entering the minutes.\n");
	scanf_s("%d", &min);
	printf("Now enter the seconds.\n");
	scanf_s("%d", &sec);
	
	time = S_PER_M * min + sec;//�ܲ�������
	distm = M_PER_K * distk;//�ܲ���Ӣ����
	rate = distm / time * S_PER_H;//ÿСʱ��ƽ���ٶȣ���λΪӢ��
	mtime = (double)time / distm;//ÿӢ������ʱ��
	mmin = (int)mtime / S_PER_M;//�����
	msec = (int)mtime%S_PER_M;//��ģ��������

	printf("You ran %1.2fkm (%1.2f miles) in %d min,%d sec.\n", distk, distm, min, sec);
	printf("That pace correponds to running a mile in %d min,", mmin);
	printf("%d sec.\nYou average speed was %1.2f mph.\n", msec, rate);

	return 0;
}