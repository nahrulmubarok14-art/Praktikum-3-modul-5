#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "MASUKAN BARIS SEGITIGA PASCAL :";
    cin >> n;
    for (int i = 0; i < n; i++) {
        //spasi membentuk segetiga
        for (int s = 0; s < n - i; s++) {
            cout << " ";
        }
        int val = 1; //agar dimulai dengan angka 1
        for (int j = 0; j <= i; j++) {
            cout << val << " ";
            //rumus segetiga pascal
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
    cout << "\n=================================\n";
    cout << "NAMA : NAHRUL MUBAROK\n";
    cout << "NIM : 25104410062\n";
    cout << "PRODI : TEKNIK INFORMATIKA - 1B\n";
    cout << "=================================\n";

    return 0;
}