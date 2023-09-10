#include <iostream>
#include <vector>
#include <algorithm>

void print(int a)
{
	std::cout << a << " ";
}

void check(int& a)
{
	if (a % 2 == 1) { a *= 3; }
	print(a);
}

int main()
{
	system ("chcp 1251");
	setlocale(LC_ALL, "Russian");

	std::vector<int> v1 {4, 7, 9, 14, 12};

	std::cout << "\nВходные данные: ";

	std::for_each(begin(v1), end(v1), print);

	std::cout << "\nВыходные данные: ";

	auto lambda = [](std::vector<int>& vec)
	{
		std::for_each(begin(vec), end(vec), check);
	};
	
	lambda(v1);

	std::cout << "\n";

	return 0;
}