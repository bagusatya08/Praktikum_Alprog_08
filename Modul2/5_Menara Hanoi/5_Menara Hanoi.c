#include <stdio.h>
#include <stdlib.h>

int validasiKeluar();
void keluar();
int validasiInt();
int validasiHanoi();
void hitunghanoi(int n, char a, char b, char c);
void rekursifhanoi(int n, char a, char b, char c);
void iteratifhanoi(int n, char tiangA, char tiangB, char tiangC);

int main() {
	int menu;
	int m;
	
	printf("==================================\n");
	printf("          PROGRAM HANOI           \n");
	printf("             OLEH:                \n");
	printf("          KELOMPOK 8              \n");
	printf("==================================\n");
	system("pause");
	system("cls | clear");
	printf("==================================\n");
	printf("               MENU               \n");
	printf("           MENARA HANOI         \n\n");
	printf("      1.Hanoi Rekursif        \n");
	printf("      2.Hanoi Iteratif        \n");
	printf("      3.Keluar             \n");
	printf("==================================\n");
	printf("Masukan angka yang anda inginkan: ");
	menu=validasiInt();
	system("cls | clear");
	if (menu==1) {
		rekursifhanoi(m, 'A', 'B', 'C');
	} else if (menu==2) {
		iteratifhanoi(m, 'A', 'B', 'C');
	} else {
		printf("=========================================\n");
		printf("    			TERIMA KASIH ^^		   	\n");
		printf("=========================================\n");
	}
	return 0;
}

int validasiKeluar() {
    int nilai;
	char check;
	
    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai tidak valid!\nMasukan ulang: ");
        return validasiKeluar();
        printf("\n===============================================\n");
	} else if (nilai < 0 || nilai > 2) {
		printf("\nNilai tidak valid!\nSilakan pilih antara 1 atau 2: ");
		return validasiKeluar();
        printf("\n===============================================\n");	
	} else {
        return nilai;
    }
}

void keluar() {
	int choose;
	
	printf("\n=========================================\n");
	printf("Apakah anda ingin mengulang program?\n");
	printf("           1. Tidak  \n");
	printf("           2. Iya      ");
	printf("\n=========================================\n");
	printf("Masukkan pilihan Anda: ");
	choose=validasiKeluar();
	system("cls | clear");
	
	if(choose==1){
	printf("===========================================\n");
	printf("	    		TERIMA KASIH			   \n");
	printf("===========================================\n");
	}
	else {
		main();
	}
}


int validasiInt() {
    int nilai;
	char check;
	
    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai tidak valid!\nMasukan ulang: ");
        return validasiInt();
        printf("\n===============================================\n");
	} else if (nilai < 0 || nilai >3) {
		printf("\nNilai tidak valid!\nPilih antara 1 sampai 3: ");
		return validasiInt();
        printf("\n===============================================\n");	
	} else {
        return nilai;
    }
}

int validasiHanoi() {
    int hanoi;
	char check;
	
    if (scanf("%i%c", &hanoi, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai tidak valid!\nMohon masukan angka: ");
        return validasiHanoi();
        printf("\n===============================================\n");
	} else if (hanoi < 0) {
		printf("\nNilai tidak valid!\nMohon masukan bilangan: ");
		return validasiHanoi();
        printf("\n===============================================\n");	
	} else {
        return hanoi;
    }
}

void hitunghanoi(int n, char a, char b, char c) {
	if (n==1) {
		printf("Pindahkan cakram paling atas dari tiang %c ke tiang %c\n", a, c);
	} else {
		hitunghanoi(n-1,a,c,b);
        hitunghanoi(1,a,b,c);
        hitunghanoi(n-1,b,a,c);
	}
}

void rekursifhanoi(int n, char a, char b, char c) {
	int m; //jumlah cakram
	char x, y, z; //tiang
	int pilih, langkah;
	
	printf("==================================\n");
	printf("          PROGRAM HANOI           \n");
	printf("            REKURSIF              \n");
	printf("==================================\n");
	printf("Masukan jumlah cakram yang diinginkan: ");
	m=validasiHanoi();
	system("cls | clear");
	
	langkah=(1<<m)-1;
	
	//output hasil
	printf("\nLangkah minimum dalam memindahkan %d cakram yaitu: %d\n\n", m, langkah);
	printf("Langkah-langkah pemindahan cakram: \n\n");
	hitunghanoi(m, 'A', 'B', 'C');
	
	keluar();
}

void iteratifhanoi(int n, char tiangA, char tiangB, char tiangC) {
	int m; //variabel jumlah cakram
	int i; //variabel perulangan
	int pilih, langkah;
	char tiang[3];
	tiang[0]=tiangA;
    tiang[1]=tiangB;
    tiang[2]=tiangC;
	
	printf("==================================\n");
	printf("          PROGRAM HANOI           \n");
	printf("            ITERATIF              \n");
	printf("==================================\n");
	printf("Masukan jumlah cakram yang diinginkan: ");
	m=validasiHanoi();
	system(" cls | clear");
	
	langkah=(1<<m)-1;
	
	//source code output hasil
	printf("\nLangkah minimum untuk dapat memindahkan %d cakram yaitu: %d\n\n", m, langkah);
	printf("Langkah-langkah pemindahan cakram: \n\n");
    if (m%2==0){
        tiang[1] = tiangC;
        tiang[2] = tiangB;
    }
    for(i = 1; i <=langkah; i++){
        printf("Pindahkan cakram paling atas dari tiang %c ke tiang %c\n", tiang[(i&i-1)%3], tiang[((i|i-1)+1)%3]);
    }
	
	keluar();
}