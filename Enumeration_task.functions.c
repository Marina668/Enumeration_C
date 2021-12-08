/* File Enumeration_task.functions.c
Realization of input and output functions
Done by Kostiuchenko Maryna (group computer mathematics 2)
Date 08.12.2021
Implementations of input and output functions for task 1-6
*/

#include "Enumeration_c.h"

void task1_c(const char *filename, const char *filename_out, int is_console) {
    int number_of_day, number_of_month, number_of_color, number_of_piece;
    char day[N], month[N], color[N], chess_piece[N];
    char* end;
    char number_temp[256];

    if (is_console) {
        //Input from console

        //Input number of day
        //if enter not type int - try again
        while(1)
        {
            printf("Enter number of day:");
            scanf("%s",number_temp);
            number_of_day = strtod(number_temp, &end);
            if (strcmp(end, "") != 0)             //If there is an error the value of *end will be nonzero
                printf("try again\n");
            else
                break;
        }

        //Input day
        printf("Enter day:");
        scanf("%s", day);

        //Input number of month
        //if enter not type int - try again
        while(1)
        {
            printf("Enter number of month:");
            scanf("%s",number_temp);
            number_of_month = strtod(number_temp, &end);
            if (strcmp(end, "") != 0)             //If there is an error the value of *end will be nonzero
                printf("try again\n");
            else
                break;
        }

        //Input month
        printf("Enter month:");
        scanf("%s", month);

        //Input number of color
        //if enter not type int - try again
        while(1)
        {
            printf("Enter number of color:");
            scanf("%s",number_temp);
            number_of_color = strtod(number_temp, &end);
            if (strcmp(end, "") != 0)             //If there is an error the value of *end will be nonzero
                printf("try again\n");
            else
                break;
        }

        //Input color
        printf("Enter color:");
        scanf("%s", color);

        //Input number of chess piece
        //if enter not type int - try again
        while(1)
        {
            printf("Enter number of chess piece:");
            scanf("%s",number_temp);
            number_of_piece = strtod(number_temp, &end);
            if (strcmp(end, "") != 0)             //If there is an error the value of *end will be nonzero
                printf("try again\n");
            else
                break;
        }

        //Input chess piece
        printf("Enter chess piece:");
        scanf("%s", chess_piece);
    }

    else {
        //Read from file
        enumeration = fopen(filename, "r");
        if(enumeration == NULL){
            printf("Can not open file '%s'", filename);
        }
        skip_to(enumeration, "1.");
        fscanf(enumeration, "%i", &number_of_day);
        fscanf(enumeration, "%s", day);
        fscanf(enumeration, "%i", &number_of_month);
        fscanf(enumeration, "%s", month);
        fscanf(enumeration, "%i", &number_of_color);
        fscanf(enumeration, "%s", color);
        fscanf(enumeration, "%i", &number_of_piece);
        fscanf(enumeration, "%s", chess_piece);
        fclose(enumeration);
    }

    //Print to console
    //Print day and number of day
    printf("Number %i corresponds to the day %s\n", number_of_day, int_2_day(number_of_day));
    printf("Day %s corresponds to the number %i\n", day, day_2_int(day));

    //Print month and number of month
    printf("Number %i corresponds to the month %s\n", number_of_month, int_2_month(number_of_month));
    printf("Month %s corresponds to the number %i\n",month, month_2_int(month));

    //Print color and number of color
    printf("Number %i corresponds to the color %s\n", number_of_color, int_2_color(number_of_color));
    printf("Color %s corresponds to the number %i\n", color, color_2_int(color));

    //Print chess piece and number of chess piece
    printf("Number %i corresponds to the chess piece %s\n", number_of_piece, int_2_piece(number_of_piece));
    printf("Chess piece %s corresponds to the number %i\n", chess_piece, piece_2_int(chess_piece));


    //Write to file
    enumeration_out = fopen(filename_out, "w");
    fprintf(enumeration_out, "1.\n");
    fprintf(enumeration_out, "Number %i corresponds to the day %s\n", number_of_day, int_2_day(number_of_day));
    fprintf(enumeration_out, "Day %s corresponds to the number %i\n", day, day_2_int(day));
    fprintf(enumeration_out, "Number %i corresponds to the month %s\n", number_of_month, int_2_month(number_of_month));
    fprintf(enumeration_out, "Month %s corresponds to the number %i\n",month, month_2_int(month));
    fprintf(enumeration_out, "Number %i corresponds to the color %s\n", number_of_color, int_2_color(number_of_color));
    fprintf(enumeration_out, "Color %s corresponds to the number %i\n", color, color_2_int(color));
    fprintf(enumeration_out, "Number %i corresponds to the chess piece %s\n", number_of_piece, int_2_piece(number_of_piece));
    fprintf(enumeration_out, "Chess piece %s corresponds to the number %i\n", chess_piece, piece_2_int(chess_piece));
    fclose(enumeration_out);
}

