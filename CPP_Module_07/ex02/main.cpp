#include "Array.hpp"
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

#define MAX_VAL 10
int main(int, char**)
{
	Array<char> letters;
	Array<char>	mirrorLetters(4);

	std::cout << "creation of mirrorLetters with 't' 'e' 's' 't' inside" << std::endl;
	mirrorLetters[0] = 't';
	mirrorLetters[1] = 'e';
	mirrorLetters[2] = 's';
	mirrorLetters[3] = 't';

	std::cout << "letters = mirrorLetters" << std::endl;
	letters = mirrorLetters;

	std::cout << "content of letters :" << std::endl;

	for (int i = 0; i < 4; i++)
		std::cout << letters[i] << std::endl;
	std::cout << std::endl;

	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];

	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand() % 100;
		numbers[i] = value;
		mirror[i] = value;
	}

	std::cout << "check if copy/assignation won’t affect anything in the other array..." << std::endl;
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	std::cout << "everythings is okay !" << std::endl;
	std::cout << std::endl;


	try
	{
		std::cout << "test numbers[-2] = 0:      ";
		numbers[-2] = 0;
		std::cout << "it works !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "test numbers[MAX_VAL] = 0  ";
		numbers[MAX_VAL] = 0;
		std::cout << "it works !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;


	std::cout << "before rand()" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
		numbers[i] = rand() % 100;

	std::cout << "after rand()" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
		std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
	std::cout << std::endl;

	std::cout << "delete [] mirror" << std::endl;
	delete [] mirror;

	return 0;
}