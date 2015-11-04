#pragma once
#ifndef _MOVEMENT_H
#define _MOVEMENT_H

void movementRight(int numberCell, int cell);

void movementLeft(int cell);

void movementUp();

void movementDown(int numberLines);

void movement(int numberCell, int numberLines, int cell, int** arrayCell);

#endif