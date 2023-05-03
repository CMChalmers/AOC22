#include <stdio.h>
#include <stdlib.h>
#include "day1.h"
#include "../algorithms/sorting/sorting.h"

int day1_solve(){
    FILE *file;
    char s[1024]; // making sufficiently large
    int current_total, highest = 0;

    // read input data
    file = fopen("/Users/charliechalmers/CLionProjects/AdventOfCode/day1/input.txt", "r");

    while(fgets(s, sizeof s, file) != NULL){
        if(s[0] != '\n'){
            current_total += atoi(s); // would use strtol usually
        } else {
            if (current_total > highest) {
                highest = current_total;
            }
            current_total = 0;
        }
    }

    fclose(file);

    return highest;
}

int day1_p2_solve(){
    FILE *file;
    char input[1024];
    int elf_calories[1024];
    int current_index, current_total;

    file = fopen("/Users/charliechalmers/CLionProjects/AdventOfCode/day1/input.txt", "r");
    current_total = 0;
    current_index = 0;

    while(fgets(input, sizeof input, file) != NULL){
        if(input[0] != '\n'){
           current_total += atoi(input);
        } else {
            elf_calories[current_index] = current_total;

            current_total = 0;
            current_index++;
        }
    }

    bubble_sort(elf_calories, current_index + 1);

    return elf_calories[current_index - 2] +
        elf_calories[current_index - 1] +
        elf_calories[current_index];
}