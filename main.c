#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int initSize = 5;
    char * str = (char *) malloc(initSize * sizeof(char));

    scanf("%s", str);

    // Initializing the description of the timing diagram
    // Same with the input size
    int bits = strlen(str);
    int bi_s[bits*2];

    // Idle state is low level
    int currState = -1;
    
    // Transitions at the beginning of every bit
    for (int i = 0; i < bits; i++) {
        switch(str[i]) {
            case '1': //No Transition
                bi_s[i*2] = currState = -currState;
                bi_s[(i*2)+1] = currState;
                break;
            case '0': //Transitions at the middle of bit
                bi_s[i*2] = currState = -currState;
                bi_s[(i*2)+1] = currState = -currState;
                break;
            default:
                break;
        }
    }

    // Displays the output
    for (int i = 0; i < bits*2; i++) {
        printf("%i ", bi_s[i]);
    }

    // Free up allocated memory
    free(str);

    return 0;
}