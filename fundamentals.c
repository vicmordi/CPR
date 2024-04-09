#include "fundamentals.h"

// Disable certain warnings related to standard library functions in Windows
#define _CRT_SECURE_NO_WARNINGS

// Define buffer size for storing strings
#define BUFFER_SIZE 80 

// Define size for input buffer storing numeric inputs
#define NUM_INPUT_SIZE 10

// Include the header file again to access its functionality
#include "fundamentals.h"

// Define the function `fundamentals`
void fundamentals (void) {
    // Start of the indexing strings demonstration
    printf("*** Start of Indexing Strings Demo ***\n");

    // Declare a buffer to store the input string
    char buffer1 [BUFFER_SIZE];

    // Declare a buffer to store numeric input
    char numInput [NUM_INPUT_SIZE];

    // Declare a variable to store the position of the character
    size_t position;

    // Start a loop for user interaction
    do
    {
        // Prompt the user to input a non-empty string
        printf("Type not empty string (q- to quit):\n");
        
        // Read the input string from the user
        fgets (buffer1, BUFFER_SIZE, stdin);

        // Remove the newline character from the input string
        buffer1 [strlen(buffer1) - 1] = '\0';

        // If the input is not "q", proceed with character position input
        if (strcmp (buffer1, "q") != 0) {
            // Prompt the user to input the character position within the string
            printf(("Type the character position within the string: \n"));
            
            // Read the numeric input for character position
            fgets (numInput, NUM_INPUT_SIZE, stdin) ;
            
            // Remove the newline character from the numeric input
            numInput [strlen (numInput)- 1] = '\0';
            
            // Convert the numeric input to an integer
            position = atoi(numInput);
            
            // If the position is greater than or equal to the length of the string, adjust it
            if (position >= strlen(buffer1))
            {
                position = strlen(buffer1) - 1;
                printf("Too big... Position reduced to max. available\n");
            }
            
            // Print the character found at the specified position within the string
            printf ("The character found at %d position is \'%c'\n", (int)position, buffer1[position]);
        }
    } while (strcmp (buffer1, "q") != 0); // Continue looping until the user inputs "q"

    // End of the indexing strings demonstration
    printf("*** End of Indexing Strings Demo ***\n\n");

    // Version 2 
    // Printing the start message for the Measuring Strings Demo
    printf("*** Start of Measuring Strings Demo ***\n");

    // Initializing buffer for storing user input
    char buffer[BUFFER_SIZE];

    // Loop for continuously receiving user input strings until 'q' is entered
    do {
        // Prompting the user to type a string
        printf("Type a string (q - to quit):\n");

        // Getting input string from the user
        fgets(buffer, BUFFER_SIZE, stdin);

        // Removing the newline character from the input string
        buffer[strlen(buffer) - 1] = '\0';

        // Checking if the entered string is not 'q'
        if (strcmp(buffer, "q") != 0) {
            // Printing the length of the entered string
            printf("The length of '%s' is %d characters\n", buffer, (int)strlen(buffer));
        }
    } while (strcmp(buffer, "q") != 0);  // Loop continuation condition

    // Printing the end message for the Measuring Strings Demo
    printf("*** End of Measuring Strings Demo ***\n");



}
