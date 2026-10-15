#ifndef CANVASMAKE_H
#define CANVASMAKE_H

char **createCanvas(int argc, char **argv);
void printCanvas(char **canvas, int height, int width);
void freeCanvas(char **canvas, int height);

#endif