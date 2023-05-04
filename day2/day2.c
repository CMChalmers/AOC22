#include <stdio.h>

int day2_solve(){
    FILE *file;
    int total_score;
    char enemy_move, our_move;
    char line[1024];

    char matrix[255][255] = {
           ['A'] = { ['X'] = 4, ['Y'] = 8, ['Z'] = 3 },
           ['B'] = { ['X'] = 1, ['Y'] = 5, ['Z'] = 9 },
           ['C'] = { ['X'] = 7, ['Y'] = 2, ['Z'] = 6 }
    };

    file = fopen("/home/arvo/CLionProjects/AOC22/day2/input.txt", "r");
    total_score = 0;

    while(fgets(line, sizeof line, file) != NULL) {
        enemy_move = line[0];
        our_move = line[2];
        total_score += matrix[enemy_move][our_move];
    }

    return total_score;
}

int day2_p2_solve(){
    FILE *file;
    int total_score;
    char enemy_move, verdict;
    char line[1024];

    char matrix[255][255] = {
            ['A'] = { ['X'] = 3, ['Y'] = 4, ['Z'] = 8 },
            ['B'] = { ['X'] = 1, ['Y'] = 5, ['Z'] = 9 },
            ['C'] = { ['X'] = 2, ['Y'] = 6, ['Z'] = 7 }
    };

    file = fopen("/home/arvo/CLionProjects/AOC22/day2/input.txt", "r");
    total_score = 0;

    while(fgets(line, sizeof line, file) != NULL) {
        enemy_move = line[0];
        verdict = line[2];
        total_score += matrix[enemy_move][verdict];
    }

    return total_score;
}
