#include <stdio.h>
#include <string.h>

const char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

int day3_solve(){
    FILE *backpacks;
    int priorities[1024];
    char current_line[1024];
    int priorities_total, line_count;

    priorities_total = 0;
    backpacks = fopen("/home/arvo/CLionProjects/AOC22/day3/input.txt", "r");

    // fill priorities where a = 1, b = 2, c = ..., Z = 52
    for(int i = 0; i < 53; i++){
        priorities[alphabet[i] - 0] = i + 1;
    }

    // iterate each backpack (line)
    while(fgets(current_line, sizeof current_line, backpacks) != NULL){
        int left_compartment[53] = {0};
        int right_compartment[53] = {0};

        // get length of line but handle new character at end when it occurs
        size_t length = strlen(current_line);
        if(length % 2 != 0){
            length = length -1;
        }

        // get last index of first container
        int end_of_first_container_index = ((int)length / 2) - 1;

        // iterate each item (character of line)
        line_count = 0;
        while(current_line[line_count] != '\0' && current_line[line_count] != '\n'){
            int item_as_int = priorities[current_line[line_count] + 0];

            int* container = (line_count <= end_of_first_container_index) ? left_compartment : right_compartment;
            if (container[item_as_int] == 0) {
                container[item_as_int] = 1;
            }

            line_count++;
        }

        for(int y = 1; y < 53; y++){
            if(left_compartment[y] > 0 && right_compartment[y] > 0){
                priorities_total += y;
            }
        }
    }

    return priorities_total;
}

int day3_p2_solve(){
    FILE *groups;
    int priorities[1024];
    int current_line[1024];
    int priorities_total;

    return priorities_total;
}