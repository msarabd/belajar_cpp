#include <iostream>

using namespace std;

int main(){

    int a;
    
    cout << "Masukkan nilai a: ";
    cin >> a;

    // if statement
    // kondisi dalam bentuk boolean
    if (a < 5){
        cout << "Benar" << endl;
    }
    cout << "Selesai" << endl;

    cin.get();
    return 0;
}

// jika hanya if (var), maka saat var-nya bernilai selain 0, maka kondisi nya akan terpenuhi (true)