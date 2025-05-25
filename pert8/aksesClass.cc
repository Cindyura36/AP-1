#include<iostream>
using namespace std;

class ContohAkses
{
    private: //yang bisa diakses oleh kelas itu sendiri
        int privateVar;

    protected: //yang bisa diakses oleh kelas turunan
        int protectedVar;

    public: //yang bisa diakses dimana saja
        int publicVar;

    // constructor, metode khusus yang dipanggil otomatis saat sebuah objek dari kelas dibuat
    ContohAkses()
    {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    void tampilkanSemua()
    {
        cout << "Akses dari dalam Class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

class Turunan : public ContohAkses
{
    public : 
    void aksesProtected()
    {
        cout << protectedVar << endl;
        cout << publicVar << endl;
        //cout << privateVar << endl; //eror, karena statusnya ga bisa di akses langsung
    }
};

int main()
{
    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "\nAkses dari luar Class : " << endl;
    //cout << obj.privateVar << endl; //eror
    // cout << obj.protectedVar << endl; //eror
    cout << obj.publicVar << endl;

    cout << "\nAkses dari kelas turunan : " << endl;
    Turunan tur;
    tur.aksesProtected(); //memanggil fungsi dari kelas turunan
    
}