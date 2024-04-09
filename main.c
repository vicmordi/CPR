// Including header files for the different modules
#include "fundamentals.h" // For the fundamentals module
#include "manipulating.h" // For the manipulating module
#include "converting.h"   // For the converting module
#include "tokenizing.h"   // For the tokenizing module

// Main function of the program
int main(void) { 
    char buff[10]; // Buffer to store user input
    
    // Loop to display menu and handle user input
    do {
        // Displaying menu options
        printf("1 - Fundamentals\n");
        printf("2 - Manipulation\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        printf("Which module to run? \n");
        
        // Reading user input
        fgets(buff, 10, stdin);
        
        // Switch case to handle user choice
        switch (buff[0]) {
            // If user chooses option 1
            case '1': 
                fundamentals(); // Call fundamentals function
                break;
            // If user chooses option 2
            case '2': 
                manipulating(); // Call manipulating function
                break;
            // If user chooses option 3
            case '3': 
                converting(); // Call converting function
                break;
            // If user chooses option 4
            case '4': 
                tokenizing(); // Call tokenizing function
                break;
        }
    } while (buff[0] != '0'); // Loop until user chooses to exit
    
    return 0; // Return 0 to indicate successful execution
}
