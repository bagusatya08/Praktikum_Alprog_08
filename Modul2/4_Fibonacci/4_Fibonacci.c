#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int validasiFiboReku();
int validasiFiboItera();
void ulangi();
int hitungFibo (int x);
int cetak_pilihan(int pilihan);
int FibonacciReku();
int validasiInt();

int main(){
	int pilihan;
	int nilai;
	
	printf("\t\t==================================\n");
	printf("\t\t         DERET FIBONACCI          \n");
	printf("\t\t             OLEH:                \n");
	printf("\t\t          KELOMPOK 08             \n");
	printf("\t\t==================================\n");						
	printf("\t\t* 1.Fibonacci Rekursif\n");															
	printf("\t\t* 2.Fibonacci Iteratif\n");															
	printf("\t\t..................................................................\n");		
	printf("\t\tPilih salah satu yang akan dijalankan : ");
	pilihan=validasiInt();
	printf("\t\t..................................................................\n");	
			
		if(pilihan == 1 || pilihan == 2){
			cetak_pilihan(pilihan);
		} else {
			return nilai;
		}
		ulangi();
	}
	
int validasiInt() {
    int angka;
	char cek;
	
	    if (scanf("%i%c", &angka, &cek) != 2 || cek != '\n') {
	    	while((cek = getchar()) != '\n' && cek != EOF){
	        }
				printf("\n\t\tNilai yang anda masukan tidak valid! Masukan ulang: ");
		        return validasiInt();
		        printf("\n\t\t===============================================\n");
		} else if (angka <= 0 || angka >2) {
				printf("\n\t\tNilai yang anda masukan tidak valid! Pilih 1-2: ");
				return validasiInt();
		        printf("\n===============================================\n");	
		} else {
	        	return angka;
	    }
	}


int validasiFiboReku(){
	int angka;
	char cek;
	
	    if (scanf("%i%c", &angka, &cek) != 2 || cek != '\n') {
	    	while((cek = getchar()) != '\n' && cek != EOF){
	        }
				printf("\n\t\tNilai yang anda masukan tidak valid! Masukan ulang: ");
		        return validasiFiboReku();
		        printf("\n===============================================\n");
		} else if (angka < 0) {
				printf("\n\t\tNilai yang anda masukan tidak valid! Input antara 0-100: ");
				return validasiFiboReku();	
				printf("\n===============================================\n");
		} else {
	        	return angka;
	    }
	}

int validasiFiboItera(){
	int angka;
	char cek;
	
	    if (scanf("%i%c", &angka, &cek) != 2 || cek != '\n') {
	    	while((cek = getchar()) != '\n' && cek != EOF){
	        }
				printf("\n\t\tNilai yang anda masukan tidak valid! Masukan ulang: ");
		        return validasiFiboItera();
		        printf("\n===============================================\n");
		} else if (angka < 0) {
				printf("\n\t\tNilai yang anda masukan tidak valid!\nInput antara 0-100: ");
				return validasiFiboItera();	
				printf("\n===============================================\n");
		} else {
	        	return angka;
	    }
	}

int cetak_pilihan(int pilihan){
	int nilai;
	int n, first = 0, second = 1, result, i;
	
		system("cls || clear");
	    if (pilihan==1){
			FibonacciReku();
		} else if (pilihan==2 ){
			printf("==================================\n");
			printf("                                  \n");
			printf("         FIBONACCI ITERATIF       \n");
			printf("                                  \n");
			printf("==================================\n");				
			printf("\n\t\tMasukan jumlah bilangan fibonacci: ");	
				
			n=validasiFiboItera();
		
			printf("\t\t==================================\n");
			printf("\n \t\t Hasil Bilangan Fibonaci adalah:  ");
				  
			for (i = 0; i < n; i++){
				if (i <= 1) 
					result = i;
				else{
				    result = first + second;
				    first = second;
				    second = result;
				}
				printf("%d ", result);
			}
		} else {
			return nilai;
		} 
	}

int FibonacciReku(){
	int j = 0;
	int x, pilih, nilai;
	
	printf("\t\t==================================\n");
	printf("\t\t                                  \n");
	printf("\t\t        FIBONACCI REKURSIF       \n");
	printf("\t\t                                  \n");
	printf("\t\t==================================\n");	
	printf("\n\t\tMasukan jumlah bilangan fibonacci: ");	
			
	x=validasiFiboReku();
	
	printf("\t\t==================================\n");
	printf("\n \t\t Hasil bilangan fibonacci adalah: ");
		
	for (j=0; j<x; j++) {						//ngeprint output
		printf("%d  ", hitungFibo(j));
	} 
		
	ulangi();
	return 1;	
}

int hitungFibo (int x){
	if (x<=1) {
		return x;
	} else {
		return (hitungFibo (x-1) + hitungFibo (x-2));
	}
}

void ulangi(){
    char pil[10];
    char cek;
    int angka;
    
		while((cek = getchar()) != '\n' && cek != EOF){
	    }
			printf ("\n\t\tIngin Kembali ke Program? (y/n) : "); 
			scanf("%s", pil);
		
		if(!strcmp(pil, "y") || !strcmp(pil, "Y")){
			system("cls || clear");
			main();
		} else if(!strcmp(pil, "n") || !strcmp(pil, "N")){ 
			system("cls || clear");
			printf("\t\t==================================\n");
			printf("\t\t                                  \n");
			printf("\t\t         TERIMAKASIH BANYAK        \n");
			printf("\t\t                                  \n");
			printf("\t\t==================================\n");
		} else {
			printf("\t\tInput yang Dimasukkan Salah!\n");
		}
	}
