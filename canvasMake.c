#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// list of characters to choose from in pickChar function
char listOfCharacters[] = {'*', '#', '^', '0', '$', 'K', '@', '!', '%', ';'};
int listOfCharLength = 10;



// returns random character from a list of characters
char pickChar(char listOfCharacters[], int listOfCharLength){
    char chosenChar; // creates the variable for the random character

    srand(time(NULL)); // chooses the seed for the random number

    int randomNum = rand() % listOfCharLength; // chooses a random number between 0 and 9 (length of the list)

    chosenChar = listOfCharacters[randomNum]; // assigns the random character using the random number

    return chosenChar; // returns the random character

}





