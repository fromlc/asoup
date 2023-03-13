//------------------------------------------------------------------------------
// AlpHaBet SouP example
//------------------------------------------------------------------------------

#include <iostream>
#include <ctime>

#define LOWER_A		97
#define	UPPER_A		65
#define MAX_CHARS	20
#define MAX_LETTERS	26

// Local function prototypes
char getLetter(bool lowercase);

using namespace std;

//------------------------------------------------------------------------------
// Entry point
//------------------------------------------------------------------------------
int main()
{
	char ch_array[20];

	// seed for random number generator is #of secs since 1/1/1970 @12:00am
	srand(time(0));

	// fill char array with lowercase letters a-z
	for (int i = 0; i < MAX_CHARS; i++)
	{
		ch_array[i] = getLetter(true);
	}

	cout << "AlpHaBet SouP!" << endl << endl;

	// display array chars as words of 4 chars separated by spaces
	for (int i = 0; i < MAX_CHARS; i++)
	{
		if ((i % 4) == 0 && i)
			cout << " ";

		cout << ch_array[i];
	}

	cout << endl << endl;

	// count occurrences of each letter
	for (int i = 0; i < MAX_LETTERS; i++)
	{
		char ch = (char)(i + LOWER_A);
		int count = 0;

		for (int i = 0; i < MAX_CHARS; i++)
		{
			if (ch == ch_array[i])
				count++;
		}

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
char getLetter(bool lowercase)
{
	// generate a random number between 0 and 25
	int i = rand() % 26;

	if (lowercase)
		i += LOWER_A;
	else
		i += UPPER_A;

	char ch = (char)i;

	return ch;
}

