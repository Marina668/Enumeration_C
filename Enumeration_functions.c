/* File Enumeration_functions.c
Realization of structure functions
Done by Kostiuchenko Maryna (group computer mathematics 2)
Date 08.12.2021
Implementations of functions
*/

#include "Enumeration_c.h"

// Console or file

int console_or_file() {
    int console_or_file;
    printf("Console or file? (console - 1, file - 0):");
    fflush(stdout);
    scanf("%i%*c", &console_or_file);
    if (console_or_file) return 1;
    else return 0;
}


void skip_to(FILE *fptr, const char *string) {
    char c[1000];
    do {
        fscanf(fptr, "%[^\n]", c);
        fgetc(fptr);
    } while (strcmp(string, c) != 0);
}


// Task 1

// a

int day_2_int(char *day) {
    if (strcmp(day, "Monday") == 0)
        return Monday;
    else if (strcmp(day, "Tuesday") == 0)
        return Tuesday;
    else if (strcmp(day, "Wednesday") == 0)
        return Wednesday;
    else if (strcmp(day, "Thursday") == 0)
        return Thursday;
    else if (strcmp(day, "Friday") == 0)
        return Friday;
    else if (strcmp(day, "Saturday") == 0)
        return Saturday;
    else if (strcmp(day, "Sunday") == 0)
        return Sunday;
    else return -1;
}

const char *int_2_day(int i) {
    if (i > 7 || i < 1)
        printf("Incorrect number of day");
    else {
        enum DayOfWeek_c days = i;
        switch (days) {
            case Monday:
                return "Monday";
            case Tuesday:
                return "Tuesday";
            case Wednesday:
                return "Wednesday";
            case Thursday:
                return "Thursday";
            case Friday:
                return "Friday";
            case Saturday:
                return "Saturday";
            case Sunday:
                return "Sunday";
        }
    }
    return NULL;
}


// b

int month_2_int(char *month) {
    if (strcmp(month, "January") == 0)
        return January;
    else if (strcmp(month, "February") == 0)
        return February;
    else if (strcmp(month, "March") == 0)
        return March;
    else if (strcmp(month, "April") == 0)
        return April;
    else if (strcmp(month, "May") == 0)
        return May;
    else if (strcmp(month, "June") == 0)
        return June;
    else if (strcmp(month, "July") == 0)
        return July;
    else if (strcmp(month, "August") == 0)
        return August;
    else if (strcmp(month, "September") == 0)
        return September;
    else if (strcmp(month, "October") == 0)
        return October;
    else if (strcmp(month, "November") == 0)
        return November;
    else if (strcmp(month, "December") == 0)
        return December;
    else return -1;
}

const char *int_2_month(int i) {
    if (i > 12 || i < 1)
        return "Incorrect number of month";
    else {
        enum MonthOfYear_c month = i;
        switch (month) {
            case January:
                return "January";
            case February:
                return "February";
            case March:
                return "March";
            case April:
                return "April";
            case May:
                return "May";
            case June:
                return "June";
            case July:
                return "July";
            case August:
                return "August";
            case September:
                return "September";
            case October:
                return "October";
            case November:
                return "November";
            case December:
                return "December";
        }
    }
    return NULL;
}


// c

int color_2_int(char *color) {
    if (strcmp(color, "Red") == 0)
        return Red;
    else if (strcmp(color, "Orange") == 0)
        return Orange;
    else if (strcmp(color, "Yellow") == 0)
        return Yellow;
    else if (strcmp(color, "Green") == 0)
        return Green;
    else if (strcmp(color, "Cyan") == 0)
        return Cyan;
    else if (strcmp(color, "Blue") == 0)
        return Blue;
    else if (strcmp(color, "Violet") == 0)
        return Violet;
    else return -1;
}

