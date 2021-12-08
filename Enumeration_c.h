#ifndef ENUMERATION_C_ENUMERATION_C_H
#define ENUMERATION_C_ENUMERATION_C_H

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <math.h>
#define N 80

FILE *enumeration;
FILE *enumeration_out;

/*
 * Read from console or file
 * return 1 - from console
 * return 0 - from file
*/
int console_or_file();

//In file skip to the place where reading starts (all 6 tasks in one file and its need to read right task)
void skip_to(FILE *fptr, const char *string);


//Structures and functions for Task 1

//a

//structure enum for days
enum DayOfWeek_c {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

/* Input day
 * @param day - name of the day
 * result - enumerator value of day */
int day_2_int(char *day);
/* Input enumerator value
 * @param i - enumerator value
 * result - name of day that corresponds to this number */
const char * int_2_day(int i);

//b

//structure enum for months
enum MonthOfYear_c {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

/* Input month
 * @param month - name of the month
 * result - enumerator value of month */
int month_2_int(char *month);
/* Input enumerator value
 * @param i - enumerator value
 * result - name of month that corresponds to this number */
const char * int_2_month(int i);

//c

//structure enum for colors
enum SpectrumColor_c {
    Red = 1,
    Orange,
    Yellow,
    Green,
    Cyan,
    Blue,
    Violet
};

/* Input color
 * @param color - name of the color
 * result - enumerator value of color */
int color_2_int(char *color);
/* Input enumerator value
 * @param i - enumerator value
 * result - name of color that corresponds to this number */
const char * int_2_color(int i);

//d

//structure enum for chess pieces
enum ChessPieces_c {
    King = 1,
    Queen,
    Rook,
    Bishop,
    Knight,
    Pawn
};

/* Input chess piece
 * @param chess piece - name of the chess piece
 * result - enumerator value of chess piece */
int piece_2_int(char *piece);
/* Input enumerator value
 * @param i - enumerator value
 * result - name of chess piece that corresponds to this number */
const char * int_2_piece(int i);
//Function to test task 1
void task1_c(const char *filename_c, const char *filename_out_c, int is_console);


//Structures and functions for Task 2

//structure enum for Types of card
enum Types_c {
    Spades = 1,
    Clubs,
    Diamonds,
    Hearts
};

//structure enum for Ranks of card
enum Ranks_c {
    Card_Seven = 1,
    Card_Eight,
    Card_Nine,
    Card_Ten,
    Card_Jack,
    Card_Queen,
    Card_King,
    Card_Ace
};

//structure Card
typedef struct {
    enum Ranks_c rank;
    enum Types_c type;
} Card_c;

/*Print card
 * result - rank and type of card*/
void print_card(Card_c a);
/* Input rank
 * @param rank - rank of card
 * result - int: enumerator value */
int rank_2_int(char *rank);
/* Input enumerator value
 * @param i - enumerator value
 * result - name of rank that corresponds to this number */
const char * int_2_rank(int i);
/* Input type
 * @param type - type of card
 * result - int: enumerator value */
int type_2_int(char *type);
/* Input enumerator value
 * @param i - enumerator value
 * result - name of type that corresponds to this number */
const char * int_2_type(int i);
//Does the first card beat the second card
const char *beat(Card_c x, Card_c y, enum Types_c z);
//Function to test task 2
void task2_c(const char *filename, const char *filename_out, int is_console);


//Structures and functions for Task 3

//structure enum for Unit Of Length
enum UnitOfLength_c {
    Millimeter,
    Centimeter,
    Decimeter,
    Meter,
    Kilometer
};

/* Input unit of length
 * @ param unit
 * result int: enumerator value */
int input_unit_of_length(char *unit);
//This length in meters
double length_in_meters(double length, enum UnitOfLength_c unit);
//Function to test task 3
void task3_c(const char *filename, const char *filename_out, int is_console);


//Structures and functions for Task 4

//structure enum for Case
enum Case_c {
    Denominative,
    Genitive,
    Dative,
    Accusative,
    Ablative,
    Local,
    Vocative
};

/* Input case
 * @param vidminok - case
 * result - int: enumerator value */
int case_2_int(char* vidminok);
//Declension of words (програмування, мова, комп'ютер)
const char *declension_of_words(int i);
//Function to test task 4
void task4_c(const char *filename, const char *filename_out, int is_console);


//Structures and functions for Task 5

//structure enum for Vowels
enum Vowels_c {
    a = 1,
    e,
    i,
    o,
    u,
    y
};

/* Input vowel
 * @param vowel - vowel
 * result - int: enumerator value */
int input(char vowel);
//Count syllables in sentence
int syllables(char* sentence);
//Function to test task 5
void task5_c(const char *filename, const char *filename_out, int is_console);


//Structures and functions for Task 6

//structure enum for Course
enum Course_c {
    North,
    East,
    South,
    West
};

//structure enum for Order
enum Order_c {
    Forward,
    Back,
    Left,
    Right
};

/*Input course
 * @param course - course
 * result - int: enumerator value */
enum Course_c input_course(char *course);
/* Input enumerator value
 * @param course - enumerator value
 * result - name of type that corresponds to this number */
const char * int_2_course(enum Course_c course);
/*Input order
 * @param order - order
 * result - int: enumerator value */
enum Order_c input_order(char *order);
//Find final order of the ship
enum Course_c run_order(enum Course_c current_course, enum Order_c order);
//Function to test task 6
void task6_c(const char *filename, const char *filename_out, int is_console);


#endif //ENUMERATION_C_ENUMERATION_C_H
