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

// Global movie collection
Movie movies[MAX_MOVIES];
int movieCount = 0;

// Function Prototypes
void showMenu();
void addMovie();
void viewAllMovies();
void searchMovie();
void sortMoviesByRating();
void saveMoviesToFile();
void loadMoviesFromFile();
void getCurrentDate(char *buffer, size_t size);
