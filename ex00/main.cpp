#include "includes/easyfind.hpp"
#include <exception>
#include <vector>


int main( void ) {
	std::vector<int> v;
	v.push_back(5);
	v.push_back(3);
	v.push_back(2);
	v.push_back(4);
	v.push_back(1);
	v.push_back(6);
	try {
		std::vector<int>::iterator it = EasyFind(v, 6);
		std::cout<<*it<< " found\n";
	}
	catch(const std::exception &e){
		std::cout<<e.what();
	}
	v.pop_back();
	try {
		std::vector<int>::iterator it = EasyFind(v, 6);
		std::cout<<*it<< " found\n";
	}
	catch(const std::exception &e){
		std::cout<<e.what();
	}
	return 0;
}