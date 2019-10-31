#include <iostream>
using namespace std;
int main()
{
    cout << "===========================================================\n";
    cout << " Nama    : MUHAMAD DWIKI DARUSALAM                         \n";
    cout << " NIM     : A2.1900111                                      \n";
    cout << " Jurusan : Teknik Informatika                              \n";
    cout << " Blog    : www.dwiki.wordpress.com                         \n";
    cout << "===========================================================\n";
    cout << "                   LATIHAN INPUT OUTPUT                    \n";
    cout << "***********************************************************\n";
    char tampilan[1];
    char nama[50], alamat[50], no[50], email[50], website[50], jurusan[50];
    cout << "===========================================================\n";
    cout << "                 DAFTAR RIWAYAT HIDUP                      \n";
    cout << "===========================================================\n";
    cout << "nama:";
    cin.getline(nama,50);
    cout << "alamat:";
    cin.getline (alamat,50);
    cout << "no:";
    cin.getline (no,50);
    cout << "email:";
    cin.getline (email,50);
    cout << "website:";
    cin.getline (website,50);
    cout << "jurusan: Teknik Informatika UNISKA Banjarmasin ";
    cin.getline (tampilan,1);
    return 0;

}
