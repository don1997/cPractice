#ifndef FUNCTIONS_H
#define FUNCTIONS_H


#include<stdio.h>
#include<stdlib.h>

void displayBoard(char (*)[3]);

int SEARCH(char (*)[3],int);

void UPDATE(char (*)[3],int,int);

int checkWin(char(*)[3]);

int randNUM();

void compMove(char(*)[3]);
#endif
