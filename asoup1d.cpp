//------------------------------------------------------------------------------
// CS 181 Lab 9 Key
//
// AlpHaBet SouP
//------------------------------------------------------------------------------

#include <iostream>
#include <ctime>

// Constants
#define ASCII_LOWERCASE_A	97
#define ASCII_UPPERCASE_A	65
#define MAX_CHARS			20
#define MAX_LETTERS			26

// Local function prototypes
char get_letter(int ascii_case_offset);

using namespace std;

//------------------------------------------------------------------------------
// Entry point
//------------------------------------------------------------------------------
int main()
{
	char ch_array[20];

	// seed for random number generator is #of secs since 1/1/1970 @12:00am
	srand((unsigned int) time(0));

	// fill char array with lowercase letters a-z
	for (int i = 0; i < MAX_CHARS; i++)
	{
		ch_array[i] = get_letter(ASCII_LOWERCASE_A);
	}

	// display array chars as words of 4 chars separated by spaces
	for (int i = 0; i < MAX_CHARS; i++)
	{
		if ((i % 4) == 0 && i)
			cout << " ";

		cout << ch_array[i];
	}

	cout << endl << endl;

	// count occurrences of each lowercase letter in ch_array
	for (int i = 0; i < MAX_LETTERS; i++)
	{
		char ch = (char)(i + ASCII_LOWERCASE_A);
		int count = 0;

		for (int i = 0; i < MAX_CHARS; i++)
		{
			if (ch == ch_array[i])
				count++;
		}

		// display non-zero counts only
		if (count)
		{
			cout << ch << ": " << count << endl;
		}
	}

	cout << endl;

	system("pause");

	return(0);
}

//------------------------------------------------------------------------------
// Return an UPPERCASE or lowercase letter
//------------------------------------------------------------------------------
char get_letter(int ascii_case_offset)
{
	// generate a random number between 0 and 25
	int i = rand() % MAX_LETTERS;

	i += ascii_case_offset;

	return (char) i;
}

