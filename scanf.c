#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main() 
{
    char *word1 = malloc(10 * sizeof(*word1));
    char word2;

    printf("Enter first word: ");
    scanf("%s", word1);
    printf("Enter second word: ");
    scanf(" %c", &word2);                  //" "skipping whitespace characters
    printf("First word: %s\n", word1);
    printf("Second word: %c\n", word2); 
    free(word1);
    

    return 0;
}