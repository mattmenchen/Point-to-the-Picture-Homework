#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// list of characters to choose from in pickChar function
char listOfCharacters[] = {'*', '#', '^', '0', '$', 'K', '@', '!', '%', ';'};
// length of the character list
int listOfCharLength = 10;
// the chance that a character will be returned instead of a space
double chanceOfCharacter = 0.2;


// returns random character from a list of characters
char pickChar(char listOfCharacters[], int listOfCharLength){
    char chosenChar; // creates the variable for the random character

    srand(time(NULL)); // chooses the seed for the random number

    int randomNum = rand() % listOfCharLength; // chooses a random number between 0 and 9 (length of the list)

    chosenChar = listOfCharacters[randomNum]; // assigns the random character using the random number

    return chosenChar; // returns the random character

}


// function to decide if a character or a space is returned
char genRandomChar(double chanceOfCharacter, char listOfCharacters[], int listOfCharLength){
    char spaceOrChar; // creates the variable that is either the random character or the space

    int chance = rand() % 10; // creates a variable called chance which is a random number between 0 and 9

    if ((chance / (double)(10.0)) < chanceOfCharacter){ // decides if chance/10 is less than 0.2
        spaceOrChar = pickChar(listOfCharacters, listOfCharLength); // calls pickChar if true
    } else {
        spaceOrChar = ' '; // chooses space if not true
    }

    return spaceOrChar; // returns the space or the character
}

int main(){
    genRandomChar(chanceOfCharacter, listOfCharacters, listOfCharLength);
    return 0;
}