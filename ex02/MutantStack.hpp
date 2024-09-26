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
    MutantStack();
    MutantStack(const MutantStack& rhs);
    MutantStack& operator=(const MutantStack& rhs);
    ~MutantStack();
    void push(T addition);
    void pop();
    T top();
    typename Container::iterator begin() const;
    typename Container::iterator end() const;
    size_t size();
private:
    Container container;
};


#endif