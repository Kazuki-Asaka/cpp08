#include "MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() {
	std::cout << "MutantStack constructor called" << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& rhs) {
	*this = rhs;
}

template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack& rhs) {
	// container = rhs.container;
	if (this != &rhs)
		std::stack<T, Container>::operator=(rhs);
	return (*this);
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {
	std::cout << "MutantStack destructor called" << std::endl;
}

template <typename T, typename Container>
void MutantStack<T, Container>::push(T addition) {
	std::stack<T, Container>::c.push_back(addition);
}

template <typename T, typename Container>
void MutantStack<T, Container>::pop() {
	std::stack<T, Container>::c.pop_back();
}

template <typename T, typename Container>
T MutantStack<T, Container>::top() {
	return (std::stack<T, Container>::c.back());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
	return (std::stack<T, Container>::c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
	return (std::stack<T, Container>::c.end());
}

template <typename T, typename Container>
size_t MutantStack<T, Container>::size() {
	return(std::stack<T, Container>::c.size());
}