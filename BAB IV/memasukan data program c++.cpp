#include <iostream>
using namespace std;
int main()
{
    char tampilkan [1];
    char panjang_data[5];
    cout << "=====================================================\n";
    cout << "           Belajar Pemrograman C++                   \n";
    cout << "=====================================================\n";
    cout << "Nama : ";
    cin.getline(panjang_data,50);
    cout << "Jurusan : Teknik Informaika - UNISKA Banjarmasin ";
    cin.getline(tampilkan,1);
    return 0;
}
