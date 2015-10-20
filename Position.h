#pragma once
#ifndef _POSITION_H
#define _POSITION_H

void SetAttr(int a);

void SetPos(int x, int y);

void SetCls();

void SetScroll(int xTO, int yTO, int lR, int tR, int rR, int bR);

int GetPosX();

int GetPosY();

int GetSizeX();

int GetSizeY();

int GetAttr();

#endif