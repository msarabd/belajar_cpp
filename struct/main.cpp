#include <iostream>
#include <string>

using namespace std;

// ==========================================
// 1. DEKLARASI STRUCT
// ==========================================
// Struct 'alamat' dan 'Mahasiswa' bertindak sebagai cetak biru (blueprint).
// Keduanya mengelompokkan beberapa tipe data (string, int) ke dalam satu kesatuan.

struct alamat {
    string nama;
    long int nomor_rumah;
    string nama_jalan;
    string kota;
    long kode_pos;
};

struct Mahasiswa {
    string nama;
    int nim;
};

int main() {
    
    // ==========================================
    // 2. STRUCT BIASA & DOT OPERATOR (.)
    // ==========================================
    // Mendeklarasikan variabel 'alamat_saya' yang bertipe struct 'alamat'.
    alamat alamat_saya;
    
    // Menggunakan Dot Operator (.) untuk mengisi dan mengakses 
    // elemen/variabel di dalam struct biasa.
    alamat_saya.nama = "Budi";
    alamat_saya.nomor_rumah = 12;

    cout << "--- Akses Struct dengan Dot Operator ---" << endl;
    cout << "Nama: " << alamat_saya.nama << endl;
    cout << "Nomor Rumah: " << alamat_saya.nomor_rumah << endl;
    cout << endl;


    // ==========================================
    // 3. POINTER PADA STRUCT & ARROW OPERATOR (->)
    // ==========================================
    // Mendeklarasikan variabel biasa 'mhs1'
    Mahasiswa mhs1;
    
    // Mendeklarasikan pointer '*mhsPtr' yang menunjuk ke alamat memori '&mhs1'
    Mahasiswa *mhsPtr = &mhs1; 

    // Mengisi data awal menggunakan dot operator pada variabel asli
    mhs1.nama = "Yunjin";
    mhs1.nim = 321;
    cout << "--- Akses Struct dengan Pointer ---" << endl;
    cout << "Nilai awal mhs1: " << mhs1.nama << " - " << mhs1.nim << endl;

    // MENGGUNAKAN ARROW OPERATOR (->)
    // Karena 'mhsPtr' adalah sebuah pointer, kita WAJIB menggunakan operator 
    // panah (->) untuk mengakses atau mengubah elemen di dalamnya, bukan operator titik (.).
    mhsPtr->nama = "Chaewon";
    mhsPtr->nim = 123;

    // Membuktikan bahwa nilai mhs1 telah berubah karena dimanipulasi melalui pointer.
    cout << "Nilai mhs1 setelah diubah via pointer: " << mhs1.nama << " - " << mhs1.nim << endl;
    cout << "Nilai mhsPtr (sama dengan mhs1): " << mhsPtr->nama << " - " << mhsPtr->nim << endl;

    return 0;
}