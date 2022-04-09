#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int validasiFiboReku();
int validasiFiboItera();
void ulangi();
int menghitungfibonacci (int n);
int cetak_pilihan(int pilihan);
int FibonacciReku();
int validasiInt();

int main(){
	int pilihan;
	int nilai;
	
	printf("\t\t__________________________________________________________________\n");	
	printf("\t\t ________________________________________________________________\n");
	printf("\t\t||                                                              ||\n");					
	printf("\t\t||                   Program Bilangan Fibonacci	                ||\n");					
	printf("\t\t||..............................................................||\n");					
	printf("\t\t||                     Pilih Pilihan Anda                       ||\n");								
	printf("\t\t||______________________________________________________________||\n");	
	printf("\t\t__________________________________________________________________\n");					
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
    int nilai;
	char check;
	
    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\n\t\tNilai yang anda masukan tidak valid! Masukan ulang: ");
        return validasiInt();
        printf("\n\t\t===============================================\n");
	} else if (nilai <= 0 || nilai >2) {
		printf("\n\t\tNilai yang anda masukan tidak valid! Pilih 1-2: ");
		return validasiInt();
        printf("\n===============================================\n");	
	} else {
        return nilai;
    }
}


int validasiFiboReku(){
	int nilai;
	char check;
	
    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\n\t\tNilai yang anda masukan tidak valid! Masukan ulang: ");
        return validasiFiboReku();
        printf("\n===============================================\n");
	} else if (nilai < 0) {
		printf("\n\t\tNilai yang anda masukan tidak valid! Input antara 0-100: ");
		return validasiFiboReku();	
		printf("\n===============================================\n");
	} else {
        return nilai;
    }
}

int validasiFiboItera(){
	int nilai;
	char check;
	
    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\n\t\tNilai yang anda masukan tidak valid! Masukan ulang: ");
        return validasiFiboItera();
        printf("\n===============================================\n");
	} else if (nilai < 0) {
		printf("\n\t\tNilai yang anda masukan tidak valid!\nInput antara 0-100: ");
		return validasiFiboItera();	
		printf("\n===============================================\n");
	} else {
        return nilai;
    }
}

int cetak_pilihan(int pilihan){
	int nilai;
	int n, first = 0, second = 1, result, i;
	
	system("cls | clear");
    
    if (pilihan==1){
		FibonacciReku();
	} else if (pilihan==2 ){
		printf("\t\t__________________________________________________________________\n");	
		printf("\t\t ________________________________________________________________\n");
		printf("\t\t||                                                              ||\n");					
		printf("\t\t||                   	Program Fibonacci 	             	||\n");					
		printf("\t\t||..............................................................||\n");					
		printf("\t\t||                    Dengan Metode Iteratif	                ||\n");								
		printf("\t\t||______________________________________________________________||\n");	
		printf("\t\t__________________________________________________________________\n");			
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
	int n, pilih, nilai;
	
	printf("\t\t__________________________________________________________________\n");	
	printf("\t\t ________________________________________________________________\n");
	printf("\t\t||                                                              ||\n");					
	printf("\t\t||                   	Program Fibonacci 	             	||\n");					
	printf("\t\t||..............................................................||\n");					
	printf("\t\t||                    Dengan Metode Rekursif	                ||\n");								
	printf("\t\t||______________________________________________________________||\n");	
	printf("\t\t__________________________________________________________________\n");	
	printf("\n\t\tMasukan jumlah bilangan fibonacci: ");	
			
	n=validasiFiboReku();
	
	printf("\t\t==================================\n");
	printf("\n \t\t Hasil bilangan fibonacci adalah: ");
		
	for (j=0; j<n; j++) {						//output printing
		printf("%d  ", menghitungfibonacci(j));
	} 
		
	ulangi();
	return 1;	
}

int menghitungfibonacci (int n){
	if (n<=1) {
		return n;
	} else {
		return (menghitungfibonacci (n-1) + menghitungfibonacci (n-2));
	}
}

void ulangi(){
    char pil[10];
    int nilai;
    
	fflush(stdin);
	printf ("\n\t\tIngin Kembali ke Program? (y/n) : "); 
	scanf("%s", pil);
	
	if(!strcmp(pil, "y") || !strcmp(pil, "Y")){
		system("cls | clear");
		main();
	} else if(!strcmp(pil, "n") || !strcmp(pil, "N")){ 
		system("cls | clear");
		printf("\t\t__________________________________________________________________\n");	
		printf("\t\t ________________________________________________________________\n");
		printf("\t\t||                                                              ||\n");					
		printf("\t\t||           TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI          ||\n");						
		printf("\t\t||..............................................................||\n");				
		printf("\t\t||                     	BY KELOMPOK 08	                        ||\n");								
		printf("\t\t||______________________________________________________________||\n");	
		printf("\t\t__________________________________________________________________\n");
	} else {
		printf("\t\tInput yang Dimasukkan Salah!\n");
		ulangi();
	}
}
