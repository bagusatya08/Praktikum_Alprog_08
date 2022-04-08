#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void quit(){
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n+-----------------------------------------------------------------------------+");
	printf("\n|               THANK YOU FOR USING THIS PROGRAM!   				            |");
    printf("\n+-----------------------------------------------------------------------------+");
    printf("\n");
    exit(0);
}

void reset(){
    char pilih, karakter;
    printf("\n\n===============================================================================\n");
    printf("\n[R] Reset							[Q] Quit");
    while(1){
		printf("\n\nMasukkan pilihan: ");
		if(((scanf(" %c%c", &pilih, &karakter)) != 2 || karakter != '\n') && clear()){
			printf("Input Invalid!\n");
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

int clear(){
	while(getchar() != '\n');
	return 1;
}

int validasiInp(){
    int input, angka;
    char karakter;
    
    input = scanf(" %d%c", &angka, &karakter);
    if(input != 2 || angka <=0 || karakter != '\n'){
    	clear();
        fflush(stdin);
        printf("Input invalid! Mohon Masukkan ulang : ");
        validasiInp();
    }
	else {
        return angka;
	}
}

float mean(float data[], int jumlah){
    float sigma = 0;
    int i;

    for(i = 0; i < jumlah; i++){
        sigma = sigma + data[i];
    }
    sigma = sigma / jumlah;

    return sigma;
}

float median(float data[], int jumlah){
    float hasil;
    int mid = jumlah / 2;

    if(jumlah % 2 == 0){
        hasil = (data[mid-1] + data[mid]) / 2;
    }
	else{
        hasil = data[mid];
    }
    return hasil;
}

int modus(float data[], int jumlah, float mod[]){
    int n_angka[jumlah];
    int i, j, k = 0, l = 0;
    int jumlah_tmp, max = 0, status;

    for(i = 0; i < jumlah; i++){
        mod[i] = 0;
        jumlah_tmp = 0;
        for(j = 0; j < jumlah; j++){
            if(data[i] == data[j]){
                jumlah_tmp++;
            }
        }
        if(jumlah_tmp > max){
            max = jumlah_tmp;
        }
        n_angka[i] = jumlah_tmp;
    }

    for(i = 0; i < jumlah; i++){
        status = 0;
        if(n_angka[i] == max){
            k++;
            for(j = 0; j < jumlah; j++){
                if(data[i] == mod[j]){
                    status = 1;
                }
            }
            if(status == 0){
                mod[l] = data[i];
                l++;
            }
        }
    }

    if(jumlah == k){
        return 0;
    }
	else{
        return l;
    }
}

void sortData(float data[], int jumlah){
    int i, j;
    float temp;
    
    for(i = 0; i < jumlah - 1; i++){
	    for(j = 0; j < jumlah - 1; j++){
		    if(data[j+1] < data[j]){
			    temp  = data[j];
			    data[j] = data[j+1];
    			data[j+1] = temp;
		    }
    	}
	}
}

int main(){
    int jumlah, i;
    float meanRes, medianRes, mod[jumlah], modusRes;
    float *alamat, data[jumlah];5

    system("cls");
 	printf("+-----------------------------------------------------------------------------+");
	printf("\n|                          PROGRAM STATISTIKA                         	    |");
    printf("\n+-----------------------------------------------------------------------------+");
    printf("\n\nMasukkan Jumlah Data	: ");
    jumlah = validasiInp();
    printf("\n===============================================================================\n");
    
    alamat = &data;

    for(i = 0; i < jumlah; i++){
        printf("\nMasukan Angka ke-%d : ", i+1);
        alamat[i] = validasiInp();
    }

    sortData(data, jumlah);
    printf("\n\n+-----------------------------------------------------------------------------+");
	printf("\n|                            HASIL HITUNG STATISTIKA                          |");
    printf("\n+-----------------------------------------------------------------------------+");
    printf("\n\nData setelah diurutkan	: ");
        for(i = 0; i < jumlah; i++){
            printf("%.0f ", data[i]);
        }

	medianRes = median(data, jumlah);
    meanRes = mean(data, jumlah);
    modusRes = modus(data, jumlah, mod);

    printf("\n\nMedian Data Tersebut	: %.2f", medianRes);
    printf("\n\nMean Data Tersebut	: %.2f", meanRes);
    if(modusRes == 0){
        printf("\n\nModus Data Tersebut : Tidak Ada !");
    }
	else{
    	printf("\n\nJumlah Modus Data	: %.0f", modusRes);
        printf("\n\nModus Data Tersebut	: ");
        for(i = 0; i < modusRes; i++){
            if(i == 0){
                printf("%.0f", mod[i]);
            }
			else{
                printf(", %.0f", mod[i]);
            }
        }
    }
	reset();
}
