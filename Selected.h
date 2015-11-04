#pragma once
#ifndef _SELECTED_H
#define _SELECTED_H

void movementSelectedRight(int x, int y, int totalX, int cell);

void movementSelectedLeft(int x, int y, int cell);

void movementSelectedUp(int x, int y);

void movementSelectedDown(int x, int y, int totalY);

int checkArrayX(int x, int cell);

int checkArrayY(int y);

int uncheckArrayX(int x, int cell);

int uncheckArrayY(int y);

void switchGems(int x, int y, int** arrayCell, int cell);

void movementSelected(int x, int y, int totalX, int totalY, int** cell);

void movementSelectedGem(int numberCell, int numberLines, int cell, int** arrayCell);

#endif