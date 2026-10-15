// Matt Menchen
// this program calls the functions that make the 2d array, that then print the filled array, then frees the array
// also has checks to make sure the user inputs the correct amount of arguments and the canvas has the memory allocated


// main program to call the canvas make function, 
// print canvas function and the free canvas function
#include "canvasMake.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
// imports time for the srand(time(NULL)); so it isn't called many times
// while another function is using it.

int main(int argc, char **argv){
    srand(time(NULL)); // chooses the seed for the random number

    if (argc != 3){ // checks to see if the user passes 2 arguments
        printf("You need to pass two arguments");
        return 1;
    } 

    int height = atoi(argv[1]);
    int width = atoi(argv[2]);
    char **canvas = createCanvas(argc, argv);

    if (canvas == NULL){ // makes sure malloc worked
        return 1;
    }

    printCanvas(canvas, height, width);
    freeCanvas(canvas, height);
    
    return 0;
}