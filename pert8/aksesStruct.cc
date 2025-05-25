#include<iostream>
#include<string>
using namespace std;

struct Mahasiswa //dipakai untuk buat tipe data sendiri, yang isinya bisa gabungan dari beberapa jenis data
{
    string nama;
    int umur;
    float ipk;
};

int main()
{
    Mahasiswa mhs1;

    mhs1.nama = "Steve";
    mhs1.umur = 21;
    mhs1.ipk = 4.00;

    // cout << "Akses dengan . : " << endl; //bisa di akses langsung
    // cout << "Nama : " << mhs1.nama << endl;
    // cout << "Umur : " << mhs1.umur << endl;
    // cout << "Ipk : " << mhs1.ipk << endl;

    Mahasiswa *ptrMhs = &mhs1; //buat ptrMhs yang menunjuk ke alamat mhs1
    cout << "Akses dengan -> : " << endl; //bisa di akses lewat pointer
    cout << "Nama : " << ptrMhs -> nama << endl;
    cout << "Umur : " << ptrMhs -> umur << endl;
    cout << "Ipk : " << ptrMhs -> ipk << endl;

}