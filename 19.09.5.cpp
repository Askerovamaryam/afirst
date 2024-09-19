#include <iostream>
#include <vector>
int main()
{
	const int cx=42;
	//int& ref=cx; mistake
	const int& cref=cx;
	//int* ptr=&cx; mistake
	const int* cptr=&cx;
	return 0;
}	
	
