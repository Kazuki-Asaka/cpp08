#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <exception>
#include <set>

#define RED "\e[0;31m"
#define BLUE "\e[0;34m"
#define NC "\e[0m"


template <typename T>
typename T::const_iterator easyfind(const T& v, int i) {
    typename T::const_iterator p = std::find(v.begin(), v.end(), i);
    if(p == v.end()) {
        std::cout << "not found" << std::endl;
        throw std::exception();
    }
    else {
        std::cout << "find " << i << std::endl;
        return p;
    }
}

#endif