#include <stdio.h>

int banyak(int x) {
    if (x < 0) {
        return 0; // Kondisi berhenti
    } else {
        return x + banyak(x - 2); // Pemanggilan rekursif
    }
}

int main() {
    int input = 5;
    int hasil = banyak(input);
    printf("Hasil dari banyak(%d) adalah: %d\n", input, hasil);
    return 0;
}
//ANJAYFEHFJHEBFHBEFHGBEFHBEHFB
int banyak(int x) {
    if (x < 0) {
        return 0; // Kondisi berhenti
    } else {
        return x + banyak(x - 2); // Pemanggilan rekursif
    }
}

int main() {
    int input = 5;
    int hasil = banyak(input);
    printf("Hasil dari banyak(%d) adalah: %d\n", input, hasil);
    return 0;

//test

int main() {
    int input = 5;
    int hasil = banyak(input);
    printf("Hasil dari banyak(%d) adalah: %d\n", input, hasil);
    return 0;