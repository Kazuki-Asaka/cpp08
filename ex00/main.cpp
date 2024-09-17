#include "easyfind.hpp"

int main() {
    {
		std::cout << BLUE << "=======Test_VECTOR=======" << NC << std::endl;
		try {
			std::vector<int> v;
			for (int i = 0; i < 10; i++) {
				v.push_back(i);
			}
			for (int i = 0; i < 11; i++) {
				std::cout << i << " check" << std::endl;
				std::vector<int>::const_iterator p = easyfind(v, i);
				std::cout << "iterator: " << *p << std::endl;
			}

		} catch(std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
    }

	{
		std::cout << BLUE <<"=======Test_VECTOR_ZERO=======" << NC << std::endl;
		try {
			std::vector<int> v;
			std::vector<int>::const_iterator p = easyfind(v, 0);
			std::cout << "iterator: " << *p << std::endl;
		} catch(std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << BLUE <<"=======Test_LIST=======" << NC << std::endl;
		try {
			std::list<int> lst;
			for (int i = 0; i < 10; i++) {
				lst.push_back(i);
			}
			for (int i = 0; i < 11; i++) {
				std::cout << i << " check" << std::endl;
				std::list<int>::const_iterator p = easyfind(lst, i);
				std::cout << "iterator: " << *p << std::endl;
			}
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << BLUE <<"=======Test_LIST_ZERO=======" << NC << std::endl;
		try {
			std::list<int> lst;
			std::list<int>::const_iterator p = easyfind(lst, 0);
			std::cout << "iterator: " << *p << std::endl;
		} catch(std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << BLUE <<"=======TEST_DEQUE=======" << NC << std::endl;
		try {
			std::deque<int> deq;
			for (int i = 0; i < 10; i++) {
				deq.push_back(i);
			}
			for (int i = 0; i < 11; i++) {
				std::cout << i << " check" << std::endl;
				std::deque<int>::const_iterator p = easyfind(deq, i);
				std::cout << "iterator: " << *p << std::endl;				}
		} catch(std::exception& e) {
			std::cerr << e.what() << std::endl;
		} 
	}

	{
		std::cout << BLUE <<"=======Test_DEQUE_ZERO=======" << NC << std::endl;
		try {
			std::deque<int> deq;
			std::deque<int>::const_iterator p = easyfind(deq, 0);
			std::cout << "iterator: " << *p << std::endl;
		} catch(std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << BLUE <<"=======Test_SET=======" << NC << std::endl;
		try {
			std::set<int> set1;
			for (int i = 0; i < 10; i++) {
				std::pair<std::set<int>::iterator, bool> result = set1.insert(i);
				if (!result.second)
					throw std::exception();
			}
			for (int i = 0; i < 11; i++) {
				std::cout << i << " check" << std::endl;
				std::set<int>::const_iterator p = easyfind(set1, i);
				std::cout << "iterator: " << *p << std::endl;	
			}
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << BLUE <<"=======Test_SET_ZERO=======" << NC << std::endl;
		try {
			std::set<int> set1;
			std::set<int>::const_iterator p = easyfind(set1, 0);
			std::cout << "iterator: " << *p << std::endl;
		} catch(std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << BLUE <<"=======Test_MULTISET=======" << NC << std::endl;
		try {
			std::multiset<int> multiset1;
			for (int i = 0; i < 10; i++) {
				multiset1.insert(i);
			}
			for (int i = 0; i < 11; i++) {
				std::cout << i << " check" << std::endl;
				std::multiset<int>::const_iterator p = easyfind(multiset1, i);
				std::cout << "iterator: " << *p << std::endl;	
			}
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << BLUE <<"=======Test_MULTISET_ZERO=======" << NC << std::endl;
		try {
			std::multiset<int> multiset1;
			std::multiset<int>::const_iterator p = easyfind(multiset1, 0);
			std::cout << "iterator: " << *p << std::endl;
		} catch(std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
}

//set、multiset