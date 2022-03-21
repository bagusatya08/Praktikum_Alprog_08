// Nama 	: Jesica Syalomitha Sule Ulang
// NIM 		: 2105551043
// Kelompok 	: 8

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int pilihan;
int matriksA[10][10];
int matriksB[10][10];
int matriksC[10][10];
int i, j, k, barisA, barisB, kolomA, kolomB, sigma = 0; 

void quit(){
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n+-----------------------------------------------------------------------------+");
	printf("\n|               TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI!    				|");
    printf("\n+-----------------------------------------------------------------------------+");
    printf("\n");
    exit(0);
}

int clear(){
	while(getchar() != '\n');
	return 1;
}

int validasiInt(){
    int input, angka;
    char karakter;
  
	input = scanf(" %d%c", &angka, &karakter);
    if(input != 2 || karakter != '\n'){
        clear();
        printf("Input Invalid! Mohon masukkan ulang : ");
       	validasiInt();
    }
	else{
        return angka;
	}
}

int validasiInt2(){
    int input, angka;
    char karakter;
    
    input = scanf(" %d%c", &angka, &karakter);
    if(input != 2 || angka <=0 || karakter != '\n'){
    	clear();
        fflush(stdin);
        printf("Input invalid! Mohon Masukkan ulang : ");
        validasiInt2();
    }
	else {
        return angka;
	}
}

void reset(){
    char pilih, karakter;
    printf("\n===============================================================================\n");
    printf("\n[R] Reset							[Q] Quit");
    while(1){
		printf("\n\nMasukkan pilihan: ");
		if(((scanf(" %c%c", &pilih, &karakter)) != 2 || karakter != '\n') && clear()){
			printf("Input Invalid! \n");
			printf("\n[R] Reset							[Q] Quit");
 		}
		else{
			if(pilih == 'R' || pilih == 'r'){
				main();
			}
			else if(pilih == 'Q' || pilih == 'q'){
				quit();
			}
			else{
				printf("Input Invalid!\n");
				printf("\n[R] Reset							[Q] Quit");
			}
		}	
	}
}

void header(){
	if(pilihan == 1){
		printf("+-----------------------------------------------------------------------------+");
		printf("\n|              PERKALIAN MATRIKS ORDO [%d] x [%d] DENGAN [%d] x [%d]              |", barisA, kolomA, barisB, kolomB);
    	printf("\n+-----------------------------------------------------------------------------+\n");
	}
	else if(pilihan == 2){
		printf("+-----------------------------------------------------------------------------+");
		printf("\n|             PENJUMLAHAN MATRIKS ORDO [%d] x [%d] DENGAN [%d] x [%d]             |", barisA, kolomA, barisB, kolomB);
    	printf("\n+-----------------------------------------------------------------------------+\n");
	}	
	else{
		printf("+-----------------------------------------------------------------------------+");
		printf("\n|                       TRANSPOSE MATRIKS ORDO [%d] x [%d]                      |", barisA, kolomA);
		printf("\n+-----------------------------------------------------------------------------+\n");
	}
}

void perkalian(){
	for(i = 0; i < barisA; i++){
        for(j = 0; j < kolomB; j++){
            for(k = 0; k < kolomB; k++){
                sigma = sigma + matriksA[i][k] * matriksB[k][j];
            }
            matriksC[i][j] = sigma;
            sigma = 0;
        }
    }
    //cetak matriks a
    system("cls");
	header();
	printf("\n   - Matriks A :\n\n");
	for(i = 0; i < barisA; i++){
		for(j = 0; j < kolomA; j++){
			printf("	%d", matriksA[i][j]);
		}
		printf("\n");
	}
	//cetak matriks b
	printf("\n===============================================================================\n");
	printf("\n   - Matriks B :\n\n");
	for(i = 0; i < barisB; i++){
		for(j = 0; j < kolomB; j++){
			printf("	%d", matriksB[i][j]);
		}
		printf("\n");
	}
	//hasil kali matriks
	printf("\n===============================================================================\n");
    printf("\n   - Hasil Perkalian Matriks :\n\n");
    for(i = 0; i < barisA; i++){
        for(j = 0; j < kolomB; j++){
            printf("	%d", matriksC[i][j]);
        }
        printf("\n");
    }
    reset();
}

void penjumlahan(){
	for(i = 0; i < barisA;i++){
        for(j = 0; j < kolomA; j++){
           matriksC[i][j] = matriksA[i][j] + matriksB[i][j];
        }
    }
	system("cls");
	header();
	//cetak matriks a
	printf("\n   - Matriks A : \n\n");
	for(i = 0; i < barisA; i++){
		for(j = 0; j < kolomA; j++){
			printf("	%d", matriksA[i][j]);
		}
		printf("\n");
	}
	//cetak matriks b
	printf("\n===============================================================================\n");
	printf("\n   - Matriks B : \n\n");
	for(i = 0; i < barisB; i++){
		for(j = 0; j < kolomB; j++){
			printf("	%d", matriksB[i][j]);
		}
		printf("\n");
	}
	//cetak hasil jumlah
	printf("\n===============================================================================\n");
	printf ("\n   - Hasil Penjumlahan Matriks: \n\n");
    for(i = 0; i < barisA; i++){
        for(j = 0; j < kolomA; j++){
           printf("	%d", matriksC[i][j]);
        }
       printf("\n");
    }	
    reset();
}

