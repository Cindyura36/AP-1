#include<iostream>
using namespace std;

void sapa(string nama) //void, untuk fungsi yang tidak perlu hasil balik
{
    cout << "Halo "<< nama << " !. Selamat datang AP 1 !" << endl;
}

int main()
{
    string namaPengguna = "Cindy";

    sapa(namaPengguna);

    return 0;
}