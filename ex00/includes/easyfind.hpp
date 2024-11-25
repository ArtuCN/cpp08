#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <list>
#include "algorithm"



class valueNotFound: public std::exception
{
	private:
		std::string _msg;
	public:
		valueNotFound(const std::string& msg) : _msg(msg) {};
		
		~valueNotFound() throw() {};
		const char* what() const throw() {
			return _msg.c_str();
		};
};

template<typename T>

typename T::iterator EasyFind(T& container, int val)
{
	typename T::iterator it = std::find(container.begin(), container.end(), val);

	if (it == container.end())
		throw valueNotFound("Value not found\n");
	return it;
}


#endif