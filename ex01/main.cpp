#include "Span.hpp"

int	main() {
	{
		try {
			Span sp(5);

			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		try {
			Span sp(5);

			sp.addNumber(2147483647);
			sp.addNumber(-2147483648);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	// {
	// 	try {
	// 		Span sp();

	// 	} catch(std::exception& e) {
	// 		std::cerr << e.what() << std::endl;
	// 	}
	// }
	{
		std::cout << "test" << std::endl;
		try {
			Span sp(10000);
			
			std::vector<int> vec;
			for (int i = 0; i < 10001; i++) {
				vec.push_back(i);
			}
			std::cout << "here" << std::endl;
			sp.addNumber(vec.begin(), vec.end());
			std::cout << "here1" << std::endl;

			std::cout << "short " << sp.shortestSpan() << std::endl;
			std::cout << "long " << sp.longestSpan() << std::endl;
		} catch(std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
}