const char *int_2_color(int i) {
    if (i > 7 || i < 1)
        return "Incorrect number of color";
    else {
        enum SpectrumColor_c colors = i;
        switch (colors) {
            case Red:
                return "Red";
            case Orange:
                return "Orange";
            case Yellow:
                return "Yellow";
            case Green:
                return "Green";
            case Cyan:
                return "Cyan";
            case Blue:
                return "Blue";
            case Violet:
                return "Violet";
        }
    }
}


// d

int piece_2_int(char *piece) {
    if (strcmp(piece, "King") == 0)
        return King;
    else if (strcmp(piece, "Queen") == 0)
        return Queen;
    else if (strcmp(piece, "Rook") == 0)
        return Rook;
    else if (strcmp(piece, "Bishop") == 0)
        return Bishop;
    else if (strcmp(piece, "Knight") == 0)
        return Knight;
    else if (strcmp(piece, "Pawn") == 0)
        return Pawn;
    else return -1;
}

const char *int_2_piece(int i) {
    if (i > 6 || i < 1)
        return "Incorrect number of piece";
    else {
        enum ChessPieces_c pieces = i;
        switch (pieces) {
            case King:
                return "King";
            case Queen:
                return "Queen";
            case Rook:
                return "Rook";
            case Bishop:
                return "Bishop";
            case Knight:
                return "Knight";
            case Pawn:
                return "Pawn";
        }
    }
}


// Task 2

int rank_2_int(char *rank) {
    if (strcmp(rank, "Seven") == 0)
        return Card_Seven;
    else if (strcmp(rank, "Eight") == 0)
        return Card_Eight;
    else if (strcmp(rank, "Nine") == 0)
        return Card_Nine;
    else if (strcmp(rank, "Ten") == 0)
        return Card_Ten;
    else if (strcmp(rank, "Jack") == 0)
        return Card_Jack;
    else if (strcmp(rank, "Queen") == 0)
        return Card_Queen;
    else if (strcmp(rank, "King") == 0)
        return Card_King;
    else if (strcmp(rank, "Ace") == 0)
        return Card_Ace;
    else {
        printf("Incorrect rank of card\n");
        return 0;
    }
}

const char *int_2_rank(int i) {
    if (i > 8 || i < 1)
        return "Incorrect number of rank";
    else {
        enum Ranks_c ranks = i;
        switch (ranks) {
            case Card_Seven:
                return "Seven";
            case Card_Eight:
                return "Eight";
            case Card_Nine:
                return "Nine";
            case Card_Ten:
                return "Ten";
            case Card_Jack:
                return "Jack";
            case Card_Queen:
                return "Queen";
            case Card_King:
                return "King";
            case Card_Ace:
                return "Ace";
        }
    }
}

int type_2_int(char *type) {
    if (strcmp(type, "Spades") == 0)
        return Spades;
    else if (strcmp(type, "Clubs") == 0)
        return Clubs;
    else if (strcmp(type, "Diamonds") == 0)
        return Diamonds;
    else if (strcmp(type, "Hearts") == 0)
        return Hearts;
    else {
        printf("Incorrect type of card\n");
        return 0;
    }
}

const char *int_2_type(int i) {
    if (i > 4 || i < 1)
        return "Incorrect number of type";
    else {
        enum Types_c types = i;
        switch (types) {
            case Spades:
                return "Spades";
            case Clubs:
                return "Clubs";
            case Diamonds:
                return "Diamonds";
            case Hearts:
                return "Hearts";
        }
    }
}

void print_card(Card_c a) {
    printf("%s %s\n", int_2_rank(a.rank), int_2_type(a.type));
}

const char * beat(Card_c x, Card_c y, enum Types_c z) {
    if ((x.type == z && y.type != z) || (x.type == y.type && x.rank > y.rank)) {
        return "x beat y";
    }
    else
        return "x not beat y";
}


// Task 3

