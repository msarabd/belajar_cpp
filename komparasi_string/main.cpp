#include <iostream>
using namespace std;

int main(){
    // char data1[2] = {1, 2};
    // char data2[2] = {1, 2};

    // if (data1 == data2){
    //     cout << "berhasil" << endl;
    // } else {
    //     cout << "gagal" << endl;
    // }

    string input;
    string kata_rahasia("ucup");

    while (true){
        cout << "Masukkkan nama: ";
        cin >> input;
        cout << "Nama yang dimasukkan: " << input << endl;

        if (input == kata_rahasia){
            cout << "Tebakan Anda benar!!" << endl;
            break;
        }
        cout << "Tebakan Anda salah!!" << endl;
    }
    cin.get();
    return 0;
}