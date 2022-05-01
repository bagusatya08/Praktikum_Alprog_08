#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>  

//validasipinjaman
int validasipinjam() {
    int pinjam;
	char hasil;
	
    if (scanf("%i%c", &pinjam, &hasil) != 2 || hasil != '\n') {
    	fflush(stdin);
		printf("\nJumlah pinjaman yang anda masukan tidak valid!!\nSilakan masukan ulang:Rp. ");
		
        return validasipinjam();
        printf("\n------------------------------------------------------------\n");
	} else if (pinjam > 2500000 || pinjam < 100000) {
    	printf("\nJumlah pinjaman yang anda masukan tidak valid!!\nSilakan masukan ulang:Rp. ");
		
		return validasipinjam();
        printf("\n------------------------------------------------------------\n");	
	} else {
        return pinjam;
    }
}

//validasibunga
int validasibunga() {
    int bunga;
	char hasil;
	
    if (scanf("%i%c", &bunga, &hasil) != 2 || hasil != '\n') {
    	fflush(stdin);
		printf("\nbunga pinjaman yang anda masukan tidak sesuai!!!\nSilakan masukan ulang: ");
		
        return validasibunga();
        printf("\n------------------------------------------------------------\n");
	} else if (bunga > 30 || bunga < 10) {
		printf("\nbunga pinjaman yang anda masukan tidak sesuai!!! \nSilakan masukan ulang: ");
		
		return validasibunga();
        printf("\n------------------------------------------------------------\n");	
	} else {
        return bunga;
    }
}

//validasilpinjam
int validasilpinjam() {
    int lpinjam;
	char hasil;
	
    if (scanf("%i%c", &lpinjam, &hasil) != 2 || hasil != '\n') {
    	fflush(stdin);
		printf("\nLama pinjaman yang anda masukan tidak sesuai!!!\nSilakan masukan ulang: ");
		
        return validasilpinjam();
        printf("\n------------------------------------------------------------\n");
	} else if (lpinjam > 36 || lpinjam < 0) {
		printf("\nLama pinjaman yang anda masukan tidak sesuai!!! \nSilakan masukan ulang: ");
		
		return validasilpinjam();
        printf("\n------------------------------------------------------------\n");	
	} else {
        return lpinjam;
    }
}


//variabel global
int total_bunga;
int total_angsuran;

void printHeader(){
    printf("\t----------------------------------------------------------------\n");
    printf("\t|                Aplikasi Penghitung Angsuran                  |\n");
    printf("\t----------------------------------------------------------------\n");
}

//fungsi output dan hitung angsuran setiap bulan
void hitung_angsuran(int pokok, int bulan, int angsuran_pokok, double bunga){
	int bunga_now = hitung_bunga(pokok,bulan,angsuran_pokok,bunga);
	int angsuran_now = angsuran_pokok + bunga_now;
	
	total_bunga = total_bunga + bunga_now;
	total_angsuran = total_angsuran + angsuran_now;
	printf("\t|  %-3d  | Rp.%-7d |      Rp.%-10d |     Rp.%-12d|\n",bulan,bunga_now,angsuran_pokok,angsuran_now);
}

//fungsi menghitung angsuran
int hitung_bunga(int pokok, int bulan, int angsuran_pokok, double bunga){
	int makan = (pokok - ((bulan - 1) * angsuran_pokok)) * ((double) bunga / 12);
	return makan;
}

int main (){
	while(true){
		printHeader();
		//definisi variabel input
		int pokok,bulan,angsuran_pokok,bunga_input;
		double bunga;
		char pil[2];
		
		//menerima input
		printf("\t%-22s   : Rp. ","Pokok Pinjaman");
		pokok = validasipinjam();
		printf("\t%-22s   : ","Besar Bunga (%)");
		bunga_input = validasibunga();
		printf("\t%-22s   : ","Lama Pinjaman (bulan)");
		bulan = validasilpinjam();
		
	
		//menghitung bunga dalam bentuk double
		bunga = bunga_input * 0.01;
		
		//menghitung angsuran pokok		
		angsuran_pokok = pokok/bulan;
		
		//output header
		printf("\n\t----------------------------------------------------------------\n");
		printf("\t| %3s |   %-8s |   %-15s  | %-15s |\n","Bulan","Bunga","Angsuran Pokok","Angsuran Per Bulan");
		printf("\t----------------------------------------------------------------\n");
		
		//iterasi setiap bulan
		int i;
		for(i = 1;i<=bulan;i++) {
			hitung_angsuran(pokok,i,angsuran_pokok,bunga);
		}
		
		
		//output total
		printf("\t----------------------------------------------------------------\n");
		printf("\t|%40s |     Rp.%-12d|\n","Total Bunga",total_bunga);
		printf("\t----------------------------------------------------------------\n");
		printf("\t|%40s |     Rp.%-12d|\n","Total Angsuran",total_angsuran);
		printf("\t----------------------------------------------------------------\n");
		
		printf("\tIngin menggunakan program lagi (y/n) : ");
	    scanf("%s", &pil);
	    
	    if (strcmp(pil,"n") == 0){
			break;
		}
		system("cls || clear");
	}
	printf("\t-------------------------PROGRAM SELESAI------------------------\n");
}
