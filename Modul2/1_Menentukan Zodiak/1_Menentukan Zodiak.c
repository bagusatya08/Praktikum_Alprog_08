#include <stdio.h>
#include <stdlib.h>

int validasiPilih();
int validasiTanggal();
int validasiBulan();
void choose();

int main() {
	int tanggal;
	int bulan;
	
	printf("============================================\n");
	printf("	PROGRAM ZODIAK OLEH KELOMPOK 8			\n");
	printf("============================================\n");
	
	printf("Masukan tanggal lahir Anda (1-31): ");
	tanggal=validasiTanggal();
	printf("1 = Januari \n");
	printf("2 = Februari \n");
	printf("3 = Maret \n");
	printf("4 = April \n");
	printf("5 = Mei \n");
	printf("6 = Juni \n");
	printf("7 = Juli \n");
	printf("8 = Agustus \n");
	printf("9 = September \n");
	printf("10 = Oktober \n");
	printf("11 = November \n");
	printf("12 = Desember \n");
	printf("Masukan bulan lahir Anda (1-12): ");
	bulan=validasiBulan();
	printf("-----------------------------------------------\n\n");
	
	if ((tanggal>=21&&tanggal<=31 && bulan==3) || (tanggal>=1&&tanggal<=19 && bulan==4)) {
		printf("         Zodiak Anda : Aries          \n");
	} else if ((tanggal>=20&&tanggal<=30 && bulan==4) || (tanggal>=1&&tanggal<=20 && bulan==5)) {
		printf("         Zodiak Anda : Taurus         \n");
	} else if ((tanggal>=21&&tanggal<=31 && bulan==5) || (tanggal>=1&&tanggal<=20 && bulan==6)) {
		printf("         Zodiak Anda : Gemini         \n");
	} else if ((tanggal>=21&&tanggal<=30 && bulan==6) || (tanggal>=1&&tanggal<=22 && bulan==7)) {
		printf("         Zodiak Anda : Cancer         \n");
	} else if ((tanggal>=23&&tanggal<=31 && bulan==7) || (tanggal>=1&&tanggal<=22 && bulan==8)) {
		printf("         Zodiak Anda : Leo            \n");
	} else if ((tanggal>=23&&tanggal<=31 && bulan==8) || (tanggal>=1&&tanggal<=22 && bulan==9)) {
		printf("         Zodiak Anda : Virgo          \n");
	} else if ((tanggal>=23&&tanggal<=30 && bulan==9) || (tanggal>=1&&tanggal<=22 && bulan==10)) {
		printf("         Zodiak Anda : Libra          \n");
	} else if ((tanggal>=23&&tanggal<=31 && bulan==10) || (tanggal>=1&&tanggal<=21 && bulan==11)) {
		printf("         Zodiak Anda : Scorpio        \n");
	} else if ((tanggal>=22&&tanggal<=30 && bulan==11) || (tanggal>=1&&tanggal<=21 && bulan==12)) {
		printf("         Zodiak Anda : Sagitarius     \n");
	} else if ((tanggal>=22&&tanggal<=31 && bulan==12) || (tanggal>=1&&tanggal<=19 && bulan==1)) {
		printf("         Zodiak Anda : Capricorn      \n");
	} else if ((tanggal>=20&&tanggal<=31 && bulan==1) || (tanggal>=1&&tanggal<=18 && bulan==2)) {
		printf("         Zodiak Anda : Aquarius       \n");
	} else if ((tanggal>=19&&tanggal<=29 && bulan==2) || (tanggal>=1&&tanggal<=20 && bulan==3)) {
		printf("         Zodiak Anda : Pisces         \n");
	} else {
		printf("Maaf angka yang Anda masukan salah!\n");
	}
	printf("\n-----------------------------------------------\n");
	
	choose();
	return 0;
}

//validasi saat melakukan input pilihan keluar program
int validasiPilih() {
    int pilih;
	char check;
	
    if (scanf("%i%c", &pilih, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai yang anda masukan tidak valid!\nMasukan ulang: ");
        return validasiPilih();
        printf("\n===============================================\n");
	} else if (pilih < 0 || pilih >2) {
		printf("\nNilai yang anda masukan tidak valid!\nPilih antara 1 atau 2: ");
		return validasiPilih();
        printf("\n===============================================\n");	
	} else {
        return pilih;
    }
}

//validasi saat input tanggal
int validasiTanggal() {
    int tanggal;
	char check;
	
    if (scanf("%i%c", &tanggal, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nTanggal tidak valid!\nSilakan masukan ulang: ");
        return validasiTanggal();
        printf("\n===============================================\n");
	} else if (tanggal > 31 || tanggal <= 0) {
		printf("\nTanggal tidak valid!\nSilakan input antara tanggal 1 sampai 31: ");
		return validasiTanggal();
        printf("\n===============================================\n");	
	} else {
        return tanggal;
    }
}

//validasi saat input bulan
int validasiBulan() {
    int bulan;
	char check;
	
    if (scanf("%i%c", &bulan, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nBulan tidak valid!\nSilakan masukan ulang: ");
        return validasiBulan();
        printf("\n===============================================\n");
	} else if (bulan > 12 || bulan <= 0) {
		printf("\nBulan tidak valid!\nSilakan input antara bulan 1 sampai 12: ");
		return validasiBulan();
        printf("\n===============================================\n");
	} else {
        return bulan;
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
	
	if(pilih==1){
	printf("============================================\n");
	printf("				THANK YOU ^^				\n");
	printf("============================================\n");
	}
	else {
		main();
	}
}