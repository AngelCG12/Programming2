#include <stdio.h>
#include <stdlib.h>

int main() {
    int p1 = 0, p2 = 0;
    time_t t;
    srand((unsigned) time(&t));
    p2 = rand() % 4;
    printf("ROCK-PAPER-SCISSORS\n\n1. Rock\n2. Paper\n3. Scissors");
    scanf("%d", &p1);
    printf("\n\n");

    if(p1 == 1)
        printf("Rock");
    if(p1 == 2)
        printf("Paper");
    if(p1 == 3)
        printf("Scissors");  

    if(p2 == 0)
        printf(" vs Rock");
    if(p2 == 1)
        printf(" vs Paper");
    if(p2 == 2)
        printf(" vs Scissors");  

    if(p1 == 1 && p2 == 2 || p1 == 2 && p2 == 0 || p1 == 3 && p2 == 1)
        printf("\n\nYOU WIN!");
    if(p1 == 1 && p2 == 0 || p1 == 2 && p2 == 1 || p1 == 3 && p2 == 2)
        printf("\n\nEQUALITY");
    if(p1 == 1 && p2 == 1 || p1 == 2 && p2 == 2 || p1 == 3 && p2 == 0)
        printf("\n\nYOU LOSE!");

    return 0;
}
