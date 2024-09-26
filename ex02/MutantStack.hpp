#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <list>
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
    T top();
    Container::iterator begin() const;
    Container::iterator end() const;
    
private:
    Container container;
};


#endif