/* Version 1 */

// Including necessary standard library headers.
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

// Function definition for the manipulating function.
void manipulating(void) {
    // Printing a message indicating the start of the demonstration for converting strings.
    printf("*** Start of Converting Strings Demo ***\n");

    // Declaring character arrays `string1` and `string2` to store user input strings.
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];

    // Start a do-while loop. The loop will execute at least once and then continue to execute as long as the condition in the `while` statement is true.
    do {
        // Prompting the user to type the 1st string.
        printf("Type the 1st string (q - to quit):\n"); 

        // Reading the 1st string from the standard input and storing it in `string1`.
        fgets(string1, BUFFER_SIZE, stdin);

        // Removing the newline character from the end of `string1`.
        string1[strlen(string1) - 1] = '\0';
    
        // Checking if `string1` is not equal to "q".
        if ((strcmp(string1, "q") != 0)) {
            // Prompting the user to type the 2nd string.
            printf("Type the 2nd string:\n");
            
            // Reading the 2nd string from the standard input and storing it in `string2`.
            fgets(string2, BUFFER_SIZE, stdin);
            
            // Removing the newline character from the end of `string2`.
            string2[strlen(string2) - 1] = '\0';
            
            // Concatenating `string2` to `string1`.
            strcat(string1, string2);
            
            // Printing the concatenated string.
            printf("Concatenated string is '%s'\n", string1);
        } 
    } while (strcmp(string1, "q") != 0); // Loop continues until `string1` is "q".

    // Printing a message indicating the end of the demonstration for concatenating strings.
    printf("*** End of Concatenating Strings Demo ***\n\n");

    /* Version 2 */

    // Printing start message
    printf("*** Start of Comparing Strings Demo ***\n");

    // Declaring variables for storing input strings and result
    char compare1[BUFFER_SIZE]; 
    char compare2[BUFFER_SIZE];
    int result;

    // Starting loop for input and comparison
    do {
        // Prompting user for the 1st string to compare
        printf("Type the 1st string to compare (q - to quit): \n"); 
        
        // Getting input for the 1st string
        fgets(compare1, BUFFER_SIZE, stdin);
        
        // Replacing newline character with null terminator
        compare1[strlen(compare1) - 1] = '\0';
        
        // Checking if the input is not 'q'
        if (strcmp(compare1, "q") != 0) {
            
            // Prompting user for the 2nd string to compare
            printf("Type the 2nd string to compare: \n"); 
            
            // Getting input for the 2nd string
            fgets(compare2, BUFFER_SIZE, stdin);
            
            // Replacing newline character with null terminator
            compare2[strlen(compare2) - 1] = '\0';
            
            // Comparing the strings and storing the result
            result = strcmp(compare1, compare2);
            
            // Checking the result of comparison
            if (result < 0) 
                printf("'%s' string is less than '%s'\n", compare1, compare2);
            else if (result == 0)
                printf("'%s' string is equal to '%s'\n", compare1, compare2);
            else
                printf("'%s' string is greater than '%s'\n", compare1, compare2);
        }
    // Continuing loop until input is not 'q'
    } while (strcmp(compare1, "q") != 0);

    // Printing end message
    printf("*** End of Comparing strings Demo ***\n\n");


    /* Version 3 */

    printf("*** Start of Searching Strings Demo ***\n"); // Printing the start of the searching strings demo.

    char haystack[BUFFER_SIZE]; // Declaring the haystack string buffer.
    char needle[BUFFER_SIZE]; // Declaring the needle string buffer.
    char *occurrence = NULL; // Declaring a pointer for occurrence of the needle in the haystack.

    do {
        printf("Type the string (q - to quit):\n"); // Prompting the user to type the haystack string.
        fgets(haystack, BUFFER_SIZE, stdin); // Getting input from the user and storing it in the haystack string.
        haystack[strlen(haystack) - 1] = '\0'; // Removing the newline character at the end of the haystack string.

        if (strcmp(haystack, "q") != 0) { // Checking if the user entered "q" to quit.
            printf("Type the substring: \n"); // Prompting the user to type the needle substring.
            fgets(needle, BUFFER_SIZE, stdin); // Getting input from the user and storing it in the needle string.
            needle[strlen(needle) - 1] = '\0'; // Removing the newline character at the end of the needle string.

            occurrence = strstr(haystack, needle); // Finding the occurrence of the needle in the haystack.

            if (occurrence) // Checking if the needle was found in the haystack.
                printf("'%s' found at %d position\n", needle, (int)(occurrence - haystack)); // Printing the position of the needle in the haystack.
            else
                printf("Not found\n"); // Printing a message indicating that the needle was not found in the haystack.
        }

    } while (strcmp(haystack, "q") != 0); // Continuing the loop until the user enters "q" to quit.

    printf("*** End of Searching Strings Demo ***\n\n"); // Printing the end of the searching strings demo.


}


