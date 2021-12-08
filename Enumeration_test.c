/* File Enumeration_test.c
Realization of tests for enum structure functions
Done by Kostiuchenko Maryna (group computer mathematics 2)
Date 08.12.2021*/

#include "Enumeration_c.h"

int main() {
    int number_of_task = 0;
    char *filename = "C:\\Users\\Maryna Kostiuchenko\\CLionProjects\\Enumeration_C\\cmake-build-debug\\enumeration_input.txt";
    char *filename_out = "C:\\Users\\Maryna Kostiuchenko\\CLionProjects\\Enumeration_C\\cmake-build-debug\\enumeration_output.txt";

    //Choose task for the test
    printf("Enter task to test (1-6):");
    fflush(stdout);
    scanf("%i", &number_of_task);
    int is_console = console_or_file();

    // Test Task 1
    if (number_of_task == 1)
        task1_c(filename, filename_out, is_console);


    // Test Task 2
    else if (number_of_task == 2)
        task2_c(filename, filename_out, is_console);


    // Test Task 3
    else if (number_of_task == 3)
        task3_c(filename, filename_out, is_console);


    // Test Task 4
    else if (number_of_task == 4)
        task4_c(filename, filename_out, is_console);


    // Test Task 5
    else if (number_of_task == 5)
        task5_c(filename, filename_out, is_console);


    // Test Task 6
    else if (number_of_task == 6)
        task6_c(filename, filename_out, is_console);

    return 0;
}
