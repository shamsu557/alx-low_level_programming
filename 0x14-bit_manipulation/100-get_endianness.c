#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */

int get_endianness(void) {
    union {
        uint32_t i;
        char c[4];
    } endian_test = {0x01020304};
    return endian_test.c[0] == 1;
}


