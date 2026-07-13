#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m, input;
    vector<vector<int>> matriks;
    vector<int> baris;

    cin >> n >> m;
    if (n < 1 || n > 100 || m < 1 || m > 100) {
        return 0;
    }

    for (int i = 0; i < n;  i++) {
        for (int j = 0; j < m; j++) {
            cin >> input;
            if (input < 1 || input > 100) {
                return 0;
            }
            baris.push_back(input);
        }
        matriks.push_back(baris);
        baris.clear();
    }
    
    for (int i = 0; i < m;  i++) {
        for (int j = m - 1; j >= 0; j--) {
            cout << matriks[j][i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}