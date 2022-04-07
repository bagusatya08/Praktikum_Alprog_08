#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void intro();
void menu();
void penjumlahan();
void pengurangan();
void perkalian();
void pembagian();
void modulus();
int validInt();
void reVldInt();
float validFlt();
void reVldFlt();
void rangeVldInt();

int tryAgain(char y, char n, char *prompt){
	char ext;
	while(1){
		printf(prompt);
		fflush(stdin);
		scanf("%c", &ext);
		if((ext=='y' || ext=='Y') || (ext=='n' || ext=='N')){
			if (ext == 'y' || ext == 'Y'){
				system("cls");
			}
			break;
		}else{
		printf("\t\t\t\tInput salah! Silahkan coba lagi.\n");
		}
	}
	if(ext=='n' || ext=='N') return 0;
	return 1;
}


int main(){
	system ("color E0");
    int pilihan;

    do{
        //pemanggilan fungsi menu awal dan keterangan lainnya mengenai tugas
        intro();
        menu();

        //mengambil masukkan menu dengan melakukan validasi terhadapt pilihan tersebut 1 - 5
        rangeVldInt(&pilihan, "\n\t\t\t\tPilih menu : ");

        //melakukan swicth case
        switch(pilihan){
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
        }

    }while(tryAgain('y','n', "\n\t\t\t\tUlang Program? [Y/N] : "));
    //akhir dari program saat user selesai menggunakan program ini
    printf("\n\t\t\t\t==================================================\n");
    printf("\t\t\t\t                 HAVE A BLESS DAY!");
    printf("\n\t\t\t\t==================================================\n");

    return 0;
}

void intro(){
     printf("\n\t\t\t\t==================================================\n");
     printf("\t\t\t\t||         PRAKTIKUM ALGORITMA PEMROGRAMAN      ||\n");
     printf("\t\t\t\t||                   MODUL 1                    ||\n");
     printf("\t\t\t\t--------------------------------------------------\n");
     printf("\t\t\t\t||          Program Kalkulator Sederhana        ||\n");
     printf("\t\t\t\t||                  Kelompok 8                  ||\n");
     printf("\t\t\t\t==================================================\n\n");
}

void menu(){
    printf("\t\t\t\tMenu :\n");
    printf("\t\t\t\t1. Penjumlahan\n");
    printf("\t\t\t\t2. Pengurangan\n");
    printf("\t\t\t\t3. Perkalian\n");
    printf("\t\t\t\t4. Pembagian\n");
    printf("\t\t\t\t5. Modulus\n");
}

void penjumlahan(){
    float hasil,bil1,bil2;

    printf("\t\t\t\t-------------------------------\n");
    printf("\t\t\t\t1. Penjumlahan :\n");

    //memasukkan input yang akan dilakukan validasi
    reVldFlt(&bil1, "\t\t\t\tMasukkan bilangan 1\t: ");
    reVldFlt(&bil2, "\t\t\t\tMasukkan bilangan 2\t: ");

    //hasil perhitungan
    hasil = bil1 + bil2;
    printf("\t\t\t\t------------------------------- +\n");
    printf("\t\t\t\tHasil:\t\t\t  %.2f\n", hasil);
}

void pengurangan(){
    float hasil,bil1,bil2;

    printf("\t\t\t\t-------------------------------\n");
    printf("\t\t\t\t2. Pengurangan :\n");

    //memasukkan input yang akan dilakukan validasi
    reVldFlt(&bil1, "\t\t\t\tMasukkan bilangan 1\t: ");
    reVldFlt(&bil2, "\t\t\t\tMasukkan bilangan 2\t: ");

    //hasil perhitungan
    hasil = bil1 - bil2;
    printf("\t\t\t\t------------------------------- -\n");
    printf("\t\t\t\tHasil:\t\t\t  %.2f\n", hasil);
}

void perkalian(){
    float hasil,bil1,bil2;

    printf("\t\t\t\t-------------------------------\n");
    printf("\t\t\t\t3. Perkalian :\n");

    //memasukkan input yang akan dilakukan validasi
    reVldFlt(&bil1, "\t\t\t\tMasukkan bilangan 1\t: ");
    reVldFlt(&bil2, "\t\t\t\tMasukkan bilangan 2\t: ");

    //hasil perhitungan
    hasil = bil1 * bil2;
    printf("\t\t\t\t------------------------------- x\n");
    printf("\t\t\t\tHasil:\t\t\t  %.2f\n", hasil);
}

void pembagian(){
    float hasil,bil1,bil2;

    printf("\t\t\t\t-------------------------------\n");
    printf("\t\t\t\t4. Pembagian :\n");

    //memasukkan input yang akan dilakukan validasi
    reVldFlt(&bil1, "\t\t\t\tMasukkan bilangan 1\t: ");
    reVldFlt(&bil2, "\t\t\t\tMasukkan bilangan 2\t: ");

    //hasil perhitungan
    hasil = bil1 / bil2;
    printf("\t\t\t\t------------------------------- :\n");
    if((bil2 == 0) || (bil1 == 0 && bil2 == 0)){
        printf("\t\t\t\t Hasil tidak terdefinisikan");
    }else{
        printf("\t\t\t\tHasil:\t\t\t  %.2f\n", hasil);
        }
}

void modulus(){
    int hasil,bil1,bil2;

    printf("\t\t\t\t-------------------------------\n");
    printf("\t\t\t\t5. Modulus :\n");

    //memasukkan input yang akan dilakukan validasi
    reVldInt(&bil1, "\t\t\t\tMasukkan bilangan 1\t: ");
    reVldInt(&bil2, "\t\t\t\tMasukkan bilangan 2\t: ");

    //hasil perhitungan
    printf("\t\t\t\t------------------------------- %\n");
    if (bil2 == 0){
            printf("\t\t\t\tHasil tidak terdefinisikan");
    }else{
        hasil = bil1 % bil2;
        printf("\t\t\t\tHasil:\t\t\t  %d\n", hasil);
        }
}

void rangeVldInt(int *var, char *prompt){
	while(1){
		reVldInt(var, prompt);
		if(*var >= 1  && *var <= 5)
			break;

		printf("\t\t\t\tInput salah! Silahkan coba lagi.\n\n");
	}
}

int validInt(int *var){
	char buff[1024];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%d %c", var, &cek) == 1) {
			return 1;
		}
	}
	return 0;
}

void reVldInt(int *var, char *prompt){
	while(1){
		printf(prompt);
		if(validInt(var))
			break;
		printf("\t\t\t\tInput salah! Silahkan coba lagi.\n\n");
	}
}

float validFlt(float *var){
	char buff[1024];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%f %c", var, &cek) == 1) {
			return 1;
		}
	}
	return 0;
}

void reVldFlt(float *var, char *prompt){
	while(1){
		printf(prompt);
		if(validFlt(var))
			break;
		printf("\t\t\t\tInput salah! Silahkan coba lagi.\n\n");
	}
}
