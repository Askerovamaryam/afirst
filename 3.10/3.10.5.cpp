#include <iostream>
#include <string>
#include <string_view>
int main()
{
std::string s{"Hello, world! How do you do?"};
std::string_view sv=s;
sv.remove_prefix(7);
sv.remove_suffix(16);
std::cout <<sv<<"\n";
std::cout <<s<<"\n";
return 0;
}
