# Personal Movie Rating System (C)

A simple C program to manage your personal movie collection.  
You can add movies, view them, and save your collection to a file.

---

## Features
- Add a movie (title, genre, rating, release year, date watched)
- Save movies to a text file (`movies.txt`)
- Load movies from a file (not written yet)
- View, search, and sort (placeholders – logic to be written)

---

## How It Works
- Movies are stored in an array of **structs**.
- Uses **pointers** and **file operations** (`fopen`, `fprintf`, etc).
- Automatically fills **date watched** with today’s date using `<time.h>`.
- Basic **menu system** to choose actions.
