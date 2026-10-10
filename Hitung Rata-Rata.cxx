#include <stdio.h>

//MENDEKLARASIKAN PROSEDUR UNTUK MENGHITUNG RATA-RATA
void HitungRataRata(int N, float *rata_rata);
int main(){
    //Deklarasi
    int N;
    float rata_rata;

    //Algoritma
    printf ("N : ");
    scanf("%d", &N);
    HitungRataRata(N, &rata_rata);
    printf("Rata-rata : %f\n", rata_rata);

    return 0;
}

void HitungRataRata(int N, float *rata_rata){
    int i;
    float angka, jumlah;
    jumlah = 0;

    for (i=0; i<N; i++){
        printf("angka : ");
        scanf("%f", &angka);
        jumlah = jumlah + angka;
    }
    *rata_rata = jumlah/N;
}
