// Version 1

// This line  `#define _CRT_SECURE_NO_WARNINGS` is to disable certain warnings related to standard library functions in Windows.
#define _CRT_SECURE_NO_WARNINGS

// Defining the size of the buffer to be used for storing the input string.
#define BUFFER_SIZE 80

// Including the header file `converting.h`, which likely contains function prototypes needed for the `converting` function.
#include "converting.h"

// Commenting indicating the relation of the `converting` function to the VI (Version 1) of the code.
// VI

// Defining the function `converting`, which takes no arguments and returns nothing (`void`).
void converting(void) {
    // Printing a message indicating the start of the demonstration for converting strings to integers.
    printf("*** Start of Converting Strings to int Demo ***\n");

    // Declaring an array of characters named `intString` with a size defined by the macro `BUFFER_SIZE`.
    char intString[BUFFER_SIZE];

    // Declaring an integer variable `intNumber` which will hold the converted integer value.
    int intNumber;

    // Starts a do-while loop. The loop will execute at least once and then continue to execute as long as the condition in the `while` statement is true.
    do {
        // Prompting the user to type an integer numeric string.
        printf("Type an int numeric string (q - to quit):\n"); 

        // Reading the input string from the standard input and store it in `intString`.
        fgets(intString, BUFFER_SIZE, stdin);

        // Removing the newline character from the end of the input string.
        intString[strlen(intString) - 1] = '\0';

        // Converting the string `intString` to an integer using the `atoi` function and store the result in `intNumber`.
        if (strcmp(intString, "q") != 0) {
            intNumber = atoi(intString);
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intString, "q") != 0);

    // Printing a message indicating the end of the demonstration for converting strings to integers.
    printf("*** End of Converting Strings to int Demo ***\n\n");



/* Version 2 */
    printf("*** Start of Converting Strings to double Demo ***\n"); // Printing a start message

    char doubleString[BUFFER_SIZE]; // Declaring a character array to store the input string
    double doubleNumber; // Declaring a variable to store the converted double number

    do { // Starting a do-while loop
        printf("Type the double numeric string (q - to quit):\n"); // Prompting the user to input a double numeric string
        fgets(doubleString, BUFFER_SIZE, stdin); // Reading the input string from the user
        doubleString[strlen(doubleString) -1] = '\0'; // Removing the trailing newline character from the input string

        if ((strcmp(doubleString, "q") != 0)) { // Checking if the input string is not equal to "q"
            doubleNumber = atof(doubleString); // Converting the input string to a double number
            printf("Converted number is %f\n", doubleNumber); // Printing the converted double number with two decimal places
        }
    } while (strcmp(doubleString, "q") != 0); // Continuing the loop until the input string is "q"

    printf("*** End of Converting Strings to double Demo ***\n\n"); // Printing an end message





/* Version 3 */

// Printing the start message of the converting strings to long demo
    printf("*** Start of Converting Strings to long Demo ***\n");

    // Declaring variables for storing the input string and the converted long number
    char longString[BUFFER_SIZE];
    long longNumber;

    // Starting a loop to continuously prompt the user for input
    do {
        // Prompting the user to type a long numeric string
        printf("Typing the long numeric string (q - to quit): \n");
        
        // Reading the input string from the user
        fgets(longString, BUFFER_SIZE, stdin);
        
        // Removing the newline character from the end of the input string
        longString[strlen(longString) - 1] = '\0'; 

        // Checking if the user wants to quit
        if (strcmp(longString, "q") != 0) {
            // Converting the input string to a long number
            longNumber = atol(longString);
            
            // Printing the converted long number
            printf("Printing the converted number: %ld\n", longNumber);
        }
    // Continuing the loop until the user decides to quit
    } while (strcmp(longString, "q") != 0);

    // Printing the end message of the converting strings to long demo
    printf("*** End of Converting Strings to long Demo ***\n\n");


}

