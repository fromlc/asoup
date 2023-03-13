//------------------------------------------------------------------------------
// lab9.cpp
//
// Fills a char array with lowercase letters a - z
//------------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <ctime>

#include "lab9.h"

int main()
{
	int i = 0;

	char a[MAX_A];

	// seed the random number gen
	srand(time(0));	

	// fill the array with random letters
	get_letters(a);

	// display four-letter words
	display_words(a);

	// count the occurrences of each letter
	count_letters(a);

	int random = get_random_int();
	
	std::cout << std::endl;

	system("pause");

	return 0;
}

//------------------------------------------------------------------------------
// fill a character array with random letters
//------------------------------------------------------------------------------
void get_letters(char b[])
{
	for (unsigned i = 0; i < MAX_A; i++)
	{
		// get a random number between 0 and 25 and convert to a lowercase letter
		int x = rand() % NUM_LETTERS + 'a';

		b[i] = (char)x;
	}
}

//------------------------------------------------------------------------------
// display letters
//------------------------------------------------------------------------------
void display_words(char b[])
{
	//0000 - 1111  unsigned:  interpreted as 0 to 15
	//0000 - 1111  int interpreted as -8 to 7

	unsigned index = 0;
	int j = 0;

	for (unsigned i = 0; i < MAX_A; i++)
	{
		std::cout << b[i];

			index++;
		//		if (index == 4)
		if (index % 4 == 0)
		{
			std::cout << " ";
			index = 0;
		}

	}

	std::cout << std::endl;

	//if ((i > 0) && (i % 4 == 0))
	//	std::cout << " ";
}

//------------------------------------------------------------------------------
// count letter occurrences in an array of char
//------------------------------------------------------------------------------
void count_letters(char b[])
{
	for (int i = 0; i < NUM_LETTERS; i++)
	{
		int count = 0;
		int letter = i + ASCII_LOWERCASE_A;

		for (int k = 0; k < 20; k++)
		{
			if (b[k] == letter)
				count++;
		}

		if (count != 0)
			std::cout << "there are " << count << " " 
			<< (char) letter << "'s" << std::endl;

		letter++;

	}

}


//------------------------------------------------------------------------------
// get a random int #TODO
//------------------------------------------------------------------------------
int get_random_int()
{
	return 1;
}

