#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <list>
#include <vector>
#include <stack>

template <typename T, typename Container=std::deque<T> >
class MutantStack {
public:
    typedef typename Container::iterator  iterator;
    MutantStack();
    MutantStack(const MutantStack& rhs);
    MutantStack& operator=(const MutantStack& rhs);
    ~MutantStack();
    void push(T addition);
    void pop();
    T top();
    // typename Container::iterator begin();
    // typename Container::iterator end();
    iterator begin();
    iterator end();
    size_t size();
private:
    Container container;
    // typedef typename Container<T>::iterator const_iterator;
};

#include "MutantStack.tpp"

#endif