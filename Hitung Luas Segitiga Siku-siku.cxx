#include "stdio.h"
void HitungLuasSegitigaSikuSiku(int alas, int tinggi, int *luas){
     *luas = 0.5 * alas * tinggi;
}

int main(){
     int alas, tinggi, luas;
     alas = 10;      
     tinggi = 6;    
     
     HitungLuasSegitigaSikuSiku(alas, tinggi, &luas);
     printf("%d", luas);
     return 0;
}
