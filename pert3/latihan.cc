#include <iostream>
using namespace std;

int main()
{
    int nilai;

    system("CLS");

    cout<<"Masukkan nilai"<<endl;
    cin>>nilai;

    if (nilai % 10 == 0) {
        cout<<"Nilai anda kelipatan 10"<<endl;
    }
    else if (nilai % 5 == 0) {
        cout<<"Nilai anda kelipatan 5"<<endl;
    }
    else {
        cout<<"Nilai anda bukan kelipatan 5 atau 10"<<endl;
    }
}