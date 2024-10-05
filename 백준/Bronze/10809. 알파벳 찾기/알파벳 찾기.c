//
//  bj 10809 알파벳 찾기.c
//  Study
//
//  Created by ssokko on 2024-10-04.
//

#include <stdio.h>
#include <string.h>

int main (void) {
    char a[101];
    int alphabet[26];
    int i;
    
    for (i = 0; i < 26; i++) {
        alphabet[i] = -1;
    }
    
    scanf("%s", a);
    
    for (i = 0; a[i] != '\0'; i++) {
        int x = a[i] - 'a';
        if (alphabet[x] == -1) {
            alphabet[x] = i;
        }
    }
    
    for (i = 0; i < 26; i++) {
        printf("%d ", alphabet[i]);
    }
    return 0;
}
