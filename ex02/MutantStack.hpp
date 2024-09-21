#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <string>
#include <vector>

template <typename T, typename Container=std::deque<T>>
class MutantStack {
public:
    MutantStack();
    MutantStack(const MutantStack& rhs);
    MutantStack& operator=(const MutantStack& rhs);
    ~MutantStack();
    void push(T addition);
    void pop();
    Container::iterator begin();
    Container::iterator end();
    
private:
    Container container;
};


#endif