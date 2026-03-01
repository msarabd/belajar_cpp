#include <iostream>
using namespace std;

int main(){
    // membuat array
    int nilai[6];
    nilai[0] = 6;
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;
    
    cout << nilai << endl; // yang keluar adalah address dari nilai, jadi ini adalah pointer
    cout << &nilai[0] << " Nilai adalah: " << nilai[0] << endl; // bisa dilihat address nya sequence, dimana alamat nya berurutan dari terkecil hingga terbesar;
    cout << &nilai[1] << " Nilai adalah: " << nilai[1] << endl; // "&" untuk memanggil addres dari elemen tersebut
    cout << &nilai[2] << " Nilai adalah: " << nilai[2] << endl;
    cout << &nilai[3] << " Nilai adalah: " << nilai[3] << endl;
    cout << &nilai[4] << " Nilai adalah: " << nilai[4] << endl;
    cout << &nilai[5] << " Nilai adalah: " << nilai[5] << endl; // nilainnya akan random terus karena belum di inisialisasi
    
    // cara mengubah data
    // dengan address
    int *ptr = nilai; // tidak pakai "&", karena dia adalah var nilai adalah array yang sudah menunjuk ke alamat indeks pertama array\
    *(ptr + 2) = 7;
    
    // dengan menimpa
    nilai[4] = 100;

    cout << endl;
    cout << &nilai[0] << " Nilai adalah: " << nilai[0] << endl; // bisa dilihat address nya sequence, dimana alamat nya berurutan dari terkecil hingga terbesar;
    cout << &nilai[1] << " Nilai adalah: " << nilai[1] << endl; // "&" untuk memanggil addres dari elemen tersebut
    cout << &nilai[2] << " Nilai adalah: " << nilai[2] << endl;
    cout << &nilai[3] << " Nilai adalah: " << nilai[3] << endl;
    cout << &nilai[4] << " Nilai adalah: " << nilai[4] << endl;
    cout << &nilai[5] << " Nilai adalah: " << nilai[5] << endl;
    
    // cara mengambil banyak data pada array
    cout << endl;
    cout << "Ukuran array nilai: " << sizeof(nilai) << endl;
    cout << "Banyak data pada array nilai: " << sizeof(nilai) / sizeof(int) << endl;

    return 0;
}

// array adalah kumpulan-kumpulan dari sebuah data