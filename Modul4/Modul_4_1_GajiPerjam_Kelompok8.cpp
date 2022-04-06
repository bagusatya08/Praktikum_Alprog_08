#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

  int main()
 {
  int gaji,jam,lembur,gaji2;

  cout<<"\nMasukkan jam kerja anda : ";cin>>jam;

   if (jam>=8)
  {
   lembur= jam-8   ;
   gaji=((8*10625)+(lembur*85000));
   cout<<"\nJam kerja anda : 8 Jam";
   cout<<"\nJam lembur anda : "<<lembur<<" jam";
   cout<<"\nGaji anda adalah : Rp. "<<gaji;
   }
   else   
  {
   gaji2=jam*10625   ;
   cout<<"\nJam kerja anda : "<<jam<<" jam";
   cout<<"\nJam lembur anda : 0 Jam";
   cout<<"\nGaji anda adalah : Rp. "<<gaji2;
   }

    getch();

   }