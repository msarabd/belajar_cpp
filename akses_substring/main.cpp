#include <iostream>
#include <string>
using namespace std;

int main(){
    string kalimat1("Mcquen sudah harus pensiun");
    string kalimat2("Dinoco suka makan kepala bocil");

    cout << "1: " << kalimat1 << endl;
    cout << "2: " << kalimat2 << endl;

    // subtring, untuk mengambil string di tengah-tengah
    // substr(index,panjang)
    cout << kalimat1.substr(13,5) << endl;
    cout << kalimat2.substr(7) << endl;

    // mencari posisi dari substr
    cout << kalimat2.find("bocil") << endl;
    
    int a = kalimat1.find("us ");
    cout << a << endl;

    int b = kalimat2.find("o");
    cout << kalimat2.find("o", b+1) << endl;

    // mencari dari posisi belakang -> rfind
    cout << kalimat2.rfind("o") << endl;

    cin.get();
    return 0;
}