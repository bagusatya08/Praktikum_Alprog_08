#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void tukar(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

void bubble_sort(int kumpulan[], int banyak_data){
    
    for ( int i = 0; i < banyak_data; i++){
        for ( int j = 0; j < banyak_data-i-1; j++){
            if (kumpulan[j]>kumpulan[j+1]){
                tukar(&kumpulan[j], &kumpulan[j+1]);
            }  
        } 
    }
}

void linear_search(int kumpulan[], int dicari){
    
    int n=0;
    while (dicari!=kumpulan[n]){
        n++;
    }
    printf("ANGKA DICARI ADA PADA INDEKS KE-%d\n", n);
}

void random_number(int kumpulan[],int banyak_data){

    int angka;
    int low=0, high=20;
    srand(time(NULL));

//memasukan nilai random ke dalam array
    for (int i = 0; i <banyak_data; i++){
        angka=(rand() % (high-low+1)) + low;
        kumpulan[i]=angka;
        printf("%d ", kumpulan[i]);
    }
}

void insertion_sort(int kumpulan[], int banyak_data){
    
    int tukar;

    for (int i = 1; i < banyak_data; i++){
        tukar=kumpulan[i];

        int j=i-1;

        while (j>=0 && kumpulan[j]>tukar){
            kumpulan[j+1]=kumpulan[j];
            j--;
        }
        kumpulan[j+1]=tukar;
    }
}

int main(){

    int kumpulan[]={};
    int banyak_data;
    int dicari;
    int pilihan_awal;

    printf("MASUKAN BANYAK DATA : ");
    scanf("%d", &banyak_data);
    system("cls");

    printf("DATA AWAL : ");
    random_number(kumpulan, banyak_data);
    printf("\n");

    scanf("%d", &pilihan_awal);

    if (pilihan_awal==1){
        printf("DATA YANG TELAH DIURUTKAN : ");
        bubble_sort(kumpulan, banyak_data);

        for (int z = 0; z < banyak_data; z++){
            printf("%d ", kumpulan[z]);
        }
    } else if(pilihan_awal==2){
        printf("MASUKAN ANGKA YANG DICARI :");
        scanf("%d", &dicari);
        linear_search(kumpulan, dicari);
    } else{
        printf("DATA YANG TELAH DIURUTKAN : ");
        insertion_sort(kumpulan, banyak_data);

        for (int z = 0; z < banyak_data; z++){
            printf("%d ", kumpulan[z]);
        }
    }


    printf("\n");

//menghitung waktu sorting
    int waktu_ticks= clock();
    printf("\n\nWAKTU PROSES = %f DETIK\n", (float)waktu_ticks/ CLOCKS_PER_SEC);

    return 0;
}