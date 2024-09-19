#include <iostream>
#include <vector>
int main()
{
	std::vector<std::string> words={"one","two","three"};
	std::string& ref=words[0];
	words.clear();
	std::cout <<ref<< "\n";
	//undefined
	return 0;
}
