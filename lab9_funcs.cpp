//------------------------------------------------------------------------------
// .cpp
//
// Functions for lab9.cpp
//------------------------------------------------------------------------------
#include "lab9.h"

// turn off assertions 
#define NDEBUG
// must #define NDEBUG before #including assert.h
#include <cassert>

#include <ctime>
#include <iostream>
#include <string>



//------------------------------------------------------------------------------
// fill a character array with random letters
// 
// #TODO pass array size parameter
//------------------------------------------------------------------------------
void get_letters(char b[])
{
	// #TODO test assert
	assert(b != nullptr);

	for (unsigned i = 0; i < MAX_A; i++)
	{
		// get a random number between 0 and 25 and convert to a lowercase letter
		int x = rand() % NUM_LETTERS + 'a';

		b[i] = (char)x;
	}
}

//------------------------------------------------------------------------------
// display letters
// 
// #TODO pass array size parameter
//------------------------------------------------------------------------------
void display_words(char b[])
{
	//0000 - 1111  unsigned:  interpreted as 0 to 15
	//0000 - 1111  int interpreted as -8 to 7

	unsigned index = 0;
	
	for (unsigned i = 0; i < MAX_A; i++)
	{
		std::cout << b[i];

		index++;
		//		if (index == 4)
		if (index % 4 == 0)
		{
			std::cout << " ";
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
// #TODO use char loop index variable!!
	for (char letter = 'a'; letter <= 'z'; letter++)
	{
		int count = 0;

		for (int k = 0; k < MAX_A; k++)
		{
			if (b[k] == letter)
				count++;
		}

		if (count != 0)
			std::cout << "there are " << count << " "
			<< (char)letter << "'s" << std::endl;
	}
}


//------------------------------------------------------------------------------
// get a random int #TODO
//------------------------------------------------------------------------------
int get_random_int()
{
	return 1;
}

