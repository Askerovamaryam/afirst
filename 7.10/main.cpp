#include <iostream>
#include "time.h"
int main()
{
	chron::Time t(13,30,0);
	std::cout<<t.GetHours()<<"\n";
	return 0;
}
	
