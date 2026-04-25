#include <iostream>
#include <string>
using namespace std;

int main(){
    char kata1[5] = {'d', 'i', 'd', 'i', 't'};
    cout << kata1 << endl;

    string kata2("mobil");
    cout << kata2 << endl;

    cout << "Masukkan kata: ";
    cin >> kata2; // hanya bisa memasukkan satu kata, jika ketemu spasi, console berhenti menerima input
    cout << "Kata yang dimasukkan: " << kata2 << endl;

    return 0;
}