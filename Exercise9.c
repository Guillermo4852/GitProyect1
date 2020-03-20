//        Extra Exercise  9
//Make these loops count backward by using i-- to start at argc and count down to 0. You may have to do some math to make the array indexes work right.
#include <stdio.h>

int main(int argc, char** argv)
{
    int i = argc - 1;
    while (i >= 0) {
        printf("The number is arg %d: %s\n", i, argv[i]);
        i--;
    }
return 0;
}


//         Write a few more complex while-loops using what you know so far.
#include <stdio.h>

int main(int argc, char *argv[])
{
char *states[] = {"Yucatan", "Campeche",  "Puebla", "Guadalajara"};

    int num_states = 4;

    i = 0;
    while (i < argc) {
        states[i] = argv[i];
        i++;
    }

    i = 0;
    while (i < num_states) {
        printf("state %d: %s\n", i, states[i]);
        i++;
    }

    return 0;
}