void task2_c(const char *filename, const char *filename_out, int is_console) {
    Card_c cards[N];
    char rank[N], type[N], trump[N];

    if (is_console) {
        //Input from console

        //Input two cards
        //@param rank - rank of card
        //@param type - type of card
        for (int i = 0; i < 2; i++) {
            printf("Enter card: ");
            scanf("%s %s", rank, type);
            cards[i].rank = rank_2_int(rank);
            cards[i].type = type_2_int(type);
        }

        //Input trump
        printf("Enter trump: ");
        scanf("%s", trump);

    } else {
        //Read from file
        enumeration = fopen(filename, "r");
        if(enumeration == NULL){
            printf("Can not open file '%s'", filename);
        }
        skip_to(enumeration, "2.");
        for (int i = 0; i < 2; i++) {
            fscanf(enumeration, "%s %s", rank, type);
            cards[i].rank = rank_2_int(rank);
            cards[i].type = type_2_int(type);
        }
        fscanf(enumeration, "%s", trump);
        fclose(enumeration);
    }

    //Print to console
    printf("Card x: ");
    print_card(cards[0]);
    printf("Card y: ");
    print_card(cards[1]);
    printf("Trump: %s\n", trump);
    printf("%s", beat(cards[0], cards[1], type_2_int(trump)));

    //Write to file
    enumeration_out = fopen(filename_out, "w");
    fprintf(enumeration_out, "2.\n");
    fprintf(enumeration_out, "%s", beat(cards[0], cards[1], type_2_int(trump)));
    fclose(enumeration_out);
}

void task3_c(const char *filename, const char *filename_out, int is_console) {
    double length = 0.0;
    char unit[N];
    char* end;
    char number_temp[256];

    if (is_console) {
        //Input from console

        //Input length
        //if enter not type int - try again
        while(1)
        {
            printf("Enter length: ");
            scanf("%s",number_temp);

            length = strtod(number_temp, &end);

            if (strcmp(end, "") != 0)             //If there is an error the value of *end will be nonzero
                printf("try again\n");
            else
                break;
        }

        //Input unit of length
        printf("Enter unit of length: ");
        scanf("%s", unit);
    }
    else {
        //Read from file
        enumeration = fopen(filename, "r");
        if(enumeration == NULL){
            printf("Can not open file '%s'", filename);
        }
        skip_to(enumeration, "3.");
        fscanf(enumeration, "%lf", &length);
        fscanf(enumeration, "%s", unit);
        fclose(enumeration);
    }

    //Print distance in meters to console
    double distance = length_in_meters(length, input_unit_of_length(unit));
    printf("Distance in meters: %0.3f", distance);

    //Write distance in meters to file
    enumeration_out = fopen(filename_out, "w");
    fprintf(enumeration_out, "3.\n");
    fprintf(enumeration_out, "Distance in meters: %0.3f", distance);
    fclose(enumeration_out);
}

void task4_c(const char *filename, const char *filename_out, int is_console) {
    SetConsoleOutputCP(CP_UTF8);
    char vidminok[N];

    if (is_console) {
        //Input case from console
        printf("Enter case: ");
        scanf("%s", vidminok);
    }
    else {
        //Read case from file
        enumeration = fopen(filename, "r");
        if(enumeration == NULL){
            printf("Can not open file '%s'", filename);
        }
        skip_to(enumeration, "4.");
        fscanf(enumeration, "%s", vidminok);
        fclose(enumeration);
    }

    //Print declaration of words to console
    printf("Case %s: %s", vidminok, declension_of_words(case_2_int(vidminok)));

    //Write declaration of words to file
    enumeration_out = fopen(filename_out, "w");
    fprintf(enumeration_out, "4.\n");
    fprintf(enumeration_out, "Case %s: %s", vidminok, declension_of_words(case_2_int(vidminok)));
    fclose(enumeration_out);
}

