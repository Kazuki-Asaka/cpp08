#include "MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() {
	std::cout << "MutantStack constructor called" << std::endl;
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& rhs) : std::stack<T, Container>(rhs){
	// *this = rhs;
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
	// std::stack<T, Container>::c.push_back(addition);
	this -> c.push_back(addition);
	//  std::stack<T, Container>::push(addition);
}

template <typename T, typename Container>
void MutantStack<T, Container>::pop() {
	// std::stack<T, Container>::c.pop_back();
	if (this -> c.empty() == false)
		this -> c.pop_back();
}

template <typename T, typename Container>
T MutantStack<T, Container>::top() const{
	// return (std::stack<T, Container>::c.back());
	if (this -> c.empty() == false)
		return (this -> c.back());
	else {
		// std::cerr << "Top exception" << std::endl;
		throw std::exception();
	}
	// typename Container::iterator it = this -> c.end();
	// --it;
	// return (*it);
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin() {
	// return (std::stack<T, Container>::c.begin());
	return (this -> c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
	// return (std::stack<T, Container>::c.end());
	return (this -> c.end());
}

template <typename T, typename Container>
size_t MutantStack<T, Container>::size() const{
	// return(std::stack<T, Container>::c.size());
	return (this -> c.size());
}


template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin() const{
	// return (std::stack<T, Container>::c.begin());
	return (this -> c.begin());
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end() const{
	// return (std::stack<T, Container>::c.end());
	return (this -> c.end());
}