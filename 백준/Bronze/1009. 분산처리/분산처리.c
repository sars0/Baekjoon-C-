//
//  bj 1009 분산처리.c
//  Study
//
//  Created by ssokko on 2024-10-04.
//

#include <stdio.h>

int main(void) {
    int x, a, b;
    int last[10][4] = {
        {10, 10, 10, 10},
        {1, 1, 1, 1},
        {2, 4, 8, 6},
        {3, 9, 7, 1},
        {4, 6, 4, 6},
        {5, 5, 5, 5},
        {6, 6, 6, 6},
        {7, 9, 3, 1},
        {8, 4, 2, 6},
        {9, 1, 9, 1}
    };
    
    scanf("%d", &x);
    
    while (x--) {
        scanf("%d %d", &a, &b);
        
        int lasta = a % 10;
        int bb = (b - 1) % 4;
        
        printf("%d\n", last[lasta][bb]);
    }
    return 0;
}
