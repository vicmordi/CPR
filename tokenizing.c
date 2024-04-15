// Defining the macro `_CRT_SECURE_NO_WARNINGS` to disable certain warnings related to standard library functions in Windows.
#define _CRT_SECURE_NO_WARNINGS

// Defining the size of the buffer to be used for storing words.
#define BUFFER_SIZE 300

// Including the header file `tokenizing.h`, which likely contains function prototypes needed for the `tokenizing` function.
#include "tokenizing.h"

// Defining the function `tokenizing`, which takes no arguments and returns nothing (`void`).
void tokenizing(void) {
    /* Version 1 */
    // Printing a message indicating the start of the tokenizing words demonstration.
    printf("*** Start of Tokenizing Words Demo ***\n");

    // Declaring an array of characters named `words` with a size defined by the macro `BUFFER_SIZE`.
    char words[BUFFER_SIZE];

    // Declaring a pointer to a character named `nextWord`, initially set to NULL.
    char* nextWord = NULL;

    // Declaring an integer variable `wordsCounter` to keep track of the number of words.
    int wordsCounter;

    // Starts a do-while loop. The loop will execute at least once and then continue to execute as long as the condition in the `while` statement is true.
    do {   
        // Prompting the user to type a few words separated by space.
        printf("Type a few words separated by space (q - to quit): \n");

        // Reading the input string from the standard input and store it in `words`.
        fgets(words, BUFFER_SIZE, stdin);

        // Removing the newline character from the end of the input string.
        words[strlen(words) - 1] = '\0';

        // If the input string is not "q", tokenize the words using strtok function and print each word.
        if (strcmp(words, "q") != 0) {
            // Tokenizing the input string `words` using space as the delimiter.
            nextWord = strtok(words, " ");

            // Initializing `wordsCounter` to 1.
            wordsCounter = 1;

            // Looping through each token (word) obtained by strtok until NULL is returned.
            while (nextWord) {
                // Printing the current word along with its index.
                printf("Word #%d is '%s'\n", wordsCounter++, nextWord);

                // Getting the next token (word).
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0); // Loop until the input string is "q".

    // Printing a message indicating the end of the tokenizing words demonstration.
    printf("*** End of Tokenizing Words Demo ***\n\n");

    /* Version 2 */

    // Initiating the Tokenizing Phrases Demo
    printf("*** Start of Tokenizing Phrases Demo ***\n");

    // Declaring a character array to store phrases and initializing variables
    char phrases[BUFFER_SIZE];
    char *nextPhrase = NULL;
    int phrasesCounter;

    // Starting a loop for inputting phrases
    do
    {
        // Prompting the user to type phrases separated by commas
        printf("Typing a few phrases separated by commas (q - to quit): \n");
        
        // Reading input from the user
        fgets(phrases, BUFFER_SIZE, stdin);
        
        // Removing the newline character from the input
        phrases[strlen(phrases) - 1] = '\0';

        // Checking if the input is not equal to 'q' (to quit)
        if (strcmp(phrases, "q") != 0) {
            
            // Tokenizing the input string using strtok function
            nextPhrase = strtok(phrases, ",");
            
            // Initializing phrasesCounter variable to 1
            phrasesCounter = 1;

            // Looping through each tokenized phrase
            while (nextPhrase) {
                
                // Printing the phrase number and the tokenized phrase
                printf("Phrase #%d is '%s'\n", phrasesCounter++, nextPhrase);
                
                // Getting the next tokenized phrase
                nextPhrase = strtok(NULL, ",");
            }
        }
    } while (strcmp(phrases, "q") != 0);

    // Printing the end of the Tokenizing phrases Demo
    printf("*** End of Tokenizing phrases Demo ***\n\n");




    /* Version 3 */
    printf("*** Start of Tokenizing Sentences Demo ***\n"); // Printing the start of the tokenizing sentences demo.

    char sentences[BUFFER_SIZE]; // Declaring the sentences string buffer.
    char *nextSentence = NULL; // Declaring a pointer for the next sentence token.
    int sentencesCounter; // Declaring a counter for sentences.

    do {
        printf("Type a few sentences separated by dot (q - to quit):\n"); // Prompting the user to type sentences.
        fgets(sentences, BUFFER_SIZE, stdin); // Getting input from the user and storing it in the sentences string.
        sentences[strlen(sentences) - 1] = '\0'; // Removing the newline character at the end of the sentences string.

        if (strcmp(sentences, "q") != 0) { // Checking if the user entered "q" to quit.
            nextSentence = strtok(sentences, "."); // Tokenizing the sentences by splitting them at periods.
            sentencesCounter = 1; // Initializing the sentences counter.

            while (nextSentence) { // Looping through each tokenized sentence.
                printf("Sentence #%d is '%s'\n", sentencesCounter++, nextSentence); // Printing the current sentence.
                nextSentence = strtok(NULL, "."); // Getting the next sentence token.
            }
        }

    } while (strcmp(sentences, "q") != 0); // Continuing the loop until the user enters "q" to quit.

    printf("*** End of Tokenizing Sentences Demo ***\n\n"); // Printing the end of the tokenizing sentences demo.


}
