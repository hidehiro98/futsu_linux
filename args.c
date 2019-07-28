#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
    int i;
    int j;

    printf("argc=%d\n", argc);
    for (i = 0; i < argc; i++) {
        // printf("argv[%d]=%s\n", i, argv[i]);
        for (j = 0; j < 3; j++) {
            printf("argv[%d]=%c\n", j, argv[i][j]);
        }

    }
    exit(0);
}
