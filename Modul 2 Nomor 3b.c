#include <stdio.h>  

int main()  
{  
    // deklarasi variabel
    int biner, desimal = 0, base = 1, sisa;  
    printf ("Masukan bilangan biner: ");  
    scanf (" %d", &biner); //input biner
  
 
    while (biner > 0)  
    {  
        sisa = biner % 10; /* bilangan biner dibagi 10 dan sisanya disimpan variabel sisa */  
        desimal = desimal + sisa * base;  //tambah hasil desimal
        biner = biner / 10; // biner dibagi 10
        base = base * 2;  //basisnya naik dikali dua setiap iterasi
    }  
  
    printf ("Bilangan desimalnya adalah %d \t", desimal); // output desimal
}  
