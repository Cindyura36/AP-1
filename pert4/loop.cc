#include <iostream>
using namespace std;

int main()
{
    //Goto Label, instrukssi untuk melakukan lompatan ke suatu bagian program
    /*a :
        cout<<"Hello World"<<endl;
        goto d;
    b:
        cout<<"Fasilkom-TI"<<endl;
        return 0;
    c:
        cout<<"Ilmu Komputer"<<endl;
        goto b;
    d:
        cout<<"IKLC"<<endl;
        goto c;*/

    
    //menampilkan bil.genap 10->2 dengan goto
    /*int i = 10;
    genap:
    if(i % 2 == 0)
    {
        cout<<i<<endl;
    } i--;

    if(i >= 2) {
        goto genap;
    }*/

    //statement while, perulangan yang diulang jika kondisi true, dan tidak akan berjalan ketika kondisi false
    /*int i=1;
    while(i <= 10) {
        if (i % 2 == 0) {
            cout<<i<<" ";
        } i++;
    }
    */

    //statement do-while, perulangan yang dilakukan sekali, lalu cek kondisi. selalu berjalan min.1x walaupun false
    /*int i = 1;
    do {
        cout<<i<<endl;
    } while(i<=0);*/

    //statement for, untuk kode yang di ulang
    //for (inisialisasi, kondisi, increase)
    /*for (int i = 1; i <= 10; i+=2) {
        cout<<"Hello World"<<endl;
    }*/

    //nested for, perulangan di dalam perulangan
    // ***** 5 x 5
    /*for (int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            cout<<" * ";
        }
        cout<<endl;
    }*/

    //segitiga siku-siku
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}