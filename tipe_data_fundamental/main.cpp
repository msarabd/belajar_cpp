#include <iostream>
#include <limits>
using namespace std;

int main(){

    // bilangan bulat -> integer, long, short
    int a = 10; // pakai unsigned agar bit pertama tidak dipakai untuk +/-

    cout << a << endl;
    cout << "=== Integer ===" << endl;
    cout << "Menyimpan " << sizeof(a) << " byte" << endl;
    cout << "Nilai max = " << numeric_limits<int>::max() << endl;
    cout << "Nilai min = " << numeric_limits<int>::min() << endl;
    
    // long
    long b = 6;

    cout << "\n=== Long ===" << endl;
    cout << "Menyimpan " << sizeof(b) << " byte" << endl;
    cout << "Nilai max = " << numeric_limits<int>::max() << endl;
    cout << "Nilai min = " << numeric_limits<int>::min() << endl;
    
    // short
    short c = 7;

    cout << "\n=== Short ===" << endl;
    cout << "Menyimpan " << sizeof(c) << " byte" << endl;
    cout << "Nilai max = " << numeric_limits<int>::max() << endl;
    cout << "Nilai min = " << numeric_limits<int>::min() << endl;
    
    // bilangan decimal -> float, double
    float d = 1.0;
    double e = 2.5;

    // character
    char f = 'a';

    // boolean
    bool g = true;

    cin.get();
    return 0;

}

// 1 byte = 8 bit
// integer -> 4 byte = 32 bit (1 bit pertama untuk +/-), max nya 2^31 -1 = 2147483647, min = -21147483647
// long pada windows -> 4 byte, sedangkan pada linux -> 8 byte
// boolean -> 1 byte, bukan bit karena besaran memori itu byte terkecil yang bisa diakses CPU