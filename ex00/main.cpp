#include "easyfind.hpp"

int main() {
    {
		try {
			std::vector<int> v;
			for (int i = 0; i < 10; i++) {
				v.push_back(i);
			}
			for (int i = 0; i < 11; i++) {
				std::cout << *(easyfind(v, i)) << " check"<< std::endl;
			}

		} catch(std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
    }
}