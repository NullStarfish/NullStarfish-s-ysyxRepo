#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc != 2) {
        printf("ERROR: You need one argument.\n");
        // this is how you abort a program
        return 1;
    }

    int i = 0;
    char letter;
    for(i = 0, letter = argv[1][i]; letter != '\0'; i++, letter = argv[1][i]) {

        switch(letter) {
            case 'A':
            case 'O':
            case 'E':
            case 'I':
            case 'U':
		printf("%d: %c\n", letter + 'a' - 'A');
            case 'Y':
                if(i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'y'\n", i);
                }
                break;

            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    return 0;
}
