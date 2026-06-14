#include <iostream>
#include <string>
using namespace std;

int main(){
    string kalimat1("hari ini pusing banget dengar ocehan orang tua");
    string kalimat2("ya, begitulah");

    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;
    
    // swap string
    kalimat1.swap(kalimat2);
    cout << "\n== setelah di swap ==" << endl;
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;
    
    // replace string, mengganti string
    int posisi = kalimat2.find("orang tua");
    kalimat2.replace(posisi, 9, "otong");
    cout << "\n== setelah di replace ==" << endl;
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;
    
    // insert string
    kalimat1.insert(13, " mau bagaimana lagi");
    cout << "\n== setelah di insert ==" << endl;
    cout << "1. " << kalimat1 << endl;
    cout << "2. " << kalimat2 << endl;

    kalimat2 = kalimat1;
    cout << kalimat2 << endl;
    cout << kalimat1 << endl;

    cin.get();
    return 0;
}