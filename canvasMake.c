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


// function to malloc out space for the array given user's command line input
char **createCanvas(int argc, char **argv){ // takes user's command line inputs as a parameter
    if (argc != 3){ // checks to see if the user passes 2 arguments
        printf("You need to pass two arguments");
        return NULL;
    } 

    int argumentNumOne = atoi(argv[1]); // height of the canvas
    int argumentNumTwo = atoi(argv[2]); // width of canvas

    char **canvas = malloc(sizeof(char *) * argumentNumOne); // mallocs the size of a character pointer
    for (int i = 0; i < argumentNumOne; i++){ // mallocs a char for each space in the other malloc
        canvas[i] = malloc(sizeof(char) * argumentNumTwo);
    }

    return canvas; // returns the canvas
}


int main(){
    genRandomChar(chanceOfCharacter, listOfCharacters, listOfCharLength);
    
    return 0;
}