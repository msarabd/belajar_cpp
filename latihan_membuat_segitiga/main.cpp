#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Masukkan sisi segitiga: ";
    cin >> n;

    cout << "\nPola ke-1:" << endl;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "\nPola ke-2:" << endl;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i; j++){
            cout << "  ";
        }

        for (int l = 1; l <= i; l++){
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "\nPola ke-3:" << endl;
    for (int i = 1; i <= n; i++){
        for (int j = n - i; j >= 0; j--){
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "\nPola ke-4:" << endl;
    for (int i = 1; i <= n; i++){
        for (int h = 1; h < i; h++){
            cout << "  ";
        }

        for (int j = n - i; j >= 0; j--){
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "\nPola ke-5:" << endl;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i; j++){
            cout << " ";
        }
        
        for (int l = 1; l <= i; l++){
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "\nPola ke-6:" << endl;
    for (int i = 1; i <= n; i++){
        for (int h = 1; h < i; h++){
            cout << " ";
        }

        for (int j = n - i; j >= 0; j--){
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\nPola ke-7:" << endl;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i; j++){
            cout << " ";
        }
        
        for (int l = 1; l <= i; l++){
            cout << "* ";
        }
        cout << endl;
    }
    
    for (int i = 2; i <= n; i++){
        for (int h = 1; h < i; h++){
            cout << " ";
        }

        for (int j = n - i; j >= 0; j--){
            cout << "* ";
        }
        cout << endl;
    }

    cin.get();
    return 0;
}