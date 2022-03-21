#include <stdio.h>
#include<stdbool.h>  

void printHeader(){
    printf("\t----------------------------------------\n");
    printf("\t|   Aplikasi Penghitung Nilai Akhir    |\n");
    printf("\t----------------------------------------\n");
}

int main() {
	
	while(true){
		//mendefinisikan variabel input
	    int absen, tugas1, tugas2, tugas3, quiz, uts, uas;
	    int na;
	    char predikat[2];
	    char pil[2];
	
		printHeader();
		
	    //input ke variabel
	    printf("\t %-30s : ", "Masukkan Jumlah Kehadiran");
	    scanf("%d", &absen);
	    printf("\t %-30s : ", "Masukkan Nilai Tugas 1");
	    scanf("%d", &tugas1);
	    printf("\t %-30s : ", "Masukkan Nilai Tugas 2");
	    scanf("%d", &tugas2);
	    printf("\t %-30s : ", "Masukkan Nilai Tugas 3");
	    scanf("%d", &tugas3);
	    printf("\t %-30s : ", "Masukkan Nilai Quiz");
	    scanf("%d", &quiz);
	    printf("\t %-30s : ", "Masukkan Nilai UTS");
	    scanf("%d", &uts);
	    printf("\t %-30s : ", "Masukkan Nilai UAS");
	    scanf("%d", &uas);
	
	    //menghitung nilai akhir;
	    na = (absen / 15 * 0.05) + ((tugas1 + tugas2 + tugas3) / 3 * 0.2) + (quiz * 0.15) + (uts * 0.3) + (uas * 0.3);
	
	    //logika menentukan nilai akhir
	    if (na <= 45) {
	        strcpy(&predikat, "E");
	    } else if (na < 50) {
	        strcpy(&predikat, "D");
	    } else if (na < 55) {
	        strcpy(&predikat, "D+");
	    } else if (na < 60) {
	        strcpy(&predikat, "C");
	    } else if (na < 65) {
	        strcpy(&predikat, "C+");
	    } else if (na < 75) {
	        strcpy(&predikat, "B");
	    } else if (na < 80) {
	        strcpy(&predikat, "B+");
	    } else {
	        strcpy(&predikat, "A");
	    }
	
		
	    //menampilkan hasil nilai akhir
	    printf("\t----------------------------------------\n");
	    printf("\t*         Nilai akhir anda %-12d*\n",na);
	    printf("\t----------------------------------------\n");
	    printf("\t*         Nilai akhir anda %-12s*\n",predikat);
	    printf("\t----------------------------------------\n");
	    printf("\tIngin menggunakan program lagi (y/n) : ");
	    scanf("%s", &pil);
	    
	    if (strcmp(pil,"n") == 0){
			break;
		}
		system("cls");
	}
	printf("\n\t------------PROGRAM SELESAI-------------\n");
}
