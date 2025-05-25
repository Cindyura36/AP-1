#include <iostream>
using namespace std;

int main()
{
    int nilai;

    system("CLS"); //membersihkan layar di output

    cout<<"Masukkan nilai"<<endl;
    cin>>nilai;

    //untuk menjalankan kalau kondisi benar
    if (nilai % 10 == 0) {
        cout<<"Nilai anda kelipatan 10"<<endl;
    }

    //percabangan program true/false
    else if (nilai % 5 == 0) {
        cout<<"Nilai anda kelipatan 5"<<endl;
    }

    //untuk menjalankan kalau kondisi gagal
    else {
        cout<<"Nilai anda bukan kelipatan 5 atau 10"<<endl;
    }
}