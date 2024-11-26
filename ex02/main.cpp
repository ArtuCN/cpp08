#include "includes/MutantStack.hpp"


int main() 
{

	MutantStack<int> ms;

	std::cout<<ms.empty()<<"\n";
	ms.push(10);
	ms.push(27);
	ms.push(6);
	ms.pop();
	std::cout<<ms.empty()<<"\n";
	std::cout<<ms.top()<<"\n";
	for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); ++it) {
        std::cout << *it << " ";
    }
	ms.push(19);
	ms.push(29);
	ms.push(4);
	std::cout<<"\n";
	for (MutantStack<int>::iterator it = ms.begin(); it != ms.end(); ++it) {
        *it += 5;
		std::cout << *it << " ";
    }
	std::cout<<"\n";

    return 0;
}