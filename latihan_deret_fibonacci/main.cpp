#include <iostream>
using namespace std;

int main(){
    int n;
    int f_n;
    int f_n1;
    int f_n2;

    cout << "== MASUKKAN NILAI FIBONACCI ==\n";
    cout << "Masukkan deret ke-n: ";
    cin >> n;

    f_n1 = 0;
    f_n2 = 1;
    for (int i = 1; i <= n; i++){
        if (i == 1){
            cout << f_n2 << " ";
            continue;
        }
        
        f_n = f_n1 + f_n2;
        cout << f_n << " ";

        f_n1 = f_n2;
        f_n2 = f_n;
    }

    cin.get();
    return 0;
}