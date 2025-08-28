#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_MOVIES 100

typedef struct {
    char title[100];
    char genre[50];
    int rating;
    int releaseYear;
    char watchedDate[11];
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

int main() {
    loadMoviesFromFile();

    int choice;

    do {
        showMenu();
        printf("Enter your choice: ");
        if(scanf("%d", &choice) != 1) {
            printf("Invalid input! Exiting. \n");
            break;
        }

        getchar();

        switch (choice)
        {
        case 1: addMovie(); break;
        case 2: viewAllMovies(); break;
        case 3: searchMovie(); break;
        case 4: sortMoviesByRating(); break;
        case 5: saveMoviesToFile(); break;       
        default: printf("Invalid Choice!\n"); break;
        }

    } while(choice != 5);

    return 0;
}

void showMenu() {
    printf("\n=== Personal Movie Rating System ===\n");
    printf("1. Add Movie\n");
    printf("2. View All Movies\n");
    printf("3. Search Movie\n");
    printf("4. Sort by Rating\n");
    printf("5. Save & Exit\n");
}

void addMovie() {
    if(movieCount >= MAX_MOVIES){
        printf("Movie list is full!\n");
        return;    
    }

    Movie m;

    printf("Enter Title:");
    fgets(m.title, sizeof(m.title), stdin);
    m.title[strcspn(m.title, "\n")] = '\0';

    printf("Enter Genre: ");
    fgets(m.genre, sizeof(m.genre), stdin);
    m.genre[strcspn(m.genre, "\n")] = '\0';

    do {
        printf("Enter Rating (1-10): ");
        scanf("%d", &m.rating);
        getchar();
    } while(m.rating < 1 || m.rating > 10);

    printf("Enter Release Year: ");
    scanf("%d", &m.releaseYear);
    getchar();

    getCurrentDate(m.watchedDate, sizeof(m.watchedDate));

    movies[movieCount++] = m;
    printf("Movie added successfully!\n");

}

void viewAllMovies() {
    printf("\nLogic not written yet.\n");
}

void searchMovie() {
    printf("\nLogic not written yet.\n");
}

void sortMoviesByRating() {
    printf("\nLogic not written yet.\n");
}

void saveMoviesToFile() {
    FILE  *fp = fopen("movies.txt", "a");
    if(!fp) {
        perror("Error saving file");
        return;
    }

    for(int i = 0; i < movieCount; i++){
        fprintf(fp, "%s;%s;%d;%d;%s\n",
        movies[i].title,
        movies[i].genre,
        movies[i].rating,
        movies[i].releaseYear,
        movies[i].watchedDate
    );
    }
    fclose(fp);
    printf("Movies saved to file.\n");
}

void loadMoviesFromFile() {
    printf("\nLogic not written yet.\n");
}

void getCurrentDate(char *buffer, size_t size) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    snprintf(buffer, size, "%02d-%02d-%04d",
             tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
}
