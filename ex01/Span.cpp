#include "Span.hpp"

Span::Span(unsigned int N) {
	_length = N;
}

Span::~Span() {
	std::cout << "Span destructor called" << std::endl;
}

Span::Span(const Span& rhs) {
	*this = rhs;
}

Span& Span::operator=(const Span& rhs) {
	_length = rhs._length;
	set = rhs.set;
	return (*this);
}

void Span::addNumber(int i) {
	if (set.size() ==  _length) {
		throw std::exception();
	}
	else {
		set.insert(i);
	}
}

unsigned int Span::shortestSpan() {
	if (set.size() < 2)
		throw std::exception();
	else {
		unsigned int tmp = *(set.begin() + 1) ;
		for (std::multiset<int>::const_iterator it = set.begin(); it != set.end() - 1; it++) {
		
		}
	}
}

unsigned int Span::longestSpan() {
	if (set.size() < 2)
		throw std::exception();
	else
		return (*(set.end()) - *(set.begin()));
}