#ifndef AOC_DAY5_H
#define AOC_DAY5_H

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

typedef struct Map {
    unsigned long int nums[3];
    struct Map *link;
} Map;

typedef struct Node {
    unsigned long int num;
    bool modified;
    struct Node *link;
} Node;

void SEEDS();

#endif
