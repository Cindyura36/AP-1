#include <iostream>
using namespace std;

int main()
{
    string kalimat;
    int i;

    cout<<"Masukkan Kalimat : ";
    getline(cin, kalimat);

    for(i = 0; i < kalimat.length(); i++) { //fungsi agar kita tahu jumlah karakter dalam suatu string
        kalimat[i] = toupper(kalimat[i]); //toupper, fungsi yang mengubah huruf kecil menjadi kapital
    }

    cout<<"Kalimat dalam huruf kapital : "<<kalimat<<endl;
    return 0;
}