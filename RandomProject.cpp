#include <iostream>

void body(int number1)
{
	std::cout << "Enter another integer: ";
	int number2{};
	std::cin >> number2;
	std::cout << "Do you want to enter another integer? ";
	char response{};
	std::cin >> response;
	if (response == 'y')
	{
		number1 = number1 + number2;
		char response{ 0 };
		body(number1);
	}
	if (response == 'n')
	{
		std::cout << "Your number is: " << number1 + number2;
	}
}

int main()
{
	std::cout << "Enter an integer: ";
	int number1{};
	std::cin >> number1;
	body(number1);
	return 0;
}
