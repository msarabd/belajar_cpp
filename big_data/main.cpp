#include <iostream>
using namespace std;

// =======================================================
// 1. O(1) - Konstan
// Waktu eksekusi tetap sama meskipun jumlah data bertambah[cite: 3].
// =======================================================
void contohO1() {
    int arr[5] = {1, 2, 3, 4, 5}; //[cite: 3]
    cout << arr[2] << endl; // Mengakses data secara langsung adalah operasi sederhana[cite: 3].
}

// =======================================================
// 2. O(n) - Linear
// Waktu eksekusi bertambah seiring jumlah data[cite: 3].
// =======================================================
void contohON() {
    int arr[5] = {1, 2, 3, 4, 5}; //[cite: 3]
    for (int i = 0; i < 5; i++) { // Loop berjalan untuk memproses dan membaca semua data[cite: 3].
        cout << arr[i] << " "; //[cite: 3]
    }
    cout << endl; //[cite: 3]
}

// =======================================================
// 3. O(n^2) - Quadratic Time
// Terdiri dari loop di dalam loop (nested loop)[cite: 3]. Jika terdapat data 2 kali lipat maka pencarian menjadi 4 kali lipat[cite: 3].
// =======================================================
void contohON2() {
    int arr[5] = {1, 2, 3, 4, 5}; //[cite: 3]
    for (int i = 0; i < 5; i++) { //[cite: 3]
        for (int j = 0; j < 5; j++) { //[cite: 3]
            cout << arr[i] << " " << arr[j] << endl; //[cite: 3]
        }
    }
}

// =======================================================
// 4. O(Log n) - Logarithmic Time
// Algoritma membagi data menjadi 2 di setiap langkahnya, contohnya pada Binary Search[cite: 3].
// =======================================================
int binarySearch(int arr[], int left, int right, int target) { //[cite: 3]
    while (left <= right) { //[cite: 3]
        int mid = (left + right) / 2; //[cite: 3]
        if (arr[mid] == target) return mid; //[cite: 3]
        else if (arr[mid] < target) left = mid + 1; //[cite: 3]
        else right = mid - 1; //[cite: 3]
    }
    return -1; //[cite: 3]
}

// =======================================================
// 5. O(n Log n) - Logarithmic Time
// Menerapkan konsep divide and conquer (contoh: Merge Sort) dengan cara membagi data menjadi beberapa bagian, memprosesnya, lalu menggabungkan kembali[cite: 3].
// =======================================================
void mergeSort(int arr[], int left, int right) { //[cite: 3]
    if (left < right) { //[cite: 3]
        int mid = (left + right) / 2; //[cite: 3]
        mergeSort(arr, left, mid); //[cite: 3]
        mergeSort(arr, mid + 1, right); //[cite: 3]
        // Fungsi merge(arr, left, mid, right) digunakan pada tahap ini untuk menggabungkan data[cite: 3].
    }
}

// =======================================================
// 6. O(2^n) - Exponential Time
// Rekursi tanpa optimasi[cite: 3]. Jika jumlah data (n) bertambah 1, waktu eksekusi bisa menjadi 2 kali lipat[cite: 3].
// =======================================================
int fibonacci(int n) { //[cite: 3]
    if (n <= 1) return n; //[cite: 3]
    return fibonacci(n - 1) + fibonacci(n - 2); //[cite: 3]
}

int main() {
    // Fungsi utama ini dapat diisi dengan pemanggilan fungsi-fungsi di atas untuk dieksekusi
    return 0;
}