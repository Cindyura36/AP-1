#include<iostream>
#include<string>
#include<array>
using namespace std;

int main()
{
    //array declaration & initialization
    //2 cara memmbuat array

    //1. array kosong
    //string nama[5];

    //nama[0] = "Alya";
    //nama[1] = "Parul";
    //nama[2] = "Syukron";
    //nama[3] = "Aurick";
    //nama[4] = "Dzakwan";

    //2. langsung isi
    //string nama[5] = {"Alya", "Parul", "Syukron", "Aurick", "Dzkawan"};
    //string nama[5] = {"Alya", "Parul", "Syukron", "Aurick", "Dzkawan"};
    
    //ascending element in array
    // cout << nama[0] << endl;
    // cout << nama[1] << endl;
    // cout << nama[2] << endl;
    // cout << nama[3] << endl;
    // cout << nama[4] << endl;

    //pakai looping
    // for (int i = 0; i< 5; i++)
    // {
    //     cout << nama[i] << endl;
    // }

    //descending element in array use looping
    // for (int i = 4; i >= 0; i--)
    // {
    //     cout << nama[i] << endl;
    //}

    //multidemensional array
    //1 2 5
    //2 4 6

    // int matriks[2][3] = {{1,3,5},{2,4,6}};
    // for(int i = 0; i < 2; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         cout << matriks[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // int matriks[4][6] = {{1,3,5,7,3,5},{2,4,6,8,2,4},{1,2,3,4,5,6},{6,7,8,9,1,2}};
    // for(int i = 0; i < 4; i++) 
    // {
    //     for(int j = 0; j < 6; j++) 
    //     {
    //         cout << matriks[i][j] << " ";
    //     }
    //         cout << endl;
    // }

    //string (array of characters)
    //string nama = "hueningkai";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl;
    
    // for(int i = 0; i < nama.length(); i++) {
    //     cout << nama[i] << endl;
    // }

    // string s1 = "Hello";
    // string s2 = "world";

    //1. s1 = s2
    // s1 = s2;
    // cout << "s1 = " << s1 << endl;

    //2. s1 = s1+s2
    // s1 = "Hello";
    // cout << "Hasil : " << s1+s2 << endl;

    //3. s1.length()
    //cout << s1.length() << endl;
    //cout << (s1+s2).length() << endl;

    //4. s1.substr
    //cout << s1.substr(2,4) << endl;
    //cout << (s1+s2).substr(5,3) << endl;

    //operator sizeof()
    // int  angka = 10;
    // cout << sizeof(angka);

    // int nilai[] = {10,20,30,40,50}; /*kenapa 20 hassilnya, karna punya 5 data dn int itu memiliki 4 byte*/
    // cout << sizeof(nilai);

    // string s = "Kai";
    // // cout << sizeof(s);
    // cout << s.length();

    // string nama_karyawan[] = {"Yeonjun", "Soobin", "Beomgyu", "Taehyun", "Hueningkai"};
    // int n = sizeof(nama_karyawan) / sizeof(string);
    // cout << n << endl;

    //array  library
    // array<float, 5> nilai = {87.2, 90, 100, 95.7, 78.5};
    // // cout << "nilai : ";
    // // for (int i =0; i < nilai.size(); i++) {
    // //     cout << nilai[i] << " ";
    // // }

    // for (float n : nilai) {
    //     cout << n << " ";
    // }
}