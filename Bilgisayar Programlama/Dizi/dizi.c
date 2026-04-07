#include <stdio.h>

int main() {
    int dizi[7] = {10, 25, 48, 7, 92, 15, 60};
    int i;
    int sonuc= 0; 

    printf("Aramak istediginiz sayiyi giriniz: ");
    scanf("%d", &i);

    for (i = 0; i < 7; i++) {
        if (dizi[i] == i) {
            sonuc = 1;
            break; 
        }
    }
    if (sonuc == 1) {
        printf("Sonuc: false\n");
    } else {
        printf("Sonuc: true\n");
    }

    return 0;
}
