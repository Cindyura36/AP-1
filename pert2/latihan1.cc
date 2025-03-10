#include <iostream>
#include <cmath>  // Untuk fungsi pow() dan M_PI

using namespace std;

int main() {
    int r, volume, luas;
    int pi = 3.14;

    cout << "Masukkan jari-jari bola: ";
    cin >> r;

    volume = (4.0 / 3.0) * 3.14 * r * r * r;

    luas = 4 * 3.14 * r * r;

    cout << "Volume bola: " << volume << endl;
    cout << "Luas permukaan bola: " << luas << endl;

    return 0;
}