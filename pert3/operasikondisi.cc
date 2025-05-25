#include <iostream>
using namespace std;

int main()
{
    int nilai;

    system("CLS");

    cout<<"Masukkan nilai : ";
    cin>>nilai;

    //if statement, untuk pernyataan yang kondisinya terpenuhi
    /*if (nilai <= 65)
    {
        cout<<"Anda tidak lulus"<<endl;
    }*/

    //if else, untuk pernyataan berdasarkan kondisi yang di berikan
    /*if (nilai <= 65)
    {
        cout<<"Anda tidak lulus"<<endl;
    }
    else {
        cout<<"Anda lulus"<<endl;
    }*/

    //if else if statement, untuk pernyataan if maupun else, dapat berupa pernyataan yang tunggal atau banyak
    /*if (nilai == 100){
        cout<<"Anda Keren"<<endl;
    } else if (nilai <= 65) {
        cout<<"Anda tidak lulus"<<endl;
    } else {
        cout<<"Anda lulus"<<endl;
    }*/

    //nested if, sebuah struktur percabangan yang bisa juga dalam percabangan yang lain
    /*if (nilai <= 65) {
        cout<<"Anda tidak lulus"<<endl;
    } else {
        if (nilai == 100) {
            cout<<"Anda lulus dan Anda keren"<<endl;
        } else {
            cout<<"Anda lulus"<<endl;
        }
    }*/

    //switch case, untuk program yang menjalankan salah satu pernyataan dari beberapa kemungkinan
    /*switch (nilai) {
        case 1:
            cout<<"Senin"<<endl;
            break;

        case 2:
            cout<<"Selasa"<<endl;
            break;

        case 3:
            cout<<"Rabu"<<endl;
            break;

        case 4:
            cout<<"Kamis"<<endl;
            break;

        case 5:
            cout<<"Jum'at"<<endl;
            break;

        case 6:
            cout<<"Sabtu"<<endl;
            break;

        case 7:
            cout<<"Minggu"<<endl;
            break;
        default:
            cout<<"Inputan tidak valid"<<endl;
            break;
    }*/

    //switch range, untuk pernyataan switch untuk membandingkan nilai dengan rentang nilai
    /*switch(nilai) {
        case 85 ... 100: cout<<"A"<<endl; break;
        case 80 ... 84: cout<<"B+"<<endl; break;
        case 75 ... 79: cout<<"B"<<endl; break;
        case 70 ... 74: cout<<"C+"<<endl; break;
        case 65 ... 69: cout<<"C"<<endl; break;
        case 60 ... 64: cout<<"A"<<endl; break;

        default : cout<<"E"<<endl; break;
    }*/

    //ternary operator, untuk ekspresi pernyataan kondisional dalam satu baris kode
    if (nilaai % 2 == 0) {
        cout <<"Genap"<< endl;
    } else {
        cout<<"Ganjil"<< endl;
    }

    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout<<nilai<<"tuh bilangan"
}