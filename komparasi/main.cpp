#include <iostream>

using namespace std;

int main(){

    int a = 2;
    int b = 7;
    bool hasil1, hasil2;

    // sebanding (==)
    hasil1 = (a == b);
    cout << a << " == " << b << ": " << hasil1 << endl;
    
    // tidak sebanding (!=)
    hasil2 = (a != b);
    cout << a << " != " << b << ": " << hasil2 << endl;
    
    // kurang dari (<)
    hasil1 = (a < b);
    cout << a << " < " << b << ": " << hasil1 << endl;
    
    // lebih dari (>)
    hasil2 = (a > b);
    cout << a << " > " << b << ": " << hasil2 << endl;

    cin.get();
    return 0;    
}