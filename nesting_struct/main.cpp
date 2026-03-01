#include <iostream>
#include <string>
using namespace std;

struct aktor{
    string nama;
    int tahun_lahir;
};

struct film{
    string judul;
    string genre;
    int tahun;
    aktor pemeran_1;
    aktor pemeran_2;
};

int main(){
    aktor aktor_1, aktor_2;
    film film_1, film_2;

    // buat aktor 1
    aktor_1.nama = "Michel Bay";
    aktor_1.tahun_lahir = 1945;
    
    // buat aktor 2
    aktor_2.nama = "Jessica Alba";
    aktor_2.tahun_lahir = 1960;

    // buat film 1
    film_1.judul = "Naruto Live Action";
    film_1.genre = "action";
    film_1.tahun = 2045;
    film_1.pemeran_1 = aktor_1;
    film_1.pemeran_2 = aktor_2;
    
    // buat film 2
    film_2.judul = "Barbie";
    film_2.genre = "thriller comedy";
    film_2.tahun = 2033;
    film_2.pemeran_1 = aktor_2;

    cout << "==================================" << endl;
    cout << "             DATA FILM            " << endl;
    cout << "==================================" << endl;

    cout << "\nFilm 1" << endl;
    cout << "- Judul: " << film_1.judul << " (" << film_1.tahun << ")" << endl;
    cout << "- Genre: " << film_1.genre << endl;
    cout << "- Pemeran 1: " << film_1.pemeran_1.nama << endl;
    cout << "- Pemeran 2: " << film_1.pemeran_2.nama << endl;
    
    cout << "\nFilm 2" << endl;
    cout << "- Judul: " << film_2.judul << " (" << film_2.tahun << ")" << endl;
    cout << "- Genre: " << film_2.genre << endl;
    cout << "- Pemeran 1: " << film_2.pemeran_1.nama << endl;
    cout << "- Pemeran 2: " << film_2.pemeran_2.nama << endl; // subdata boleh kosong
    
    return 0;
}