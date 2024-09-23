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
		int base = *(set.begin());
		
		std::multiset<int>::const_iterator start = set.begin();
		start++;
		unsigned int min = static_cast<unsigned int>(*(start) - base);
		for (std::multiset<int>::const_iterator it = start; it != set.end(); it++) {
			unsigned int tmp = static_cast<unsigned int>(*(it) - base);
			std::cout << "tmp " << tmp << std::endl;
			if(tmp < min)
				min = tmp;
			base = *(it);
		}
		return (min);
	}
}

unsigned int Span::longestSpan() {
	if (set.size() < 2)
		throw std::exception();
	else
		return (*(set.rbegin()) - *(set.begin()));
}
