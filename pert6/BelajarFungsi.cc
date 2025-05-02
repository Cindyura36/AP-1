#include<iostream>
using namespace std;

void sapa(string nama)
{
    cout << "Halo "<< nama << " !. Selamat datang AP 1 !" << endl;
}

int main()
{
    string namaPengguna = "Cindy";

    sapa(namaPengguna);

    return 0;
}