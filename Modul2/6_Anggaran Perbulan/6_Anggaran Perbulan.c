#include <stdio.h>
#include <stdlib.h>

int validasiPinjaman();
int validasiBunga();
int validasiBulan();
int validasiKeluar();
void keluar();
void hitunganggaran(float pokokPinjaman, float bunga, float lamaPinjaman);

int main() {
	float pokokPinjaman, lamaPinjaman;
	float bunga;
	
	printf("=========================================\n");
	printf("||         PROGRAM PINJAMAN            ||\n");
	printf("||           dibuat oleh:              ||\n");
	printf("||            KELOMPOK 8               ||\n");
	printf("=========================================\n");
	printf("-----------------------------------------\n");
	
	printf("Masukan Jumlah Pokok Pinjaman	:");
	pokokPinjaman=validasiPinjaman();
	
	printf("Masukan Besar Bunga 		:");
    bunga=validasiBunga();
    
    printf("Masukan Lama Pinjaman 		:");
    lamaPinjaman=validasiBulan();
    printf("-----------------------------------------\n");
	
	hitunganggaran(pokokPinjaman, bunga, lamaPinjaman);

	keluar();
	return 0;
}

int validasiPinjaman() {
    int pinjam;
	char check;
	
    if (scanf("%i%c", &pinjam, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai tidak valid!\nMasukan ulang: ");
        return validasiPinjaman();
        printf("\n===============================================\n");
	} else if (pinjam < 0) {
		printf("\nNilai tidak valid!\nInput ulang jumlah pinjaman: ");
		return validasiPinjaman();
        printf("\n===============================================\n");	
	} else {
        return pinjam;
    }
}

int validasiBunga() {
    int bunga;
	char check;
	
    if (scanf("%i%c", &bunga, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai yang anda masukan tidak valid!\nMasukan ulang: ");
        return validasiBunga();
        printf("\n===============================================\n");
	} else if (bunga < 0) {
		printf("\nNilai tidak valid!\nInput ulang: ");
		return validasiBunga();
        printf("\n===============================================\n");	
	} else {
        return bunga;
    }
}

int validasiBulan() {
    int bulan;
	char check;
	
    if (scanf("%i%c", &bulan, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai tidak valid!\nMasukan ulang: ");
        return validasiBulan();
        printf("\n===============================================\n");
	} else if (bulan < 0) {
		printf("\nNilai tidak valid!\nInput ulang: ");
		return validasiBulan();
        printf("\n===============================================\n");
	} else {
        return bulan;
    }
}

int validasiKeluar() {
    int keluar;
	char check;
	
    if (scanf("%i%c", &keluar, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai tidak valid!\nMasukan ulang: ");
        return validasiKeluar();
        printf("\n===============================================\n");
	} else if (keluar < 0 || keluar > 2) {
		printf("\nNilai tidak valid!\nPilih antara 1 atau 2: ");
		return validasiKeluar();
        printf("\n===============================================\n");	
	} else {
        return keluar;
    }
}

void keluar() {
	int choose;
	
	printf("\n=========================================\n");
	printf("Apakah anda ingin mengulang program?\n");
	printf("           1. Tidak  \n");
	printf("           2. Iya      ");
	printf("\n=========================================\n");
	printf("Pilihan Anda: ");
	choose=validasiKeluar();
	system("cls | clear");
	
	if(choose==1){
	printf("=========================================\n");
	printf("||    TERIMA KASIH SUDAH MENGGUNAKAN   ||\n");
	printf("||            PROGRAM OLEH:            ||\n");
	printf("||             KELOMPOK 8              ||\n");
	printf("=========================================\n");
	}
	else {
		main();
	}
}

void hitunganggaran(float pokokPinjaman, float bunga, float lamaPinjaman){

	float angsuranPokok, totalAngsuran, angsuranBulanan, bungaBulanan, totalBunga=0;
	int i;

	bunga=bunga/100;
    angsuranPokok=pokokPinjaman/lamaPinjaman;
    
    printf("================================================================================\n");
    printf("||  Bulan   ||      Bunga       ||   Angsuran Pokok   ||  Angsuran per bulan  ||\n");
	printf("================================================================================\n");        
	for(i=1; i <= lamaPinjaman; i++){
		
        bungaBulanan=(pokokPinjaman-((i-1)*angsuranPokok))*bunga/12;
        angsuranBulanan=bungaBulanan+angsuranPokok;
        totalAngsuran=totalAngsuran+angsuranBulanan;
        totalBunga=totalBunga+bungaBulanan;
        
    	printf("||    %d.    ||  Rp.%.2f     ||  Rp.%.2f       ||   Rp.%.2f      ||\n", i, bungaBulanan, angsuranPokok, angsuranBulanan);
    }
    
    printf("================================================================================\n");
    printf("|| Total Bunga	   	                      ===    Rp.%.2f              ||\n", totalBunga);
    printf("|| Total Angsuran	   	              ===    Rp.%.2f            ||\n", totalAngsuran);
	printf("================================================================================\n");

}