void task5_c(const char *filename, const char *filename_out, int is_console) {
    char str[N];

    if (is_console) {
        //Input sentence from comsole
        printf("Enter sentence: ");
        fgets(str, sizeof(str), stdin);
    }
    else {
        //Read sentence from file
        enumeration = fopen(filename, "r");
        if(enumeration == NULL) {
            printf("Can not open file '%s'", filename);
        }
        skip_to(enumeration, "5.");
        fgets(str, sizeof(str), enumeration);
        fclose(enumeration);
    }

    //Print number of syllables in a sentence to console
    printf("Number of syllables in a sentence: %d", syllables(str));

    //Write number of syllables in a sentence to file
    enumeration_out = fopen(filename_out, "w");
    fprintf(enumeration_out, "5.\n");
    fprintf(enumeration_out, "Number of syllables in a sentence: %d", syllables(str));
    fclose(enumeration_out);
}

void task6_c(const char *filename, const char *filename_out, int is_console) {
    char cur_course[N], order[N];
    enum Order_c orders_arr[N];
    int number_of_orders;
    char* end;
    char number_temp[256];

    double x_, y_, t, distance;
    double speed;
    double time[4];

    if (is_console) {
        //Input from console

        //Input current course
        printf("Enter current course:");
        scanf("%s", cur_course);

        //Input number of orders in array of orders
        printf("Enter number of orders:");
        scanf("%i", &number_of_orders);
        //Input orders and add them to array of orders
        for (int i = 0; i < number_of_orders; i++) {
            printf("Order:");
            scanf("%", order);
            orders_arr[i] = input_order(order);
        }

        //Input speed
        //if enter not type int - try again
        while(1)
        {
            printf("Enter speed:");
            scanf("%s",number_temp);
            speed = strtod(number_temp, &end);
            if (strcmp(end, "") != 0)             //If there is an error the value of *end will be nonzero
                printf("try again\n");
            else
                break;
        }

        //Input how many time ship go each course and put to array of times
        for (int i = 0; i < 4; i++) {
            printf("How many time ship go %s:", int_2_course(North + i));
            scanf("%lf", &t);
            time[i] = t;
        }
    }
    else {
        //Read from file
        enumeration = fopen(filename, "r");
        if(enumeration == NULL){
            printf("Can not open file '%s'", filename);
        }
        skip_to(enumeration, "6.");
        fscanf(enumeration, "%s", cur_course);
        number_of_orders = 5;
        for (int i = 0; i < number_of_orders; i++) {
            fscanf(enumeration, "%s", order);
            orders_arr[i] = input_order(order);
        }

        fscanf(enumeration, "%lf", &speed);
        for (int i = 0; i < 4; i++) {
            fscanf(enumeration, "%lf", &t);
            time[i] = t;
        }
        fclose(enumeration);
    }

    enum Course_c current_course = input_course(cur_course);
    for (int i = 0; i < number_of_orders; i++) {
        current_course = run_order(current_course, orders_arr[i]);
    }

    //Print final order to console
    printf("Final order: %s\n", int_2_course(current_course));

    //Find final coordinates of the ship
    x_ = time[East] * speed - time[West] * speed;
    y_ = time[North] * speed - time[South] * speed;
    //Find distance the ship sailed
    distance = sqrt(x_ * x_ + y_ * y_);

    //Print distance to console
    printf("Distance: %f", distance);

    //Write Final order and distance to file
    enumeration_out = fopen(filename_out, "w");
    fprintf(enumeration_out, "6.\n");
    fprintf(enumeration_out, "Final order: %s\n", int_2_course(current_course));
    fprintf(enumeration_out, "Distance: %f", distance);
    fclose(enumeration_out);
}