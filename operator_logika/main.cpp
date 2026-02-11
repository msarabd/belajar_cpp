#include <iostream>

using namespace std;

int main(){

    int a = 2;
    int b = 3;
    bool hasil;

    // operator logika : not, and, or

    // not (!)
    cout << "=== NOT ===" << endl;
    hasil = !(a == 2);
    cout << hasil << endl;
    
    // and (&&)
    cout << "=== AND ===" << endl;
    hasil = (a == 2) and (b == 3); // T and T -> T
    cout << hasil << endl;
    
    hasil = (a == 2) and (b == 5); // T and F -> F
    cout << hasil << endl;
    
    hasil = (a == 3) && (b == 3); // F and T -> F
    cout << hasil << endl;
    
    hasil = (a == 5) && (b == 5); // F and F -> F
    cout << hasil << endl;
    
    // or (||)
    cout << "=== OR ===" << endl;
    hasil = (a == 2) or (b == 3); // T or T -> T
    cout << hasil << endl;
    
    hasil = (a == 2) or (b == 5); // T or F -> T
    cout << hasil << endl;
    
    hasil = (a == 3) || (b == 3); // F or T -> T
    cout << hasil << endl;
    
    hasil = (a == 5) || (b == 5); // F or F -> F
    cout << hasil << endl;
    
    cin.get();
    return 0;
}