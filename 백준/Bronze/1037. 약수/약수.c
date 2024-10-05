//
//  bj 1037 약수.c
//  Study
//
//  Created by ssokko on 2024-10-04.
//

#include <stdio.h>

int main (void) {

    int a, i;
    int min = 1000001;
    int max = 0;
    
    scanf("%d", &a);
    
    int arr[a];
    
    for (i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("%d\n", min * max);
    
    return 0;
}

