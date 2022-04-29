#include <stdio.h>
#include<stdbool.h>  

int validasi() {
    int tggl;
	char hasil;
	
    if (scanf("%i%c", &tggl, &hasil) != 2 || hasil != '\n') {
    	fflush(stdin);
		printf("\nTanggal yang anda masukan tidak valid!\nMasukan ulang: ");
        return validasi();
        printf("\n-----------------------------------------------\n");
	} else if (tggl > 31 || tggl < 1) {
		printf("\nNilai yang anda masukan tidak valid!\nPilih tanggal [1-31]: ");
		return validasi();
        printf("\n-----------------------------------------------\n");	
	} else {
        return tggl;
    }
}



void printHeader(){
    printf("\t----------------------------------------\n");
    printf("\t|       Aplikasi Penentu Zodiak         |\n");
    printf("\t----------------------------------------\n");
}

int main (){
	while(true){
		printHeader();
		//mendefinisikan variabel input
		char nama_bulan[20];
		char zodiak[50];
		int tanggal;
		char pil[2];
		
		
		//input ke variabel nama_bulan
		printf("\t %-25s : ", "Masukkan Bulan ");
		scanf("%s", &nama_bulan);
		
		//mengubah menjadi lowercase
		char ch;
		int j = 0;
		while (nama_bulan[j]) {
	        ch = nama_bulan[j]; 
	        nama_bulan[j] = tolower(ch); 
	        j++;
	    }
		
		//input ke variabel tanggal
		printf("\t %-25s : ", "Masukkan Tanggal");
		tanggal = validasi();
		
		
		
		//logika menentukan zodiak
		if (strcmp(nama_bulan,"desember") == 0){
	         
	        if (tanggal < 22){
	        	strcpy(&zodiak, "Sagitarius");
			}
	        else {
	        	strcpy(&zodiak, "Capricorn");
			}
	    } else if (strcmp(nama_bulan,"januari") == 0){
	         
	        if (tanggal < 20){
	        	strcpy(&zodiak, "Capricorn");
			}
	        else {
	        	strcpy(&zodiak, "Aquarius");
			}
	    } else if (strcmp(nama_bulan,"februari") == 0){
	         
	        if (tanggal < 19){
	        	strcpy(&zodiak, "Aquarius");
			}
	        else {
	        	strcpy(&zodiak, "Pisces");
			}
	    } else if (strcmp(nama_bulan,"maret") == 0){
	         
	        if (tanggal < 21){
	        	strcpy(&zodiak, "Pisces");
			}
	        else {
	        	strcpy(&zodiak, "Aries");
			}
	    } else if (strcmp(nama_bulan,"april") == 0){
	         
	        if (tanggal < 20){
	        	strcpy(&zodiak, "Aries");
			}
	        else {
	        	strcpy(&zodiak, "Taurus");
			}
	    } else if (strcmp(nama_bulan,"mei") == 0){
	         
	        if (tanggal < 21){
	        	strcpy(&zodiak, "Taurus");
			}
	        else {
	        	strcpy(&zodiak, "Gemini");
			}
	    } else if (strcmp(nama_bulan,"juni") == 0){
	         
	        if (tanggal < 21){
	        	strcpy(&zodiak, "Gemini");
			}
	        else {
	        	strcpy(&zodiak, "Cancer");
			}
	    } else if (strcmp(nama_bulan,"juli") == 0){
	         
	        if (tanggal < 23){
	        	strcpy(&zodiak, "Cancer");
			}
	        else {
	        	strcpy(&zodiak, "Leo");
			}
	    } else if (strcmp(nama_bulan,"agustus") == 0){
	         
	        if (tanggal < 23){
	        	strcpy(&zodiak, "Leo");
			}
	        else {
	        	strcpy(&zodiak, "Virgo");
			}
	    } else if (strcmp(nama_bulan,"september") == 0){
	         
	        if (tanggal < 23){
	        	strcpy(&zodiak, "Virgo");
			}
	        else {
	        	strcpy(&zodiak, "Libra");
			}
	    }  else if (strcmp(nama_bulan,"oktober") == 0){
	         
	        if (tanggal < 23){
	        	strcpy(&zodiak, "Libra");
			}
	        else {
	        	strcpy(&zodiak, "Scorpio");
			}
	    }  else if (strcmp(nama_bulan,"november") == 0){
	         
	        if (tanggal < 22){
	        	strcpy(&zodiak, "Scorpio");
			}
	        else {
	        	strcpy(&zodiak, "Sagitarius");
			}
	    }
	         
		
		//menampilkan hasil zodiak
		printf("\t----------------------------------------\n");
	    printf("\t*     Zodiak Anda adalah %-14s*\n",zodiak);
	    printf("\t----------------------------------------\n");
		printf("\tIngin menggunakan program lagi (y/n) : ");
	    scanf("%s", &pil);
	    
	    if (strcmp(pil,"n") == 0){
			break;
		}
		system("cls || clear");
	}
	printf("\n\t------------PROGRAM SELESAI-------------\n");
}