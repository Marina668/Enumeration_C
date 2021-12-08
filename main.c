#include "Enumeration_c.h"

int main() {
    int number_of_task = 0;
    char *filename = "C:\\Users\\Maryna Kostiuchenko\\CLionProjects\\Enumeration_C\\cmake-build-debug\\enumeration_input.txt";
    char *filename_out = "C:\\Users\\Maryna Kostiuchenko\\CLionProjects\\Enumeration_C\\cmake-build-debug\\enumeration_output.txt";

    printf("Enter task to test (1-6):");
    fflush(stdout);
    scanf("%i", &number_of_task);
    int is_console = console_or_file();

    // Task 1

    if (number_of_task == 1)
        task1_c(filename, filename_out, is_console);


    // Task 2

    else if (number_of_task == 2)
        task2_c(filename, filename_out, is_console);


    // Task 3

    else if (number_of_task == 3)
        task3_c(filename, filename_out, is_console);


    // Task 4

    else if (number_of_task == 4)
        task4_c(filename, filename_out, is_console);


    // Task 5

    else if (number_of_task == 5)
        task5_c(filename, filename_out, is_console);


    // Task 6

    else if (number_of_task == 6)
        task6_c(filename, filename_out, is_console);

    return 0;
}
