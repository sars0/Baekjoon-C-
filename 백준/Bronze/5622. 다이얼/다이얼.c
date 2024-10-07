//
//  bj 5622 다이얼.c
//  Study
//
//  Created by ssokko on 2024-10-04.
//

#include <stdio.h>

int main(void) {
    char word[16];
    int time = 0;
    int a;
    
    scanf("%s", word);
    
    for (a = 0; word[a] != '\0'; a++) {
        if (word[a] >= 'A' && word[a] <= 'C') {
            time += 3;
        }
        else if (word[a] >= 'D' && word[a] <= 'F') {
            time += 4;
        }
        else if (word[a] >= 'G' && word[a] <= 'I') {
            time += 5;
        }
        else if (word[a] >= 'J' && word[a] <= 'L') {
            time += 6;
        }
        else if (word[a] >= 'M' && word[a] <= 'O') {
            time += 7;
        }
        else if (word[a] >= 'P' && word[a] <= 'S') {
            time += 8;
        }
        else if (word[a] >= 'T' && word[a] <= 'V') {
            time += 9;
        }
        else if (word[a] >= 'W' && word[a] <= 'Z') {
            time += 10;
        }
    }
    printf("%d\n", time);
    return 0;
}
