#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vektor declarasi & inisialisasi

    // vector<string> nama_karyawan = {"Yeonjun", "Soobin", "Beomgyu", "Taehyun", "Hueningkai"};

    // for (string karyawan : nama_karyawan)
    // {
    //     cout << karyawan << endl;
    // }

    // add data to vektor
    // nama_karyawan.push_back("moa");

    // for (int i = 0; i < nama_karyawan.size(); i++)
    // {
    //     cout << nama_karyawan[i] <<endl;
    // }

    // delete data from vektor
    // nama_karyawan.pop_back();

    // for (int i = 0; i < nama_karyawan.size(); i++)
    // {
    //      cout << nama_karyawan[i] <<endl;
    // }

    // nama_karyawan.pop_back();

    nama_karyawan.erase(nama_karyawan.begin() + 3);

    for (int i = 0; i < nama_karyawan.size(); i++)
    {
          cout << nama_karyawan[i] <<endl;
    }
}