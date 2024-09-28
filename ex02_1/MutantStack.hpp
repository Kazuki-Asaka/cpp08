#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <stack>
#include <exception>

template <typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T, Container>{
public:
    typedef typename Container::iterator  iterator;
    typedef typename Container::const_iterator const_iterator;
    MutantStack();
    MutantStack(const MutantStack& rhs);
    MutantStack& operator=(const MutantStack& rhs);
    ~MutantStack();
    void push(T addition);
    void pop();
    T top() const;
    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const ;
    size_t size() const;
    // typedef typename Container<T>::iterator const_iterator;
};

#include "MutantStack.tpp"

#endif