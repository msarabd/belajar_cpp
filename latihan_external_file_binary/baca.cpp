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

    myFile.open("data.bin", ios::in | ios::binary);
    myFile.read(reinterpret_cast<char*>(&mahasiswa1), sizeof(mahasiswa));

    cout << mahasiswa1.nim << endl;
    cout << mahasiswa1.nama << endl;
    cout << mahasiswa1.jurusan << endl;
    
    myFile.close();
    cin.get();
    return 0;
}