#include<iostream>
using namespace std;
int main()
{
cout<<"=========================================================\n";
cout<<"Nama    :Nur Alamsyah                                    \n";
cout<<"NIM     :10630020                                        \n";
cout<<"Jurusan :Teknik Informatik                               \n";
cout<<"Blog   :www.alamisaja.wordpress.com                      \n";
cout<<"=========================================================\n";
cout<<"         LATIHAN INPUT                                   \n";
cout<<"*********************************************************\n\n";
char tampilkan[1];
char nama[50], alamat[50],t[50],jk[50], no[50], pekerjaan[50], email[50], website[50];
cout<<"==========================================================\n";
cout<<"         DAFTAR RIWAYAT HIDUP                             \n";
cout<<"==========================================================\n";
cout<<" Nama;";
cin.getline(nama,50);
cout<<" Alamat;";
cin.getline(alamat,50);
cout<<" Tanggal Lahir;";
cin.getline(tl,50);
cout<<" jenis Kelamin:";
cin.getline(jk,50);
cout<<" pekerjaan:";
cin.getline(pekerjaan,50);
cout<<" email:";
cin.getline(email,50);
cout<<" website:";
cin.getline(website,50);
cout<<"Jurusan : Teknik informatika UNISKA Banjarmasin";
cin.getline(tampilkan,1);

return 0;
}



