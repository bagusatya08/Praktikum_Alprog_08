#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

void bubble_sort(int kumpulan[], int banyak_data);
void linear_search(int kumpulan[], int dicari);
void insertion_sort(int kumpulan[], int banyak_data);
void random_number(int kumpulan[],int banyak_data);

int main(){

    int kumpulan[70000];
    int banyak_data, dicari, pilihan_program=0, pilihan_searching=0, pilihan_sorting=0;
    char mengulang[10];

    do{
        system("clear");
        printf("\n+------------------------------+\n");
        printf("| MASUKAN BANYAK DATA   : ");
        scanf("%d", &banyak_data);
        printf("+------------------------------+\n");
        system("clear");

        printf("+------------------------------+\n");
        printf("| LIST PILIHAN PROGRAM         |\n");
        printf("+------------------------------+\n");
        printf("| 1. SEARCHING                 |\n");
        printf("| 2. SORTING                   |\n");
        printf("+------------------------------+\n");
        printf("| MASUKAN PILIHAN PROGRAM   : ");
        scanf("%d", &pilihan_program);

        system("clear");
        if (pilihan_program==1 || pilihan_program==2){
            if (pilihan_program==1){
                printf("+------------------------------+\n");
                printf("| LIST PILIHAN SEARCHING       |\n");
                printf("+------------------------------+\n");
                printf("| 1. SEQUENTIAL SEARCH         |\n");
                printf("| 2. BINARY SEARCH             |\n");
                printf("+------------------------------+\n");
                printf("| MASUKAN PILIHAN SEARCHING : ");
                scanf("%d", &pilihan_searching);
                system("clear");

                if (pilihan_searching==1||pilihan_searching==2){
                    
                    //random number generator
                    printf("\n+------------------------------+\n");
                    printf("| DATA AWAL                    |");
                    printf("\n+------------------------------+\n");
                    random_number(kumpulan, banyak_data);
                    printf("\n");

                    printf("\n+------------------------------+\n");
                    printf("| MASUKAN ANGKA SEARCHING      |\n");
                    printf("+------------------------------+\n");
                    scanf("%d", &dicari);
                    printf("\n+------------------------------+\n");
                    printf("| HASIL SEARCHING              |");
                    printf("\n+------------------------------+\n");

                    if (pilihan_searching==1){
                        linear_search(kumpulan, dicari);
                    } else {
                        printf("on progress\n");
                    }
                } else{
                    printf("MASUKAN PILIHAN YANG SESUAI\n");

                }
                
            } else if (pilihan_program==2){
                printf("+------------------------------+\n");
                printf("| LIST PILIHAN SORTING         |\n");
                printf("+------------------------------+\n");
                printf("| 1. BUBBLE SORT               |\n");
                printf("| 2. INSERTION SORT            |\n");
                printf("| 3. QUICK SORT                |\n");
                printf("+------------------------------+\n");    
                printf("| MASUKAN PILIHAN SORTING   : ");
                scanf("%d", &pilihan_sorting);
                system("clear");

                if (pilihan_sorting>0&&pilihan_sorting<4){
                    //random number generator
                    printf("\n+------------------------------+\n");
                    printf("| DATA AWAL                    |");
                    printf("\n+------------------------------+\n");
                    random_number(kumpulan, banyak_data);
                    printf("\n");

                    printf("\n+------------------------------+\n");
                    printf("| HASIL SORTING                |");
                    printf("\n+------------------------------+\n");

                    if (pilihan_sorting==1){
                        bubble_sort(kumpulan, banyak_data);
                    } else if (pilihan_sorting==2){
                        insertion_sort(kumpulan, banyak_data);
                    } else {
                    /* code */
                    }

                    for (int z = 0; z < banyak_data; z++){
                        printf("%d ", kumpulan[z]);
                    }
                } else{
                    printf("MASUKAN PILIHAN YANG SESUAI\n");
                }
            }
        //menghitung waktu sorting
        int waktu_ticks= clock();
        printf("\n\nWAKTU PROSES = %f DETIK\n", (float)waktu_ticks/ CLOCKS_PER_SEC);

        } else{
            printf("MASUKAN PILIHAN YANG SESUAI\n");
        }
    printf("MENGULANG PROGRAM (Y/y) : ");
    scanf(" %c", mengulang);
    }while(strcmp(mengulang, "y")==0 || strcmp(mengulang,"Y")==0);

    return 0;
}

void bubble_sort(int kumpulan[], int banyak_data){
    
    int tukar,j,i;

    for ( i = 0; i < banyak_data; i++){
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

void linear_search(int kumpulan[], int dicari){
    
    int n=0;
    while (dicari!=kumpulan[n]){
        n++;
    }
    printf("TERLETAK PADA INDEKS KE-%d\n", n);
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

void random_number(int kumpulan[],int banyak_data){

    int angka;
    int low=0, high=180000;
    srand(time(NULL));

    for (int i = 0; i <banyak_data; i++){
        angka=(rand() % (high-low+1)) + low;
        kumpulan[i]=angka;
        printf("%d ", kumpulan[i]);
    }
}
