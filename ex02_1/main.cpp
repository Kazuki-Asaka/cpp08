#include "MutantStack.hpp"

int main() {
	{
		std::cout << "==================Default Test======================" << std::endl;
		try {
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
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "==================Vector Test======================" << std::endl;
		try {

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
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "==================List Test======================" << std::endl;
		try {

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
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "==================Deque Test======================" << std::endl;
		try {

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
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "==================Error Default Test======================" << std::endl;
		try {
			MutantStack<int> mstack;
			mstack.push(5);
			std::cout << mstack.size() << std::endl;
			mstack.pop();
			std::cout << mstack.size() << std::endl;
			mstack.pop();
			std::cout << mstack.size() << std::endl;
			std::cout << "top : " << mstack.top() << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "==================Error Vector Test======================" << std::endl;
		try {
			MutantStack<int, std::vector<int> > mstack;
			mstack.push(5);
			std::cout << mstack.size() << std::endl;
			mstack.pop();
			std::cout << mstack.size() << std::endl;
			mstack.pop();
			std::cout << mstack.size() << std::endl;
			std::cout << "top : " << mstack.top() << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "==================Error List Test======================" << std::endl;
		try {
			MutantStack<int, std::list<int> > mstack;
			mstack.push(5);
			std::cout << mstack.size() << std::endl;
			mstack.pop();
			std::cout << mstack.size() << std::endl;
			mstack.pop();
			std::cout << mstack.size() << std::endl;
			std::cout << "top : " << mstack.top() << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "==================Error Deque Test======================" << std::endl;
		try {
			MutantStack<int, std::deque<int> > mstack;
			mstack.push(5);
			std::cout << mstack.size() << std::endl;
			mstack.pop();
			std::cout << mstack.size() << std::endl;
			mstack.pop();
			std::cout << mstack.size() << std::endl;
			std::cout << "top : " << mstack.top() << std::endl;
		} catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "==================const Default Test======================" << std::endl;
		try {
			MutantStack<int> mstack;
			mstack.push(5);
			mstack.push(100);
			std::cout << "mstack top : " << mstack.top() << std::endl;
			const MutantStack<int> mstack1(mstack);
			std::cout << "mstack1 top : " << mstack1.top() << std::endl;
			for (MutantStack<int>::const_iterator it = mstack1.begin(); it != mstack1.end(); ++ it) {
				std::cout << "*it : " << *it << std::endl; 
			}			
			MutantStack<int> mstack2;
			mstack2 = mstack;
			std::cout << "mstack2 top : "<< mstack2.top() << std::endl;
		} catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "==================const Vector Test======================" << std::endl;
		try {
			MutantStack<int, std::vector<int> > mstack;
			mstack.push(5);
			mstack.push(100);
			std::cout << "mstack top : " << mstack.top() << std::endl;
			const MutantStack<int, std::vector<int> > mstack1(mstack);
			std::cout << "mstack1 top : " << mstack1.top() << std::endl;
			for (MutantStack<int, std::vector<int> >::const_iterator it = mstack1.begin(); it != mstack1.end(); ++ it) {
				std::cout << "*it : " << *it << std::endl; 
			}			
			MutantStack<int, std::vector<int> > mstack2;
			mstack2 = mstack;
			std::cout << "mstack2 top : "<< mstack2.top() << std::endl;
		} catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "==================const List Test======================" << std::endl;
		try {
			MutantStack<int, std::list<int> > mstack;
			mstack.push(5);
			mstack.push(100);
			std::cout << "mstack top : " << mstack.top() << std::endl;
			const MutantStack<int, std::list<int> > mstack1(mstack);
			std::cout << "mstack1 top : " << mstack1.top() << std::endl;
			for (MutantStack<int, std::list<int> >::const_iterator it = mstack1.begin(); it != mstack1.end(); ++ it) {
				std::cout << "*it : " << *it << std::endl; 
			}			
			MutantStack<int, std::list<int> > mstack2;
			mstack2 = mstack;
			std::cout << "mstack2 top : "<< mstack2.top() << std::endl;
		} catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}

	{
		std::cout << "==================const Deque Test======================" << std::endl;
		try {
			MutantStack<int, std::deque<int> > mstack;
			mstack.push(5);
			mstack.push(100);
			std::cout << "mstack top : " << mstack.top() << std::endl;
			const MutantStack<int, std::deque<int> > mstack1(mstack);
			std::cout << "mstack1 top : " << mstack1.top() << std::endl;
			for (MutantStack<int, std::deque<int> >::const_iterator it = mstack1.begin(); it != mstack1.end(); ++ it) {
				std::cout << "*it : " << *it << std::endl; 
			}			
			MutantStack<int, std::deque<int> > mstack2;
			mstack2 = mstack;
			std::cout << "mstack2 top : "<< mstack2.top() << std::endl;
		} catch (std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
}