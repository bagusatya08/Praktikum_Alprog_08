#include <stdio.h>
#include<stdbool.h>  

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
		scanf("%d", &pokok);
		printf("\t%-22s   : ","Besar Bunga (%)");
		scanf("%d", &bunga_input);
		printf("\t%-22s   : ","Lama Pinjaman (bulan)");
		scanf("%d", &bulan);
		
	
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
