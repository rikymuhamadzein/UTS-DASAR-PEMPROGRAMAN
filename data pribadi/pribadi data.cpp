#include <iostream>
using namespace std;

int main()
{
    cout << "===========================================================\n";
    cout << "Nama       : MUHAMAD DWIKI DARUSALAM                       \n";
    cout << "Alamat     : Wado                                          \n";
    cout << "Nim        : A2.1900111                                    \n";
    cout << "No_Telepon : 085559321708                                  \n";
    cout << "===========================================================\n";
    cout << "                         SOAL NO 3                         \n";
    cout << "***********************************************************\n";
    char tampilan[1];
    char nama[50], alamat[50], nim[50], nomortelepon[50];
    cout << "===========================================================\n";
    cout << "                     DAFTAR RIWAYAT HIDUP                  \n";
    cout << "===========================================================\n";
    cout << " Nama : ";
    cin.getline(nama,50);
    cout << " Alamat : ";
    cin.getline(alamat,50);
    cout << " NIM  : ";
    cin.getline(nim,50);
    cout << "  Nomor Telepon : ";
    cin.getline(nomortelepon,50);
    return 0;
}
