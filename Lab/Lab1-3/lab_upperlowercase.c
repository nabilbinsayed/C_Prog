#include <stdio.h>
#include <ctype.h> 

int main() {
    char input, result;

    printf("Enter a single character: ");
    scanf("%c", &input);

    if (islower(input)) {
        result = toupper(input); 
    } 
    
    else if (isupper(input)) {
        result = tolower(input); 
    } 
    
    else {
        result = input;
    }

    printf("Converted character: %c\n", result);

    return 0;
}
