#include <iostream>

using namespace std;

int main() {

    // assignment
    int a = 9;

    cout << "Nilai awal dari a adalah: " << a << endl;

    // assignment operator
    // variabel = variabel operator ekspresi
    //     a    =     a       +        5
    // variabel operator= ekspresi
    //     a       +=       5

    a += 5; // ini adalah assignment, dimana saat sebuah var diberi nilai awal atau nilai baru setelah inisialisasi atau deklarasi
    cout << "Ditambah 5 menjadi: " << a << endl;
    
    a -= 5; // assignment juga
    cout << "Dikurang 5 menjadi: " << a << endl;
    
    a /= 5; // assignment juga
    cout << "Dibagi 5 menjadi: " << a << endl; // ingat kalau bertipe integer, var dibagi trus ada komanya, hanya menghasilkan bil bulatnya saja 
    
    a *= 5; // assignment juga
    cout << "Dikali 5 menjadi: " << a << endl;
    
    a %= 5; // assignment juga
    cout << "Dimodulus 5 menjadi: " << a << endl;

    cin.get();
    return 0;
}