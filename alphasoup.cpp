//------------------------------------------------------------------------------
// alphasoup.cpp
//
// Fills a char array with lowercase letters 'a' - 'z'
// Displays the array as four-letter words
// Counts occurrences of each letter in the array
//------------------------------------------------------------------------------

// turn off assertions 
#define NDEBUG
// must #define NDEBUG before #including assert.h
#include <cassert>

#include <cstdlib>
#include <iostream>
#include <string>

//------------------------------------------------------------------------------
// constants
//------------------------------------------------------------------------------
constexpr int MAX_LETTERS = 20;		// array size
constexpr int ALPHABET_SIZE = 26;

//------------------------------------------------------------------------------
// local function prototypes
//------------------------------------------------------------------------------
void initApp();
void getLetters(char[], int);
void displayWords(char[], int);
void displayLetterCounts(char[], int);

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    initApp();

    // fill buffer with random letters
    char a[MAX_LETTERS];
    getLetters(a, MAX_LETTERS);

    // display the array as four-letter words
    displayWords(a, MAX_LETTERS);

    // count letter occurrences and display results
    displayLetterCounts(a, MAX_LETTERS);

    std::cout << '\n';
    std::cin.get();

    return 0;
}

//------------------------------------------------------------------------------
// app setup tasks
//------------------------------------------------------------------------------
void initApp() {
 
    // seed random number generator
    srand((unsigned int) time(0));

    std::cout << "\nAlphabet Soup!\n";
}

//------------------------------------------------------------------------------
// fill passed character array with random letters
//------------------------------------------------------------------------------
void getLetters(char letters[], int size) {
   
    // #TODO test assert
    assert(b != nullptr);
    assert(ALPHABET_SIZE <= 26);

    for (int i = 0; i < size; ++i) {

        // get random number [0-25], convert to lowercase letter
        int x = rand() % ALPHABET_SIZE + 'a';

        letters[i] = (char)x;
    }
}

//------------------------------------------------------------------------------
// display passed letters array as four-letter words
//------------------------------------------------------------------------------
void displayWords(char letters[], int size) {

    std::cout << '\n';

    for (int i = 0, index = 0; i < size; ++i) {
        std::cout << letters[i];

        if (++index % 4 == 0) {
            std::cout << " ";
        }
    }

    std::cout << '\n';
}

//------------------------------------------------------------------------------
// count letter occurrences in an array of char
//------------------------------------------------------------------------------
void displayLetterCounts(char letters[], int size) {
    int counts[ALPHABET_SIZE] { 0 };

    // store letter counts
    for (int i = 0; i < size; ++i) {
        counts[letters[i] - 'a']++;
    }

    std::cout << '\n';

    // display nonzero counts
    for (int i = 0; i < ALPHABET_SIZE; ++i) {

        int count;
        if ((count = counts[i])) {
            std::cout << "there are " << count << " "
                << (char)(i + 'a') << "'s" << '\n';
        }
    }

    // another (slower) way to count

    //for (char letter = 'a'; letter <= 'z'; letter++) {
    //	
    //	int count = 0;

    //	for (int k = 0; k < MAX_LETTERS; k++) {
    //		if (letters[k] == letter) {
    //			count++;
    //		}
    //	}
    //	std::cout << "there are " << count << " "
    //		<< letter << "'s" << '\n';
    //}
}
