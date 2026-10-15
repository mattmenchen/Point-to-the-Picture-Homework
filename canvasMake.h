// Matt Menchen
// this file declares the functions called in main.c and makes sure they aren't defined already


#ifndef CANVASMAKE_H
#define CANVASMAKE_H

char **createCanvas(int argc, char **argv);
void printCanvas(char **canvas, int height, int width);
void freeCanvas(char **canvas, int height);

#endif