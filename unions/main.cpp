#include <iostream>
using namespace std;

union bentuk{
    int int_value; // integer memorinya 4 byte
    char char_value[4]; // karena char memori nya hanya 1 byte dan kita butuh memaksimalkan memorinya 
    // (integer disini maks), maka kita butuh char ada 4 atau var_char[4]
};

int main(){
    bentuk data;

    data.int_value = 123456789;
    cout << "data int: " << sizeof(data.int_value) << ", value: " << data.int_value << endl;
    cout << "data char: " << sizeof(data.char_value) << ", value: " << data.char_value << endl;
    
    data.char_value[0] = 'a';
    data.char_value[1] = 'b';
    data.char_value[2] = 'c';
    data.char_value[3] = 'd';
    cout << "data int: " << sizeof(data.int_value) << ", value: " << data.int_value << endl;
    cout << "data char: " << sizeof(data.char_value) << ", value: " << data.char_value[0] << endl;
    // bedanya sama struct, unions field-nya adalah satu kesatuan, hanya beda bentuk (tipe data) saja
    // jadi saat satu bentuk di assingment, bentuk lain juga akan ikut berubah nilainya
    
    cin.get();
    return 0;

}