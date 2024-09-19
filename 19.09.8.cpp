#include <iostream>
#include <vector>
int main()
{
	int* ptr=nullptr;
	{
		int x=42;
		ptr=&x;
	}
	std::cout <<*ptr<< "/n";
	//you can't do this
	return 0;
}
