#include "time.h"
using namespace chron;

int Time::GetHours() const 
{
	return hours;
}
int Time::GetMinutes() const
{
	return minutes;
}
int Time::GetSeconds() const
{
	return seconds;
} 
void Time::AddSeconds(int s)
{
	seconds+=s;
	normalise();
}
Time::Time(int h, int m, int s): hours(h),minutes(m),seconds(s)
{
	normalise();
}
void Time::normalise()
{
minutes+=seconds/60;
	seconds %= 60;
	if(seconds<0)
	{
		minutes-=1;
		seconds+=60;
	}
hours+=minutes/60;
	minutes %= 60;
	if(minutes<0)
	{
		hours-=1;
		minutes+=60;
	}
	hours%=24;
	if(hours<0)
	{
		hours+=24;
	}
}	

