#include <iostream>
int main() {
	int i;
	{
		i = 3;
		int j = 4;
	}
	i = j;
	std::cout << i << std::endl;
}

/*
 * error: ‘j’ was not declared in this scope
 * j is declared in a nested scope and can not be used here.
 */