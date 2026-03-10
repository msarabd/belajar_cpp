#include <iostream>
using namespace std;

// global scope
int x = 1;
int y = 100;

int ambilGlobal(){
    return x; // mengambil scope global
}

int scope_local(){
    int x = 3; // variabel local scope scope_local
    return x;
}

int ambil_z(){
    int z = 5;
    return z;
}

void ubahNilai();

int main(){
    // local scope (main)
    cout << "1. Nilai variabel global: " << x << ", alamat: " << &x << endl;
    int x = 2; // variabel local main
    cout << "2. Nilai variabel local main: " << x << ", alamat: " << &x << endl;
    cout << "3. Nilai variabel global: " << ambilGlobal() << endl;
    cout << "4. Nilai variabel local scope: " << scope_local() << endl;
    cout << "5. Nilai variabel local main: " << x << ", alamat: " << &x << endl;
    
    {
        // block scope
        cout << "6. Nilai variabel local main: " << x << ", alamat: " << &x << endl;
        int x = 4; // variabel block scope
        cout << "7. Nilai variabel block scope: " << x << ", alamat: " << &x << endl;
        cout << "8. Nilai variabel global: " << ::x << ", alamat: " << &::x << endl;
        
    }

    cout << "9. Nilai variabel local main: " << x << ", alamat: " << &x << endl;
    cout << "10. Nilai variabel y: " << y << ", alamat: " << &y << endl;
    ubahNilai();
    cout << "10. Nilai variabel y: " << y << ", alamat: " << &y << endl;
    
    // ambil_z();
    // cout << "11. Nilai variabel z: " << z << ", alamat: " << y << endl; // (gabisa ambil panggil var lokal fungsi lain, meskpun di return)
    return 0;
}

void ubahNilai(){
    y = 200; // assignment variabel global y, setelah dipanggil prosedur tersebut, maka nilai var global y juga berubah
}
