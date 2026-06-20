#include <iostream>
#include <string>
using namespace std;

int main(){
    // ternary operator = ?
    // (kondisi) ? hasil1 : hasil2, hasil1 jika true, hasil2 jika false 

    int a, b;
    string hasil1, hasil2, output;

    hasil1 = "a kurang dari b";
    hasil2 = "a lebih dari sama dengan b";
    
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    output = (a < b) ? hasil1 : hasil2;
    cout << output << endl;
    
    /*simplify dari bentuk ini
    if (a < b){
        output = hasil1;
    } else{
        output = hasil2;
    }
    */
    cin.get();
    return 0;
}