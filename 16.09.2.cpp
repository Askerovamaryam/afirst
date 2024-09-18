#include <iostream>
#include <string>
int main() 
   {
	   std::string s="Some string";
	   s += ' ';
	   s += "functions";
	   //std::cout<<s<<"\n";
	   std::string sub1=s.substr(5,6);
	   
	   std::cout << s;
	   std::cout << sub1;
	   
	   std::string sub2=s.substr(12);
	   
	   size_t pos1=s.find(' ');
	   std::cout << pos1 << "\n";
	   
	   size_t pos2=s.find(' ',pos1+1);
	   std::cout << pos2;
	   
	   size_t pos3=s.find("std");
	   std::cout << pos3;
	   
	   size_t pos4=s.find('#');
	   std::cout << pos4;
	   
	   
   return 0;
}
	
