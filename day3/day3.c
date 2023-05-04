#include <bits/types/FILE.h>
#include <stdio.h>
#include <string.h>

const char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

int day3_solve(){
    FILE *backpacks;
    int priorities[1024];
    char current_line[1024];
    int priorities_total;

    priorities_total = 0;
    backpacks = fopen("/home/arvo/CLionProjects/AOC22/day3/input.txt", "r");

    // fill priorities where a = 1, b = 2, c = ..., Z = 52
    int alphabet_length = sizeof(alphabet) / sizeof(alphabet[0]);
    for(int i = 0; i < alphabet_length; i++){
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
        int i = 0;
        while(current_line[i] != '\0'){
            if(current_line[i] != '\n'){

                int item_as_int = priorities[current_line[i] + 0];

                if (i <= end_of_first_container_index) { // left container
                    if(left_compartment[item_as_int] == 0){
                        // item not in compartment, mark it
                        left_compartment[item_as_int] = 1;
                    }
                } else { // right container
                    if(right_compartment[item_as_int] == 0) {
                        // item not in compartment, mark it
                        right_compartment[item_as_int] = 1;
                    }
                }
            }

            i++;
        }

        for(int y = 1; y < 53; y++){
            if((left_compartment[y] == 1 || left_compartment[y] == 2) && (right_compartment[y] == 1 || right_compartment[y] == 2)){
                priorities_total += y;
            }
        }
    }

    return priorities_total;
}