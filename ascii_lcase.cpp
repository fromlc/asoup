//------------------------------------------------------------------------------
// ascii.cpp
//
// Fills a char array with lowercase letters a - z
//------------------------------------------------------------------------------

#include <iostream>

#define NUM_LETTERS			26
#define ASCII_LOWERCASE_A	97

int main()
{
	char ascii_char[NUM_LETTERS];

	for (int i = 0; i < NUM_LETTERS; i++)
	{
		ascii_char[i] = (char)(i + ASCII_LOWERCASE_A);
		std::cout << ascii_char[i];
	}

	std::cout << std::endl;

	system("pause");

	return 0;
}
