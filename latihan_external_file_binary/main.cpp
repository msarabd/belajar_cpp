#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct mahasiswa{
    int nim;
    string nama;
    string jurusan;
};

int main(){
    fstream myFile;
    mahasiswa mahasiswa1, mahasiswa2, mahasiswa3;

    myFile.open("data.bin", ios::out | ios::trunc | ios::binary);
    mahasiswa1.nim = 101;
    mahasiswa1.nama = "mahdi";
    mahasiswa1.jurusan = "infor";
    
    mahasiswa2.nim = 102;
    mahasiswa2.nama = "ghaisa";
    mahasiswa2.jurusan = "kedok";
    
    mahasiswa3.nim = 103;
    mahasiswa3.nama = "hadjeni";
    mahasiswa3.jurusan = "elektro";

    myFile.write(reinterpret_cast<char*>(&mahasiswa1), sizeof(mahasiswa));
    myFile.write(reinterpret_cast<char*>(&mahasiswa2), sizeof(mahasiswa));
    myFile.write(reinterpret_cast<char*>(&mahasiswa3), sizeof(mahasiswa));

    cout << mahasiswa1.nim << endl;
    cout << mahasiswa1.nama << endl;
    cout << mahasiswa1.jurusan << endl;
    myFile.close();
    
    cin.get();
    return 0;
}