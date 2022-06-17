#pragma once
#include "Header.h"

typedef struct Piece {
	enum pion pion; 
    enum Color couleur; 
};

enum pion {
    NONE = 0,
    PAWN,
    ROOK,
    BISHOP,
    KNIGHT,
    QUEEN,
    KING,
};

enum Color {
    BLACK = 1,
    WHITE,
};

#define ANSI_COLOR_BLACK "\u001b[30;1m"
#define ANSI_COLOR_RESET "\x1b[0m"
#define ANSI_COLOR_WHITE "\x1b[37m"

//prototype 
void GenererPlateaux(int a_valeur);
void Simulation(int a_valeur);