// FUNGSI MENGHITUNG FUNGSI KUADRAT
// CONTOH RUMUS MATEMATIKA y = x^2 + x + 5

#include <stdio.h>

int main() {
    int x;
    int y;

    // Input nilai x
    printf("Program Menghitung Fungsi Kuadrat y = x^2 + x + 5\n");
    printf("Masukkan nilai x : ");
    scanf("%d", &x);

    // Hitung nilai y
    y = (x * x) + x + 5;

    // Output hasil
    printf("Hasil perhitungan y = %d\n", y);

    return 0;
}