int input_unit_of_length(char *unit) {
    if (strcmp(unit, "Millimeter") == 0)
        return Millimeter;
    else if (strcmp(unit, "Centimeter") == 0)
        return Centimeter;
    else if (strcmp(unit, "Meter") == 0)
        return Meter;
    else if (strcmp(unit, "Decimeter") == 0)
        return Decimeter;
    else if (strcmp(unit, "Kilometer") == 0)
        return Kilometer;
    else {
        printf("Incorrect unit of length\n");
        return 0;
    }
}

double length_in_meters(double length, enum UnitOfLength_c unit) {
    if (unit == Millimeter) {
        return length / 1000;
    } else if (unit == Centimeter) {
        return length / 100;
    } else if (unit == Decimeter) {
        return length / 10;
    } else if (unit == Meter) {
        return length;
    } else if (unit == Kilometer) {
        return length * 1000;
    } else {
        printf("Incorrect\n");
        return 0;
    }
}


// Task 4

int case_2_int(char *vidminok) {
    if (strcmp(vidminok, "Denominative") == 0)
        return Denominative;
    else if (strcmp(vidminok, "Genitive") == 0)
        return Genitive;
    else if (strcmp(vidminok, "Dative") == 0)
        return Dative;
    else if (strcmp(vidminok, "Accusative") == 0)
        return Accusative;
    else if (strcmp(vidminok, "Ablative") == 0)
        return Ablative;
    else if (strcmp(vidminok, "Local") == 0)
        return Local;
    else if (strcmp(vidminok, "Vocative") == 0)
        return Vocative;
    else {
        printf("Incorrect case\n");
        return -1;
    }
}

const char * declension_of_words(int i) {
    if (i > 6 || i < 0)
        return"Incorrect number of case";
    else {
        enum Case_c cases = i;
        switch (cases) {
            case Denominative:
                return "програмування, мова, комп'ютер";
            case Genitive:
                return "програмування, мови, комп'ютера";
            case Dative:
                return "програмуванню, мові, комп'ютерові/комп'ютеру";
            case Accusative:
                return "програмування, мову, комп'ютер";
            case Ablative:
                return "програмуванням, мовою, комп'ютером";
            case Local:
                return "на/у програмуванні, мові, комп'ютері";
            case Vocative:
                return "програмування, мово, комп'ютере";
        }
    }
}


// Task 5

int input(char vowel) {
    if (vowel == 'a')
        return a;
    else if (vowel == 'e')
        return e;
    else if (vowel == 'i')
        return i;
    else if (vowel == 'o')
        return o;
    else if (vowel == 'u')
        return u;
    else if (vowel == 'y')
        return y;
    else return 0;
}

int syllables(char *sentence) {
    int count = 0;
    int str_length = strlen(sentence);
    for (int j = 0; j < str_length; j++) {
        if (input(sentence[j]))
            count++;
    }
    return count;
}


// Task 6

enum Course_c input_course(char *course) {
    if (strcmp(course, "North") == 0)
        return North;
    else if (strcmp(course, "East") == 0)
        return East;
    else if (strcmp(course, "South") == 0)
        return South;
    else if (strcmp(course, "West") == 0)
        return West;
    else return -1;
}

const char * int_2_course(enum Course_c course) {
    if (course == North)
        return "North";
    else if (course == East)
        return "East";
    else if (course == South)
        return "South";
    else if (course == West)
        return "West";
    else return "Incorrect course";
}

enum Order_c input_order(char *order) {
    if (strcmp(order, "Forward") == 0)
        return Forward;
    else if (strcmp(order, "Back") == 0)
        return Back;
    else if (strcmp(order, "Left") == 0)
        return Left;
    else if (strcmp(order, "Right") == 0)
        return Right;
    else return -1;
}

enum Course_c run_order(enum Course_c current_course, enum Order_c order) {
    if (order == Left) {
        if (current_course == North)
            return West;
        else return current_course - 1;
    } else if (order == Right) {
        if (current_course == West)
            return North;
        else return current_course + 1;
    } else return current_course;
}