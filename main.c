#include <stdio.h>
#include "day1/day1.h"
#include "day2/day2.h"
#include "day3/day3.h"

int main() {
    printf("### Advent of code ###\n\n");

    printf("# Day 1 #\n");
    int day1_solution = day1_solve();
    printf("Solution: %d\n", day1_solution);

    int day1_p2_solution = day1_p2_solve();
    printf("Solution part 2: %d\n\n", day1_p2_solution);

    printf("# Day 2 #\n");
    int day2_solution = day2_solve();
    printf("Solution: %d\n", day2_solution);

    int day2_p2_solution = day2_p2_solve();
    printf("Solution part 2: %d\n\n", day2_p2_solution);

    printf("# Day 3 #\n");

    int day3_solution = day3_solve();
    printf("Solution: %d\n", day3_solution);

    return 0;
}
