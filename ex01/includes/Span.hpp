#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <iostream>
#include <vector>
#include <list>
#include "algorithm"



class Span
{
	private:
		unsigned int _N;
		std::vector<int> _v;
		int _memorized;
	public:
		Span();
		Span(int num);
		Span(const Span &s);
		Span &operator=(const Span &s);
		~Span();

		void addNumber(const int &num);
		int shortestSpan();
		int longestSpan();

		class exc: public std::exception
		{
			private:
				std::string _msg;
			public:
				exc(std::string msg) : _msg(msg) {};
				~exc() throw() {};
				const char* what() const throw()
				{
					return _msg.c_str();
				};
		};
};

#endif