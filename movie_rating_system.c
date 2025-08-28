#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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


void showMenu() {
    printf("\n=== Personal Movie Rating System ===\n");
    printf("1. Add Movie\n");
    printf("2. View All Movies\n");
    printf("3. Search Movie\n");
    printf("4. Sort by Rating\n");
    printf("5. Save & Exit\n");
}

void addMovie() {
    printf("Logic not written yet.\n");
}

void viewAllMovies() {
    printf("Logic not written yet.\n");
}

void searchMovie() {
    printf("Logic not written yet.\n");
}

void sortMoviesByRating() {
    printf("Logic not written yet.\n");
}

void saveMoviesToFile() {
    printf("Logic not written yet.\n");
}

void loadMoviesFromFile() {
    printf("Logic not written yet.\n");
}

