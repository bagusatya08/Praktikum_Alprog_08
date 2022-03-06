#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int kumpulan[7000];
    int angka, tukar;
    int lower=0, upper=70000;

//generate random number
    srand(time(NULL));

    printf("\nBUBBLE SORT\n");

    printf("\nDATA SEBELUM DI SORTING : \n");
//memasukan nilai random ke dalam array
    for (int i = 0; i <1000; i++){
        angka=(rand() % (upper-lower+1)) + lower;
        kumpulan[i]=angka;
        printf("%d ", kumpulan[i]);
    }

    printf("\n\n=====================================================================================================================================\n\n");

//bubble sort
    for (int i = 0; i < 1000; i++){
        for (int j = 0; j < 1000-i-1; j++){
            if (kumpulan[j]>kumpulan[j+1]){
                tukar=kumpulan[j];
                kumpulan[j]=kumpulan[j+1];
                kumpulan[j+1]=tukar;
            }  
        } 
    }

    printf("DATA SETELAH DI SORTING : \n");
//pencetakan hasil sorting
    for (int i = 0; i < 1000; i++){
        printf("%d ", kumpulan[i]);
    }
    
    printf("\n");

//menghitung waktu sorting
    int waktu_ticks= clock();
    printf("\nWAKTU PROSES = %f DETIK\n", (float)waktu_ticks/ CLOCKS_PER_SEC);

    return 0;
}