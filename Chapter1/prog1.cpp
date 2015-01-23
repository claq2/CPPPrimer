#include <iostream>

int main()
{
	int sum = 0;
	for (size_t i = -100; i < 100; ++i) {
		sum += 1;
	}
	std::cout << "Sum of -100 to 100 inclusive is "
			  << sum << std::endl;
	return 0;
}
