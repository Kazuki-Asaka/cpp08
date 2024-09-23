#include <iostream>
#include <set>

int main () {
	std::multiset<int> set;
	const int a[] = { 0, 1, 2, 3, 5 };

	set.insert(a, a + 9);

	for (std::multiset<int>::iterator it = set.begin(); it != set.end(); it++) {
		std::cout << *it << std::endl;
	}

}