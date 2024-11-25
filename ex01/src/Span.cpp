#include "../includes/Span.hpp"
#include <algorithm>
#include <exception>
#include <limits>

Span::Span(): _N(2) {
	_memorized = 0;
}

Span::Span(int num) : _N(num) {
	_memorized = 0;
}

Span::Span(const Span &s)
{
    this->_N = s._N;
	this->_memorized = s._memorized;
	std::copy(s._v.begin(), s._v.end(), _v.begin());
}

Span &Span::operator=(const Span &s)
{
	if (this != &s)
	{
		_N = s._N;
        _memorized = s._memorized;
		_v = s._v;
	}
	return *this;
}

Span::~Span(){ }

void Span::addNumber(const int &num)
{
	if (static_cast<unsigned int>(_memorized) == _N)
		throw exc("Span is full!\n");
	_v.push_back(num);
	_memorized++;
}

int Span::longestSpan()
{
	if (_memorized < 2)
		throw exc("logical error: too few numbers!\n");
	std::sort(_v.begin(), _v.end());
	return _v[_memorized - 1] - _v[0];
}

int Span::shortestSpan()
{
	if (_memorized < 2)
		throw exc("logical error: too few numbers!\n");
	std::sort(_v.begin(), _v.end());
	int minSpan = std::numeric_limits<int>::max();
	for (int i = 0; i < _memorized - 1; i++)
	{
		if (_v[i + 1] - _v[i] < minSpan)
			minSpan = _v[i + 1] - _v[i];
	}
	return minSpan;	
}
