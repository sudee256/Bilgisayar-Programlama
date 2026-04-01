#include <stdio.h>

int main() {
    int yildiz = 5;

    for(int i = 1; i <= yildiz; i++) {
        for(int j = 1; j <= i; j++) { 
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
