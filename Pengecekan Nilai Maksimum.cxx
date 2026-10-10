// M. Akbar Nur Aprilio XI-D
#include <iostream>
using namespace std; 

int main() {
    // Deklarasi 
    int a, b, c, max;

    // Input nilai
    cout << "Masukan nilai a : ";
    cin >> a;

    cout << "Masukan nilai b : ";
    cin >> b;

    cout << "Masukan nilai c : ";
    cin >> c;

    // Cari nilai maksimum
    if (a > b && a > c) {
        max = a;
    } else if (b > c) {
        max = b;
    } else {
        max = c;
    }

    // Hasil output
    cout << "Nilai maksimum adalah: " << max << endl;

    return 0;
}
