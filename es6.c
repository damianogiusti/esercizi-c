//
// Created by Damiano Giusti on 26/10/16.
//

#include <stdio.h>

int main() {
    float array[] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int length = 6;
    int i = 0;
    float avg = 0;
    for (i = 0; i < length; i++)
        avg += array[i];
    avg /= length;

    printf("average of array is: %.2f\n", avg);

    return 0;
}