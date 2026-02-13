#include <iostream>
using namespace std;

int main() {

    // increment (++) dan decrement (--)
    // preincrement dan postincrement;
    // a++ == a = a + 1
    
    int a = 8;
    int b = 9;

    // postincrement
    cout << a << endl;
    cout << a++ << endl; // post berarti sesudah variabel, lalu logikanya dia ngeprint dulu cout lalu ditambahkan 1
    cout << a << endl << endl;

    // preincrement
    cout << b << endl;
    cout << ++b << endl; // ditambah 1 dulu baru ngeprint cout
    cout << b << endl << endl;
    
    // postdecrement
    cout << a << endl;
    cout << a-- << endl; // post berarti sesudah variabel, lalu logikanya dia ngeprint dulu cout lalu dikurangkan 1
    cout << a << endl << endl;

    // predecrement
    cout << b << endl;
    cout << --b << endl; // dikurang 1 dulu baru ngeprint cout
    cout << b << endl;

    cin.get();
    return 0;
}