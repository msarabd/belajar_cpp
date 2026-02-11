#include <iostream>

using namespace std;

int main(){

    int a;
    
    cout << "Masukkan nilai a: ";
    cin >> a;

    // if else statement
    // kondisi dalam bentuk boolean
    if (a == 3){
        cout << "Ini adalah 3" << endl;
    } else if (a == -2){
        cout << "Ini adalah -2" << endl;
    } else if (a == 0){
        cout << "Ini adalah 0" << endl;
    } else {
        cout << "Ini bukan 3, -2, atau 0" << endl;
    }
    cout << "Selesai" << endl;

    cin.get();
    return 0;
}