#include "MutantStack.hpp"

template <typename T, typename Container=std::deque<T>>
MutantStack<T, Container>::MutantStack() {
	std::cout << "MutantStack constructor called" << std::endl;
}

template <typename T, typename Container=std::deque<T>>
MutantStack<T, Container>::MutantStack(const MutanatStack& rhs) {
	*this = rhs;
}

template <typename T, typename Container=std::deque<T>>
MutantStack& MutantStack<T, Container>::operator=(const MutantStack& rhs) {
	container = rhs.container;
	return (*this);
}

template <typename T, typename Container=std::deque<T>>
MutantStack<T, Container>::~MutantStack() {
	std::cout << "MutantStack destructor called" << std::endl;
}

template <typename T, typename Container=std::deque<T>>
void MutantStack<T, Container>::push(T addition) {
	container.push_back(addition);
}

template <typename T, typename Container=std::deque<T>>
void MutantStack<T, Container>::pop() {
	container.pop_back()
}

template <typename T, typename Container=std::deque<T>>
T MutantStack<T, Container>::top() {
	return (container.back());
}

template <typename T, typename Container=std::deque<T>>
Container::iterator MutantStack<T, Container>:begin() {
	return (container.begin());
}

template <typename T, typename Container=std::deque<T>>
Container::iterator MutantStack<T, Container>::end() {
	return (container.end()):;
}

template <typename T, typename Container=std::deque<T>>
sizet MutantStack<T, Container>::size() {
	return(container.size());
}