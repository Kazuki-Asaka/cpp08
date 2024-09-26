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
	container = rhs.container;
	return (*this);
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {
	std::cout << "MutantStack destructor called" << std::endl;
}

template <typename T, typename Container>
void MutantStack<T, Container>::push(T addition) {
	container.push_back(addition);
}

template <typename T, typename Container>
void MutantStack<T, Container>::pop() {
	container.pop_back();
}

template <typename T, typename Container>
T MutantStack<T, Container>::top() {
	return (container.back());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
	return (container.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
	return (container.end());
}

template <typename T, typename Container>
size_t MutantStack<T, Container>::size() {
	return(container.size());
}