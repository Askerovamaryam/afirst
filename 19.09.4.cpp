#include <iostream>
#include <vector>
int main()
{
	int x=42;
	int& ref=x;
	const int& cref=x;
	++x;
	++ref;
	//++cref; mistake
	int* ptr=&x;
	const int* cptr=&x;
	++ *ptr;
	//++*cptr; mistake
	int y=20;
	cptr=&y;
	return 0;
}
