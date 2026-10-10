// M. Akbar Nur Aprilio XI-D
#include <iostream>
using namespace std; 

int main() {
    // Deklarasi 
    int a, b, c, min;

    // Input nilai
    cout << "Masukan nilai a : ";
    cin >> a;

    cout << "Masukan nilai b : ";
    cin >> b;

    cout << "Masukan nilai c : ";
    cin >> c;

    // Cari nilai maksimum
    if (a < b && a < c) {
        min = a;
    } else if (b < c) {
        min = b;
    } else {
        min = c;
    }

    // Hasil output
    cout << "Nilai maksimum adalah: " << min << endl;

    return 0;
}
    