#include <stdio.h>

typedef struct {
	int sec;
	int min;
	int hour;
}time;

time PeriodDiff (time x, time y)
{
	time diff;
	diff.sec = x.sec - y.sec;
	diff.min = x.min - y.min;
	diff.hour = x.hour - y.hour;
	while(diff.sec < 0)
	{
		diff.sec = diff.sec + 60;
		diff.min--;
	}
	while(diff.min < 0)
	{
		diff.min = diff.min + 60;
		diff.hour--;
	}
	return diff;
}

int main (void)
{
	time x,y, period;
	printf("enter 1st time (hours, minutes, seconds):\n");
	fflush(stdout);
	scanf("%d %d %d", &x.hour, &x.min, &x.sec);
	printf("enter 2nd time (hours, minutes, seconds):\n");
	fflush(stdout);
	scanf("%d %d %d", &y.hour, &y.min, &y.sec);

	period = PeriodDiff (x,y);
	printf("period difference = %d : %d : %d ", period.hour, period.min, period.sec);
}
