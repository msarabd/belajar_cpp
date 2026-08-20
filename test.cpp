#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool stringTobool(char str){
    return (str == '1');
}

int main(){
    int n;
    string s;
    vector<string> matriks;
    string inputString;
    
    cin >> n;
    if (n < 1 || n > 500000) {
        return 0;
    }

    cin >> s;
    if (s.size() != n) {
        return 0;
    }

    for (char huruf : s) {
        if (huruf < 'a' || huruf > 'z') {
            return 0;
        }
    }

    int jumlah_char = 0;
    int pertama = 0;
    string partisi = s.substr(0, 1);
    for (int i = 0 ; i < n ; i++) {
        if (s[i] != s[n - i - 1]) {
            return 0;
        }
        jumlah_char++;
        if (s.substr(pertama, jumlah_char) == s.substr(n - i - 1, jumlah_char)) {
            partisi += s[i];
        } else {
            matriks.push_back(partisi);
            partisi = s.substr(i + 1);
            pertama = i + 1;
            jumlah_char = 0;
        }
    }

    cout << matriks.size();
    return 0;
}