#include <iostream>
#include <string>
using namespace std;

void printData(int val){
    cout << val << endl;
}

int main(){
    // (expression1, expression2)
    int a, b, c;

    a = (b = 1, printData(b), c = 2, printData(c), b + c); // akan dieksekusi sesaui urutan dan bisa memanggil fungsi juga
    cout << a << endl; // expression ini harus di luar karena mengandung var yang ingin di-assingment (a)

    cin.get();
    return 0;
}