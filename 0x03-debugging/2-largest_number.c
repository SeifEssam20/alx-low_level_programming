#include "main.h"
int largest_number(int a, int b, int c) {
    int largest = a; // initialize largest to a

    // compare b with largest
    if (b > largest) {
        largest = b;
    }

    // compare c with largest
    if (c > largest) {
        largest = c;
    }

    return largest;
}