void transpose(){
	system("cls");
	header();
	printf("\n   - Matriks :\n\n");
	for(i = 0; i < barisA; i++){
		for(j = 0; j < kolomA; j++){
			printf("	%d", matriksA[i][j]);
		}
	printf("\n");
	}
	printf("\n===============================================================================\n");
	printf ("\n   - Hasil Transpose	: \n\n");
	for(i = 0; i < kolomA; i++){
        for(j = 0; j < barisA; j++){
           matriksB[i][j] = matriksA[j][i];
           printf("	%d", matriksB[i][j]);
        }
        printf ("\n");
    }	
	reset();
}

void inputMatriks(){
	system("cls");
	if (pilihan == 1 || pilihan == 2){
		if (pilihan == 1){
			printf("+-----------------------------------------------------------------------------+");
			printf("\n|                              PERKALIAN MATRIKS                              |");
    		printf("\n+-----------------------------------------------------------------------------+\n");
    	}
		else{
			printf("+-----------------------------------------------------------------------------+");
			printf("\n|                             PENJUMLAHAN MATRIKS                             |");
    		printf("\n+-----------------------------------------------------------------------------+\n");
    	}
		printf("\nMasukkan Jumlah Baris Matriks A : ");
	    barisA = validasiInt2();
	    printf("\nMasukkan Jumlah Kolom Matriks A : ");
	    kolomA = validasiInt2(); 
	    printf("\nMasukkan Jumlah Baris Matriks B : ");
	    barisB = validasiInt2();  
	    printf("\nMasukkan Jumlah Kolom matriks B : ");
	    kolomB = validasiInt2();  
	}
	//perkalian matriks
	if (pilihan == 1 && kolomA != barisB || pilihan == 1 && kolomB != barisA ){
		printf("Jumlah BARIS Matriks Pertama Harus SAMA Dengan Jumlah KOLOM Matriks Kedua !");
		getch();
		system("cls");
		inputMatriks();
	}
	//penjumlahan matriks
    else if (pilihan == 2 && barisA != barisB || pilihan == 2 && kolomA != kolomB){
   		printf("Jumlah BARIS dan KOLOM Kedua Matriks Harus SAMA !");
		getch();
		system("cls");
		inputMatriks();
	}
	//input elemen matriks
  	else if (pilihan == 2|| pilihan == 1){
  		i = 0;
		j = 0;
		system("cls");
		header(); 	
	    while (i < barisA){
   		    while(j < kolomA){
   			    printf("\nMasukkan Elemen Matriks A [%d], [%d]	: ", i+1, j+1);
				matriksA[i][j] = validasiInt(); 
				j++;
   	   		}
   	   	 	i++;
   	    	j = 0;
   		}  
		printf("\n===============================================================================\n");
			
		i = 0;
		j = 0;
	  	while(i < barisB){
			while(j < kolomB){
				printf("\nMasukkan Elemen Matriks B [%d, [%d]	: ", i+1,j+1);
				matriksB[i][j] = validasiInt(); 
				j++;   
			}
			i++;
			j = 0;
		}
   		
		if(pilihan == 1){
			perkalian();
		}
		else{
			penjumlahan();
		}
	}
	else if (pilihan == 3){
		i = 0; 
		j = 0;
		printf("+-----------------------------------------------------------------------------+");
		printf("\n|                              TRANSPOSE MATRIKS                              |");
		printf("\n+-----------------------------------------------------------------------------+\n");
		printf("\nMasukkan Jumlah Baris Matriks	: ");
		barisA = validasiInt2(); 
		printf("\nMasukkan Jumlah kolom Matriks	: ");
		kolomA = validasiInt2();
	   	
		system("cls"); 
		header();  	
		while(i < barisA){
  			while(j < kolomA){
   			    printf("\nMasukkan Elemen Matriks [%d], [%d]	: ", i+1, j+1);
				matriksA[i][j] = validasiInt(); 
				j++;
			}
			i++;
			j = 0;
		}
    transpose();
   }
}

int main(){
	char karakter;
	system("cls");
	printf("+-----------------------------------------------------------------------------+");
	printf("\n|                         PROGRAM OPERASI MATRIKS                             |");
    printf("\n+-----------------------------------------------------------------------------+");
    printf("\n|   Pilih Menu Program :                                                      |");
    printf("\n|                                                                             |");
	printf("\n|      1. Perkalian                                                           |");
	printf("\n|      2. Penjumlahan                                                         |");
	printf("\n|      3. Transpose                                                           |");
	printf("\n|      4. Keluar                                                              |");
	printf("\n+-----------------------------------------------------------------------------+"); 
	while(1){
        printf("\nMasukkan pilihan: ");
        if (scanf("%d%c", &pilihan, &karakter) != 2 || karakter != '\n') {
            printf("\nInput Invalid! Mohon hanya memasukkan angka/bilangan bulat 1 - 4 !\n");
            fflush(stdin);
        } else {
            if (pilihan == 1 || pilihan == 2 || pilihan == 3){
                inputMatriks();
                break;
            } else if (pilihan == 4){
                quit();
                break;
            } else {
                printf("\nInput Invalid! Mohon hanya memasukkan angka/bilangan bulat 1 - 4 !\n");
            }
        }
    }
}
