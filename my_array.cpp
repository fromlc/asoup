//------------------
// array example
//------------------

#include <iostream>

#define LOWER_A	97
#define UPPER_A	65

// Global vars
int g_count = 0;
bool g_lowercase;

// Local function prototypes
char getLetter();

using namespace std;

int main()
{
	// 1 2 3 is the contents of my_array
	int my_array[3] = { 1, 2, 3 };



	int int1 = 1;
	int int2 = 2;
	int int3 = 3;

	cout << int1 << endl;
	cout << int2 << endl;
	cout << int3 << endl;
	cout << endl;

	char my_chars[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };

	for (int i = 0; i < 10; i++)
	{
		cout << my_chars[i];
	}

	cout << endl;

	my_array[0] = 1;
	my_array[1] = 2;
	my_array[2] = 3;

	cout << my_array[0] << endl;
	cout << my_array[1] << endl;
	cout << my_array[2] << endl;

	char my_arr2[20];

	// fill my 20-char array
	for (int i = 0; i < 20; i++)
	{
		my_arr2[i] = getLetter();
	}

	for (int i = 0; i < 20; i++)
	{
		if ((i % 4) == 0 && i)
			cout << " ";

		cout << my_arr2[i];
	}

	cout << endl;

	system("pause");

	return(0);
}

//---------------------------
// return a lowercase letter
//---------------------------
char getLetter()
{
	// generate a random number between 0 and 25
	int i = rand() % 26;

	i += LOWER_A;

	char ch = (char)i;

	return ch;
}

