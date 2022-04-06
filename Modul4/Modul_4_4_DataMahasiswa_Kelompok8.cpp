#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

 int main(){
   char nama[40];
 char nim[20];
 char umur[20];
   char alamat[30];
  float ip;

  cout<<"  Input Nama:";
   gets(nama);
  cout<<"  Input Nim :";
  cin>>nim;
  cout<<"  Input umur :";
   cin>>umur;
   cout<<"  Input alamat :";
   cin>>umur;
  cout<<"  Input Jumlah IP:";
  cin>>ip;

  cout<<endl<<endl;
  cout<<"  =========================================="<<endl;
  cout<<"  ============  DATA MAHASISWA =========="<<endl;
  cout<<"  =========================================="<<endl;
 cout<<"  =========================================="<<endl;
  cout<<"  | Nama   :"<<nama<<endl;
  cout<<"  | Nim    :"<<nim<<endl;
  cout<<"  | Umur   :"<<umur<<endl;
   cout<<"  | alamat :"<<alamat<<endl;
  cout<<"  | IP     :"<<ip<<endl;
  cout<<"  =========================================="<<endl;
  getch();
 } 