#include "MutantStack.hpp"

int main() {
	{
		std::cout << "==================Default Test======================" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top : " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size : " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << "it : " << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << "s'size : " << s.size() << std::endl;
		while (s.size() > 0) {
			std::cout << "s'it(reverse) : " << s.top() << std::endl;
			s.pop();
		}
		// return (0);
	}

	{
		std::cout << "==================Vector Test======================" << std::endl;
		MutantStack<int, std::vector<int> > mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top : " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size : " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int, std::vector<int> >::iterator it = mstack.begin();
		MutantStack<int, std::vector<int> >::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << "it : " << *it << std::endl;
			++it;
		}
		std::stack<int, std::vector<int> > s(mstack);
		std::cout << "s'size : " << s.size() << std::endl;
		while (s.size() > 0) {
			std::cout << "s'it(reverse) : " << s.top() << std::endl;
			s.pop();
		}
		// return (0);
	}

	{
		std::cout << "==================List Test======================" << std::endl;
		MutantStack<int, std::list<int> > mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top : " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size : " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int, std::list<int> >::iterator it = mstack.begin();
		MutantStack<int, std::list<int> >::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << "it : " << *it << std::endl;
			++it;
		}
		std::stack<int, std::list<int> > s(mstack);
		std::cout << "s'size : " << s.size() << std::endl;
		while (s.size() > 0) {
			std::cout << "s'it(reverse) : " << s.top() << std::endl;
			s.pop();
		}
	}

	{
		std::cout << "==================Deque Test======================" << std::endl;
		MutantStack<int, std::deque<int> > mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "top : " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "size : " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int, std::deque<int> >::iterator it = mstack.begin();
		MutantStack<int, std::deque<int> >::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << "it : " << *it << std::endl;
			++it;
		}
		std::stack<int, std::deque<int> > s(mstack);
		std::cout << "s'size : " << s.size() << std::endl;
		while (s.size() > 0) {
			std::cout << "s'it(reverse) : " << s.top() << std::endl;
			s.pop();
		}
	}

	{
		std::cout << "==================Error Default Test======================" << std::endl;

	}

	{
		std::cout << "==================Error Vector Test======================" << std::endl;

	}

	{
		std::cout << "==================Error List Test======================" << std::endl;

	}

	{
		std::cout << "==================Error Deque Test======================" << std::endl;

	}

	{
		std::cout << "==================const Default Test======================" << std::endl;
		// MutantStack<int> mstack;
		// mstack.push(5);
		// mstack.push(17);
		// Mutant
		// std::cout << "top : " << mstack.top() << std::endl;
		// mstack.pop();
		std::cout << "size : " << mstack.size() << std::endl;
		// mstack.push(3);
		// mstack.push(5);
		// mstack.push(737);
		// //[...]
		// mstack.push(0);
		// const MutantStack<int>::iterator it = mstack.begin();
		// const MutantStack<int>::iterator ite = mstack.end();
		// ++it;
		// --it;
		// while (it != ite) {
		// 	std::cout << "it : " << *it << std::endl;
		// 	++it;
		// }
		// std::stack<int> s(mstack);
		// std::cout << "s'size : " << s.size() << std::endl;
		// while (s.size() > 0) {
		// 	std::cout << "s'it(reverse) : " << s.top() << std::endl;
		// 	s.pop();
		// }
	}

	{
		std::cout << "==================const Vector Test======================" << std::endl;

	}

	{
		std::cout << "==================const List Test======================" << std::endl;

	}

	{
		std::cout << "==================const Deque Test======================" << std::endl;

	}
}