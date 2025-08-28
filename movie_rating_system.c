#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MOVIES 100

typedef struct {
    char title[100];
    char genre[50];
    int rating;
    int releasedYear;
    char watchedDate[10];
} Movie;