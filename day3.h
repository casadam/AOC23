#ifndef AOC23_DAY3_H
#define AOC23_DAY3_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

typedef struct Num {
    int number;
    int len;
    int x;
    int y;
    struct Num *link;
} Num;

typedef struct Symbol {
    char sym;
    int x;
    int y;
    struct Symbol *link;
} Symbol;

void ADJACENCY();

#endif