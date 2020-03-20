//        Extra Exercise  10
#include <stdio.h>

char toLowerCase(char letter)
{
    if (letter >= 97 && letter <= 122) {
        return letter;
    } else if (letter >= 65 && letter <=90) {
        return letter + 32;
    } else {
        return letter;
    }
int main(int argc, char *argv[])
  int i = 0;
    for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];
        char lowerCaseLetter = toLowerCase(letter);

        switch (lowerCaseLetter) {
            case 'a':
                printf("%d: 'A'\n", i);
                break;
            case 'e':
                printf("%d: 'E'\n", i);
                break;
            case 'i':
                printf("%d: 'I'\n", i);
                break;
            case 'o':
                printf("%d: 'O'\n", i);
                break;
            case 'u':
                printf("%d: 'U'\n", i);
                break;
            case 'y':
                if (i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                }

                break;
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    return 0;
}

//    Use the ',' (comma) to initialize letter in the for-loop.
#include <stdio.h>
    int i = 0;
    char letter = 0;
    for (i = 0; letter = argv[1][i], letter != '\0'; i++) {
        switch (letter) {
            case 'a':
            case 'A':
                printf("%d: 'A'\n", i);
                break;
            case 'e':
            case 'E':
                printf("%d: 'E'\n", i);
                break;
            case 'i':
            case 'I':
                printf("%d: 'I'\n", i);
                break;
            case 'o':
            case 'O':
                printf("%d: 'O'\n", i);
                break;
            case 'u':
            case 'U':
                printf("%d: 'U'\n", i);
                break;
            case 'y':
            case 'Y':
                if (i > 2) {
                    printf("%d: 'Y'\n", i);
                }

                break;
            default:
                printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    return 0;
}

//Make it handle all of the arguments you pass it with yet another for-loop.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int j = 0;
    int i = 0;
    char letter = 0;
    char *arr;

    for (j = 1; j < argc; j++) {
        arr = argv[j];
        printf("Argument %d: %s\n", j, arr);

        for (i = 0; letter = arr[i], letter != '\0'; i++) {
            switch (letter) {
                case 'a':
                case 'A':
                    printf("%d: 'A'\n", i);
                    break;
                case 'e':
                case 'E':
                    printf("%d: 'E'\n", i);
                    break;
                case 'i':
                case 'I':
                    printf("%d: 'I'\n", i);
                    break;
                case 'o':
                case 'O':
                    printf("%d: 'O'\n", i);
                    break;
                case 'u':
                case 'U':
                    printf("%d: 'U'\n", i);
                    break;
                case 'y':
                case 'Y':
                    if (i > 2) {
                        // it's only sometimes Y
                        printf("%d: 'Y'\n", i);
                    }

                    break;
                default:
                    printf("%d: %c is not a vowel\n", i, letter);
            }
        }
    }

    return 0;
}

//Convert this switch-statement to an if-statement. Which do you like better?
#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
    for (i = 0; argv[1][i] != '\0'; i++) {
        char letter = argv[1][i];

        if (letter == 'a' || letter == 'A') {
            printf("%d: 'A'\n", i);
        } else if (letter == 'e' || letter == 'E') {
            printf("%d: 'E'\n", i);
        } else if (letter == 'i' || letter == 'I') {
            printf("%d: 'I'\n", i);
        } else if (letter == 'o' || letter == 'O') {
            printf("%d: 'O'\n", i);
        } else if (letter == 'u' || letter == 'U') {
            printf("%d: 'U'\n", i);
        } else if (letter == 'y' || letter == 'Y') {
            if (i > 2) {
                printf("%d: 'Y'\n", i);
            }
        } else {
            printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    return 0;
}


/*  In the case for 'Y' I have the break outside the if-statement.
What's the impact of this and what happens if you move it inside the if-statement. Prove to yourself that you're right.
If the break is outside the if-statement, then it can correctly end the switch-statement, otherwise,
it will continue executing the code in default branch under some conditions. */
