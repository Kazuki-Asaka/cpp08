#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

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