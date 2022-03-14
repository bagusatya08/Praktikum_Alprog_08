#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

void tukar(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

int bubble_sort_pointer(int kumpulan[], int banyak_data){
    int j;
    for ( int i = 0; i < banyak_data; i++){
        for (j = 0; j < banyak_data-i-1; j++){
            if (kumpulan[j]>kumpulan[j+1]){
                tukar(&kumpulan[j], &kumpulan[j+1]);
            }  
        } 
    } 
    return kumpulan[j];
}

int bubble_sort_biasa(int kumpulan[], int banyak_data){

    int tukar,j;

    for ( int i = 0; i < banyak_data; i++){
        for ( j = 0; j < banyak_data-i-1; j++){
            if (kumpulan[j]>kumpulan[j+1]){
                tukar=kumpulan[j];
                kumpulan[j]=kumpulan[j+1];
                kumpulan[j+1]=tukar;
            }  
        } 
    }
    return kumpulan[j];
}

void random_number(int kumpulan[],int banyak_data){

    int angka;
    int low=0, high=180000;
    srand(time(NULL));

//memasukan nilai random ke dalam array
    for (int i = 0; i <banyak_data; i++){
        angka=(rand() % (high-low+1)) + low;
        kumpulan[i]=angka;
        printf("%d ", kumpulan[i]);
    }
}

int main(){

    int kumpulan[70000];
    int banyak_data, pilih_jenis;
    char mengulang[10];

    do{
        system("clear");
        printf("\n+------------------------------+\n");
        printf("| PILIHAN BANYAK DATA          |\n");
        printf("+------------------------------+\n");
        printf("| 1. 1000 DATA                 |\n");
        printf("| 2. 16000 DATA                |\n");
        printf("| 3. 64000 DATA                |\n");
        printf("+------------------------------+\n");    
        printf("| MASUKAN PILIHAN SORTING   : ");
        scanf("%d", &banyak_data);
        printf("+------------------------------+\n");

        if (banyak_data>0 && banyak_data<4){
            if (banyak_data==1){
                banyak_data=1000;
            } else if (banyak_data==2){
                banyak_data=16000;
            } else{
                banyak_data=64000;
            }

            printf("\n+------------------------------+\n");
            printf("| LIST PILIHAN SORTING         |\n");
            printf("+------------------------------+\n");
            printf("| 1. BUBBLE SORT NORMAL        |\n");
            printf("| 2. BUBBLE SORT POINTER       |\n");
            printf("+------------------------------+\n");    
            printf("| MASUKAN PILIHAN SORTING   : ");
            scanf("%d", &pilih_jenis);
            printf("+------------------------------+\n");

            printf("\n+------------------------------+\n");
            printf("| DATA AWAL                    |");
            printf("\n+------------------------------+\n");
            random_number(kumpulan, banyak_data);

            printf("\n+------------------------------+\n");
            printf("| HASIL SORTING                |");
            printf("\n+------------------------------+\n");

            if (pilih_jenis==1||pilih_jenis==2){
                if (pilih_jenis==1){
                    bubble_sort_biasa(kumpulan, banyak_data);
                } else {
                    bubble_sort_pointer(kumpulan, banyak_data);
                }
                
                for (int z = 0; z < banyak_data; z++){
                    printf("%d ", kumpulan[z]);
                }

                //menghitung waktu sorting
                int waktu_ticks= clock();
                printf("\n\nWAKTU PROSES = %f DETIK\n", (float)waktu_ticks/ CLOCKS_PER_SEC);
            } else{
                printf("MASUKAN SESUAI YANG TERTERA\n");
            }
        } else{
            printf("MASUKAN SESUAI YANG TERTERA\n");
        }
        printf("MENGULANG PROGRAM? (y/Y) : ");
        scanf(" %c", mengulang);
    }while(strcmp(mengulang,"y")==0||strcmp(mengulang,"Y")==0);



    return 0;
}