#include <iostream> 
#include <string> 

int main(int argc, char* argv[])
{
	std::string input;
	std::getline(std::cin, input);
	std::string delimiter = " "; 
	size_t pos = 0;
	std::string token; 
	int tokens[2];
	int index = 0;
	while ((pos = input.find(delimiter)) != std::string::npos)
	{
		token = input.substr(0, pos); tokens[index] = std::stoi(token);
		input.erase(0, pos + delimiter.length());
		index++;
	}
	tokens[index] = std::stoi(input);
	int number1 = tokens[0];
	int number2 = tokens[1];
	if (number1 < number2)
	{
		int shelf = number1;
		number1 = number2;
		number2 = shelf;
	}
	if (number1 == 1 || number2 == 1)
	{
		std::cout << number1 * number2 * 4 << std::endl;
	}
	else
	{
		if (number1 % 2 == 1 && number2 % 2 == 1)
		{
			std::cout << (number2 + 2) * number1 + number2 * (number1 + 2) - 2 << std::endl;
		}
		else
		{
			std::cout << (number2 + 2) * number1 + number2;
		}
	}


	EXIT_SUCCESS;
}