#include <iostream> //header untuk c++
#include <conio.h> //header untuk getche() dan getch()
using namespace std;

int main ()
{
    //untuk kita mengetahui variabel yang akan di input
    string nama;
    char kom, jenisKelamin;
    int nim;
    float ip;
    /*ini untuk komentar beberapa baris*/
    cout << "Hello world!" <<endl;

    //untuk menerima inputan & memasukkan inputan
    cout << "Masukkan nama : ";
    //cin >> nama;
    getline(cin, nama); //agar karakter spasi bisa terbaca di string

    cout << "masukkan kom : ";
    cin >> kom;

    cout << "masukkan nim : "; cin >> nim;
    cout<< "masukkan ip : "; cin >> ip;

    cout << "Masukkan jenis kelamin (L/P) : ";
    jenisKelamin = getche(); //agar karakter langsung tampil tanpa klik enter

    /*untuk output*/
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    putchar(jenisKelamin); //untuk menampilkan char jenis kelamin

    getch(); //karakter nya ga bakal muncul di layar, tapi di simpan di memori

}