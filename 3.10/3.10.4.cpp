#include <iostream>
#include <string>
int main()
{
	std::string s {"Hello,world!"};
		auto sub=s.substr(7);
		sub[0]='w';
		std::cout <<sub<<"\n";
		std::cout <<s<<"\n";
	}
		
