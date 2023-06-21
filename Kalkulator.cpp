#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "=== Kalkulator Sederhana ===" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> op;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    double result;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Tidak dapat membagi dengan nol." << endl;
                return 1;  // Keluar dari program dengan kode error
            }
            break;
        default:
            cout << "Error: Operator yang dimasukkan tidak valid." << endl;
            return 1;  // Keluar dari program dengan kode error
    }

    cout << "Hasil: " << result << endl;

    return 0;
}
