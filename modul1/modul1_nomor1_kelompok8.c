// Nama 	: Jesica Syalomitha Sule Ulang
// NIM 		: 2105551043
// Kelompok 	: 8

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void menu();
void penjumlahan();
void pengurangan();
void perkalian();
void pembagian();
void modulus();
void keluar();

float input_bilangan(){
    float bilangan;
    char huruf;
    scanf("%f%c", &bilangan,&huruf);
    if(huruf != '\n'){
        printf("Masukkan salah, mohon masukkan ulang :");
        fflush(stdin);
        input_bilangan();
    }
	else{
        return bilangan;
    }
}

int inputBilangan(){
    int bilangan;
    char huruf;
    scanf("%d%c", &bilangan,&huruf);
    if(huruf != '\n' || bilangan<0){
        printf("Masukkan salah, mohon masukkan ulang :");
        fflush(stdin);
        inputBilangan();
    }
	else{
        return bilangan;
    }
}

int main(){
	menu();
	system ("pause");
	return 0;
}

void menu(){
	int pilih;
	system ("cls");
	printf ("==========================================\n");
	printf ("|     PROGRAM KALKULATOR      |\n");
	printf ("==========================================\n");;
	printf ("Menu:\n");
	printf ("\t[1] Penjumlahan\n");
	printf ("\t[2] Pengurangan\n");
	printf ("\t[3] Perkalian\n");
	printf ("\t[4] Pembagian\n");
	printf ("\t[5] Modulus\n");
	printf ("\t[6] Keluar\n");
	printf ("\nPilih menu yang anda inginkan: ");
	pilih = inputBilangan();
	
	switch (pilih){
		case 1:
		penjumlahan();
		break;
		case 2:
		pengurangan();
		break;
		case 3:
		perkalian();
		break;
		case 4:
		pembagian();
		break;
		case 5:
		modulus();
		break;
		case 6:
		keluar();
		break;
		default:
		printf ("Menu yang anda masukkan tidak tersedia, mohon masukkan ulang");
		getch();
		menu();
		break;
	}
}

void penjumlahan(){
	int pilih;
	float angka1;
	float angka2;
	float hasil;
	
	system ("cls");
	printf ("==========================================\n");
	printf ("|             PENJUMLAHAN                |\n");
	printf ("==========================================\n");
	printf ("Masukkan bilangan pertama :");
	angka1 = input_bilangan ();
	printf ("Masukkan bilangan kedua   :");
	angka2 = input_bilangan ();
	
	hasil = angka1 + angka2;
	printf ("\nHasil penjumlahan bilangan adalah %.2f", hasil);
	
	printf ("\n[1] Lanjut");
	printf ("\n[2] Kembali\n");
	printf ("Apakah anda ingin lanjut? ");
	pilih = inputBilangan();
	
	switch (pilih){
		case 1:
		penjumlahan();
		case 2:
		menu();
		default:
		printf ("Menu yang anda piliih tidak tersedia, mohon masukkan ulang\n");
		break;
	}
}

void pengurangan(){
	int pilih;
	float angka1;
	float angka2;
	float hasil;
	system ("cls");
	printf ("==========================================\n");
	printf ("|             PENGURANGAN                |\n");
	printf ("==========================================\n");
	printf ("Masukkan bilangan pertama :");
	angka1 = input_bilangan();
	printf ("Masukkan bilangan kedua   :");
	angka2 = input_bilangan();
		
	hasil = angka1 - angka2;
	printf ("\nHasil pengurangan bilangan adalah %.2f", hasil);
	
	printf ("\n[1] Lanjut");
	printf ("\n[2] Kembali\n");
	printf ("Apakah anda ingin lanjut? ");
	pilih = inputBilangan();
	
	switch (pilih){
		case 1:
		pengurangan();
		case 2:
		menu();
		default:
		printf ("Menu yang anda piliih tidak tersedia, mohon masukkan ulang\n");
		break;
	}
}

void perkalian(){
	int pilih;
	float angka1;
	float angka2;
	float hasil;
	system ("cls");
	printf ("==========================================\n");
	printf ("|               PERKALIAN                |\n");
	printf ("==========================================\n");
	printf ("Masukkan bilangan pertama :");
	angka1 = input_bilangan();
	printf ("Masukkan bilangan kedua   :");
	angka2 = input_bilangan();
	
	hasil = angka1 * angka2;
	printf ("\nHasil perkalian bilangan adalah %.2f", hasil);
	
	printf ("\n[1] Lanjut");
	printf ("\n[2] Kembali\n");
	printf ("Apakah anda ingin lanjut? ");
	pilih = inputBilangan();
	
	switch (pilih){
		case 1:
		perkalian();
		case 2:
		menu();
		default:
		printf ("Menu yang anda piliih tidak tersedia, mohon masukkan ulang\n");
		break;
	}
}

void pembagian(){
	int pilih;
	float angka1;
	float angka2;
	float hasil;
	system ("cls");
	printf ("==========================================\n");
	printf ("|               PEMBAGIAN                |\n");
	printf ("==========================================\n");
	printf ("Masukkan bilangan pertama :");
	angka1 = input_bilangan();
	printf ("Masukkan bilangan kedua   :");
	angka2 = input_bilangan();
	
	hasil = angka1 / angka2;
	printf ("\nHasil pembagian bilangan adalah %.2f", hasil);
	
	printf ("\n[1] Lanjut");
	printf ("\n[2] Kembali\n");
	printf ("Apakah anda ingin lanjut? ");
	pilih = inputBilangan();
	
	switch (pilih){
		case 1:
		pembagian();
		case 2:
		menu();
		default:
		printf ("Menu yang anda piliih tidak tersedia, mohon masukkan ulang\n");
		break;
	}
}

void modulus(){
	int pilih;
	int angka1;
	int angka2;
	int hasil;
	system ("cls");
	printf ("==========================================\n");
	printf ("|                 MODULUS                |\n");
	printf ("==========================================\n");
	printf ("Masukkan bilangan pertama :");
	angka1 = inputBilangan();
	printf ("Masukkan bilangan kedua   :");
	angka2 = inputBilangan();
	
	hasil = fmod (angka1, angka2);
	printf ("\nHasil modulus bilangan adalah %d", hasil);
	
	printf ("\n[1] Lanjut");
	printf ("\n[2] Kembali\n");
	printf ("Apakah anda ingin lanjut? ");
	pilih = inputBilangan();
	
	switch (pilih){
		case 1:
		modulus();
		case 2:
		menu();
		default:
		printf ("Menu yang anda piliih tidak tersedia, mohon masukkan ulang\n");
		break;
	}
}

void keluar(){
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n+-----------------------------------------------------------------------------+");
	printf("\n|               TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI!             		|");
    printf("\n+-----------------------------------------------------------------------------+");
    printf("\n");
    exit(0);
	exit(0);
}
