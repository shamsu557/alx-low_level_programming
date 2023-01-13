#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        exit(98);
    }
    int num1, num2;
    char *endptr;
    num1 = strtol(argv[1], &endptr, 10);
    if(*endptr != '\0') {
        printf("Error\n");
        exit(98);
    }
    num2 = strtol(argv[2], &endptr, 10);
    if(*endptr != '\0') {
        printf("Error\n");
        exit(98);
    }
    int *result = (int *) malloc(sizeof(int));
    *result = num1 * num2;
    printf("%d\n", *result);
    free(result);
    return (0);
}

