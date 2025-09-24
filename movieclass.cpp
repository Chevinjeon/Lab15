// COMSC-210 | Lab 15 | Chevin Jeon
// IDE used: VSC
// Date: 2025-09-23

/**
 * ---------------------------------------------------------
 * Program: Movie Class Demonstration
 * Author: Chevin Jeon
 *
 * Description:
 *   Defines a Movie class with private data members:
 *     - title (string)
 *     - yearReleased (int)
 *     - screenWriter (string)
 *
 *   Includes getters, setters, and a print() method that
 *   neatly outputs movie details.
 *
 *   In main():
 *     - Reads records from input.txt
 *     - Each record has 3 lines: title, year, screenwriter
 *     - Stores them in a std::vector<Movie>
 *     - Prints all movies in formatted style
 * ---------------------------------------------------------
 */


#include <iostream>
#include <fstream>   // file I/O
#include <string>
#include <vector>    // container for movies
#include <stdexcept>

class Movie {
private:
    std::string title;
    int yearReleased;
    std::string screenWriter;

public:
    // Default constructor
    Movie() : title(""), yearReleased(0), screenWriter("") {}

    // Parameterized constructor
    Movie(const std::string &t, int year, const std::string &writer)
        : title(t), yearReleased(year), screenWriter(writer) {}

    // ---- Setters ----
    void setTitle(const std::string &t) { title = t; }
    void setYearReleased(int y) { yearReleased = y; }
    void setScreenWriter(const std::string &w) { screenWriter = w; }

    // ---- Getters ----
    std::string getTitle() const { return title; }
    int getYearReleased() const { return yearReleased; }
    std::string getScreenWriter() const { return screenWriter; }

    // ---- Print method ----
    void print() const {
        std::cout << "Movie: " << screenWriter << std::endl;
        std::cout << "    Year released: " << yearReleased << std::endl;
        std::cout << "    Screenwriter: " << title << std::endl;
        std::cout << std::endl;
    }
};
