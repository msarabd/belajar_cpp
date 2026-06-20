#include <iostream>
using namespace std;

int main(){
    float a = 5;
    float b = 6.67f;
    char c = 'f';

    float hasil1;
    hasil1 = (float)a + b; // casting secara eksplisit
    cout << hasil1 << endl;
    cout << a + c << endl; // kenapa jadi bilangan? karena umumnya char memiliki bentuk integer juga (ASCII)
    cout << (char)(a + c) << endl; // yang akan di-casting ekspresi(a + c)

    cin.get();
    return 0;
}