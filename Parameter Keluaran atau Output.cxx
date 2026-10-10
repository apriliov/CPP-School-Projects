#include "stdio.h"
void HitungLuasLayangLayang(int diagonal1, int diagonal2, int *luas){
     *luas = 0.5*diagonal1*diagonal2;
 }
 
 int main(){
     int diagonal1, diagonal2, luas;
     diagonal1 = 40;
     diagonal2 = 30;
     
     HitungLuasLayangLayang(diagonal1, diagonal2, &luas);
     printf("%d", luas);
     return 0;
  }   