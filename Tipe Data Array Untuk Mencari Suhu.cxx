#include <stdio.h>

int CariSuhu(float cari_suhu, int jml_elemen, float arraySuhu[]);

int main(){
    //DEKLARASI
    int jml_elemen, indeks;
    float cari_suhu;
    jml_elemen = 6;
    float arraySuhu[6] = {21.5, 23.0, 18.0, 20.3, 22.0, 16.5};

    //ALGORITMA
    printf("Suhu yang akan dicari : ");
    scanf("%f", &cari_suhu);

    indeks = CariSuhu(cari_suhu, jml_elemen, arraySuhu);

    if (indeks != -1)
        printf("Suhu ditemukan pada indeks ke-%d\n", indeks);
    else
        printf("Tidak ditemukan\n");

    return 0;
}

int CariSuhu(float cari_suhu, int jml_elemen, float arraySuhu[]){
    int indeks = -1;
    int ketemu = 0;
    int i = 0;
    while(i < jml_elemen && ketemu == 0){
        if(arraySuhu[i] == cari_suhu){
            ketemu = 1;
            indeks = i;
        }else{
            i++;
        }
    }
    return indeks;
}