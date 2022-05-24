#include <stdio.h>
#include <stdlib.h>

int validasiPilih();
int validasiInt();
float validasiFloat();
void choose();

//program utama
int main() {
	int absensi;
	float tugas1, tugas2, tugas3;
	float quiz;
	float uts, uas;
	float total_tugas;
	float nilai_angka;
	
	printf("=========================================\n");
	printf("||        PROGRAM NILAI AKHIR         ||\n");
	printf("||           	oleh:	              ||\n");
	printf("||           KELOMPOK 8               ||\n");
	printf("=========================================\n");
	printf("-----------------------------------------\n");
	
	printf("\nMasukan total kehadiran semester ini (0-15)	: ");
	absensi = validasiInt();
	printf("Masukan nilai tugas 1 (0-100)			: ");
	tugas1 = validasiFloat();
	printf("Masukan nilai tugas 2 (0-100)			: ");
	tugas2 = validasiFloat();
	printf("Masukan nilai tugas 3 (0-100)			: ");
	tugas3 = validasiFloat();
	printf("Masukan nilai quiz (0-100)			: ");
	quiz = validasiFloat();
	printf("Masukan nilai UTS (0-100)			: ");
	uts = validasiFloat();
	printf("Masukan nilai UAS (0-100)			: ");
	uas = validasiFloat();
	printf("\n-----------------------------------------------\n");

    total_tugas=tugas1+tugas2+tugas3;
	nilai_angka=((absensi/15*100)*0.05)+((total_tugas/3)*0.2)+(quiz*0.15)+(uts*0.3)+(uas*0.3);
	
	printf("===============================================\n");
	printf("Nilai Akhir Anda adalah: %.2f \n", nilai_angka);
	
	if (absensi>11){
		if (80<=nilai_angka && nilai_angka<=100) {
			printf("\t     Predikat A             ");
		} else if (75<=nilai_angka && nilai_angka<80) {
			printf("\t     Predikat B+            ");
		} else if (65<=nilai_angka && nilai_angka<75) {
			printf("\t     Predikat B             ");
		} else if (60<=nilai_angka && nilai_angka<65) {
			printf("\t     Predikat C+            ");
		} else if (55<=nilai_angka && nilai_angka<60) {
			printf("\t     Predikat C             ");
		} else if (50<=nilai_angka && nilai_angka<55) {
			printf("\t     Predikat D+            ");
		} else if (45<=nilai_angka && nilai_angka<50) {
			printf("\t     Predikat D             ");
		} else {
			printf("\t     Predikat E             ");
		}
	} else {
		if (80<=nilai_angka && nilai_angka<=100) {
			printf("\t     Predikat C             ");
		} else if (75<=nilai_angka && nilai_angka<80) {
			printf("\t     Predikat D+            ");
		} else if (65<=nilai_angka && nilai_angka<75) {
			printf("\t     Predikat D             ");
		} else if (0<=nilai_angka && nilai_angka<65) {
			printf("\t     Predikat E            ");
		}
	}
	printf("\n-----------------------------------------------\n");
	
	choose();
	return 0;
}

//validasi input pilihan keluar program
int validasiPilih() {
    int nilai;
	char check;
	
    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai tidak valid!\nMasukan ulang: ");
        return validasiPilih();
        printf("\n===============================================\n");
	} else if (nilai < 0 || nilai > 2) {
		printf("\nNilai tidak valid!\nPilih antara 1-2: ");
		return validasiPilih();
        printf("\n===============================================\n");	
	} else {
        return nilai;
    }
}

//validasi input kehadiran
int validasiInt() {
    int absen;
	char check;
	
    if (scanf("%i%c", &absen, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai Anda tidak valid!\nMasukan ulang: ");
        return validasiInt();
        printf("\n===============================================\n");
	} else if (absen > 15 || absen < 0) {
		printf("\nNilai Anda tidak valid!\nInput antara 1-15: ");
		return validasiInt();
        printf("\n===============================================\n");
	} else if (absen==0) {
		printf("===============================================\n");
		printf("        Nilai Akhir Anda:           \n");
		printf("                   0                \n");
		printf("      	      Predikat E   	        \n");
		printf("===============================================\n");
		system("pause");
		system("cls");
		main();
	} else {
        return absen;
    }
	return 1;
}

//validasi input nilai dan tugas
float validasiFloat() {
    int ratarata;
	char check;
	
    if (scanf("%i%c", &ratarata, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai tidak valid!\nMasukan ulang: ");
        return validasiFloat();
        printf("\n===============================================\n");
	} else if (ratarata > 100 || ratarata < 0) {
		printf("\nNilai tidak valid!\n masukan dari 1-100: ");
		return validasiFloat();
        printf("\n===============================================\n");	
	} else {
        return ratarata;
    }
}

//prosedur keluar program
void choose() {
	int pilih;
	
	printf("\n=========================================\n");
	printf("Apakah anda ingin mengulang program?\n");
	printf("           1. Tidak  \n");
	printf("           2. Iya      ");
	printf("\n=========================================\n");
	printf("Inputkan angka yang ingin anda lakukan> ");
	pilih=validasiPilih();
	system("cls | clear");
	
	if(pilih==1){
	printf("=========================================\n");
	printf("    			TERIMA KASIH			 \n");
	printf("=========================================\n");
	}
	else {
		main();
	}
}