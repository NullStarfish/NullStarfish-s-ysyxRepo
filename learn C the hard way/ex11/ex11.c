#include <stdio.h>

int main(int argc, char *argv[])
{
    // go through each string in argv

    int i = argc - 1;
    while(i >= 0) {
        printf("arg %d: %s\n", i, argv[i]);
        i--;
    }

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };

    int num_states = 4;
    i = num_states - 1;  // watch for this
    while(i >= 0) {
        printf("state %d: %s\n", i, states[i]);
        i--;
    }
    
    int count = 0;
    for (count = 0; count < argc && count < num_states; count ++) {
    	states[count] = argv[count];
    }
    
    i = num_states - 1;  // watch for this
    while(i >= 0) {
        printf("state %d: %s\n", i, states[i]);
        i--;
    }
    
    return 0;
}
