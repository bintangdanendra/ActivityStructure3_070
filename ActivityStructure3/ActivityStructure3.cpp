#include <iostream>
using namespace std;

struct DetailAlamat
{
    char Desa[20];
    char Kota[20];
}; 

struct Mahasiswa
{
    char nim[12];
    char nama[20];
    DetailAlamat alamat;
    int umur;
}; 

int main() {
    Mahasiswa mhs[3];

    for (int i = 0; i < 3; i++) {
        cout << "Masukkan NIM : ";
        cin.getline(mhs[i].nim,12);
        cout << "Masukkan Umur : ";
        cin.ignore(1, '\n');
        cout << "Masukkan Nama : ";
        cin.getline(mhs[i].nama, 20);
        cout << "Alamatn : ";
        cout << "\n\tMasukkan Desa : ";
        cin.getline(mhs[i].alamat.Desa, 20);
        cout << "\tMasukkan Kota : ";
        cin.getline(mhs[i].alamat.Kota, 20);

    }

    for (int i = 0; i < 3; i++) {
        cout << "\n\nNIM : " << mhs[i].nim;
        cout << "\nUmur : " << mhs[i].umur;
        cout << "\nNama : " << mhs[i].nama;
        cout << "\nAlamat : ";
        cout << "\nDesa : " << mhs[i].alamat.Desa;
        cout << "\nKota : " << mhs[i].alamat.Kota;
    }

}