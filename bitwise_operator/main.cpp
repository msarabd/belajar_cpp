#include <iostream>
#include <bitset> // stl untuk menampilkan bit
#include <string>
using namespace std;

void printBinary(unsigned short val, string nama){
    cout << nama << ": " << bitset<8>(val) << endl;
    // bitset<berapa bit>(bilangan atau valuenya)
}
int main(){
    unsigned short a = 8; // ambil bilangan positifnya saja, tidak usah ambil (-) jika negatif
    unsigned short b = 10;
    unsigned short c;

    cout << "& - BITWISE AND" << endl;
    c = a & b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << c << endl;
    
    cout << "\n| - BITWISE OR" << endl;
    c = a | b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << c << endl;
    
    cout << "\n^ - BITWISE XOR" << endl;
    c = a ^ b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << c << endl;
    
    cout << "\n~ - BITWISE NOT" << endl;
    c = ~a;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << c << endl;
    
    cout << "\n<< - BITWISE SHL" << endl;
    c = a << 2;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << c << endl;
    
    cout << "\n<< - BITWISE SHR" << endl;
    c = a >> 4;
    unsigned short d = c << 4;
    printBinary(a, "a");
    printBinary(c, "c");
    printBinary(d, "d");
    cout << c << endl;
    cout << d << endl; // tidak akan balik ke semula (a), jadi nilai 1 yang sudah hilang tidak bisa balik
    
    cin.get();
    return 0;
}

/*
misal bitwise AND, 8 & 10, maka dia akan membandingkan
00001000 dan 00001010, nah itu kalau tiap bit dibandingkan dengan bitwise
maka hasilnya akan menjadi 00001000 = 8
*/

/*
& - AND
0 0 0
1 0 0
0 1 0
1 1 0
*/

/*
| - OR
0 0 0
1 0 1
0 1 1
1 1 1
*/

/*
^ - XOR // logika lampu tangga, saklar ada di dua ujung tangga
0 0 0
1 0 1
0 1 1
1 1 0
*/

/*
~ - NOT
0 1
1 0
*/

/*
<< - SHL
00001010 -> 00101000
*/

/*
>> - SHR
00001010 -> 00000010
*/

