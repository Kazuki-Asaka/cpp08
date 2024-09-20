#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <set>
#include <exception>

class Span {
public:
	Span(unsigned int N);
	Span(const Span& rhs);
	Span& operator=(const Span& rhs);
	~Span();
	void addNumber(int i);
	unsigned int shortestSpan();
	unsigned int longestSpan();
private:
	unsigned int _length;
	std::multiset<int> set;
	Span();
};

#endif