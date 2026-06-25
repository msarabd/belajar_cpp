#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // fstream myFile;
    // int number = 120;

    // myFile.open("data.bin", ios::out | ios::binary);
    // myFile.write(reinterpret_cast<char*>(&number), sizeof(number));
    // // file binary nya tidak support dibaca dengan text editor biasa,
    // // jadi buka file binary-nya, lalu ctrl+shift+p, ketik "View: Reopen with... ", pilih hex editor
    // myFile.close();

    fstream myFile;
    int hasil;

    myFile.open("data.bin", ios::in | ios::binary);
    myFile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));
    cout << hasil << endl;
    myFile.close();

    cin.get();
    return 0;
}