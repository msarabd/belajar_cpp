#include <iostream>
#include <string>
using namespace std;

// struct: data yang dibentuk oleh beberapa data (subdata)

struct buah{
    string warna;
    float berat;
    int harga;
    string rasa;
};

struct mhs{
    string nama;
    int nim;
    int umur;
    string gender;
};

int main(){
    buah apel;
    mhs mhs_1;
    mhs mhs_2;

    apel.warna = "merah";
    apel.berat = 120;
    apel.harga = 15000;
    apel.rasa = "manis banget";
    
    mhs_1.nama = "Cristiano Ronaldo";
    mhs_1.nim = 002;
    mhs_1.umur = 40;
    mhs_1.gender = "pria";
    
    mhs_2.nama = "Lionel Adress Messi";
    mhs_2.nim = 001;
    mhs_2.umur = 38;
    mhs_2.gender = "pria";

    cout << "===========================" << endl;
    cout << "       DATA MAHASISWA      " << endl;
    cout << "===========================" << endl;

    cout << "\nMahasiswa 1" << endl;
    cout << "- Nama: " << mhs_1.nama << endl;
    cout << "- NIM: " << mhs_1.nim << endl;
    cout << "- Umur: " << mhs_1.umur << endl;
    cout << "- Gender: " << mhs_1.gender << endl;
    
    cout << "\nMahasiswa 2" << endl;
    cout << "- Nama: " << mhs_2.nama << endl;
    cout << "- NIM: " << mhs_2.nim << endl;
    cout << "- Umur: " << mhs_2.umur << endl;
    cout << "- Gender: " << mhs_2.gender << endl;
    
    return 0;
}