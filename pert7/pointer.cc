#include<iostream>
using namespace std;

void penjumlahan(int a, int b) //parameter formal
{
    cout << a + b << endl;
}

void penjumlahanPointer(int *a, int *b)
{
    *a += *b;
    cout << *a << endl;
}

void doubleValue(int *a)
{
    *a *= 2;
    cout << *a << endl;
}

int main()
{
    system("CLS");

    //deklarasi pointer, memberi nama pada var pointer & menentukan tipe objek yang di tunjukkan oleh var tersebut
    // int number = 35;
    // int *pointer_number = &number;

    // cout << "Isi dari variabel number = " << number << endl;
    // cout << "Alamat memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer number = " << pointer_number << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;

    //pointer operation, serangkaian tindakan yang melibatkan pointer, yaitu var yang menyimpan alamat memori dari var lain
    // *pointer_number = 25;
    // cout << "Isi dari variabel number = " << number << endl;
    // cout << "Alamat memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer number = " << pointer_number << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;

    //pointer in array, penggunaan pointer untuk menunjuk ke elemen-elemen dalam sebuah array atau menunjuk ke array itu sendiri
    // int num[] = {1,2,3,4,5};
    // int *pointer_num = num;
    // cout << "Isi dari variabel num = " << num[0] << endl;
    // cout << "Alamat memori variabel num= " << &num[3] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;

    // *pointer_num += 5; //6
    // cout << "Isi dari variabel num = " << num[0] << endl;
    // cout << "Alamat memori variabel num= " << &num[0] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;

    //pointer in parameter, untuk mengirim alamat var ke fungsi tersebut
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2);
    // cout << num1 << endl;
    // cout << num2 << endl;
    // penjumlahanPointer(&num1, &num2);
    // cout << num1 << endl;
    // cout << num2 << endl;

    //pointer in pointer, pointer yang menyimpan alamat dari pointer lain
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score;

    // cout << "Isi variabel score " << score << " dan alamat memorinya " <<&score << endl;
    // cout << "Isi variabel pointer_score " << pointer_score << " dan isi variabel yang di tunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    // cout << "Isi variabel ptr_pointer_score " << pointer_score << " dan isi variabel yang di tunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori ptr_pointer_score " << &ptr_pointer_score << endl;

    //dynamic pointer, dipakai untuk menunjuk ke memori yang dialokasikan secara dinamis selama program berjalan
    // int *ptr = new int;
    // *ptr = 30;

    // cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr = " << &ptr << endl;

    // delete ptr; //dealokasi kan
    // cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr = " << &ptr << endl;

    //contoh
    // int n;
    // cout << "Masukkan sebuah angka = ";
    // cin >> n;

    // doubleValue(&n);
    // cout << "Nilai angka setelah di kali 2 = " << n << endl;
}