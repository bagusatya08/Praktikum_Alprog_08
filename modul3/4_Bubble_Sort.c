#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int validation(char banyak_data[]);
int validation2(char pilih_jenis[]);
int bubble_sort_pointer(int kumpulan[], int banyak_data);
int bubble_sort_biasa(int kumpulan[], int banyak_data);
void random_number(int kumpulan[],int banyak_data);

int main(){

    int kumpulan[70000];
    char pilih_jenis[100];
    char mengulang[10];
    char banyak_data[100];
    int jumlah_data;

    do{
        printf("\n+------------------------------+\n");
        printf("| PILIHAN BANYAK DATA          |\n");
        printf("+------------------------------+\n");
        printf("| 1. 1000 DATA                 |\n");
        printf("| 2. 16000 DATA                |\n");
        printf("| 3. 64000 DATA                |\n");
        printf("+------------------------------+\n");    
        printf("| MASUKAN PILIHAN SORTING   : ");
        scanf("%s", banyak_data);
        printf("+------------------------------+\n");

        if (validation(banyak_data)>0 && validation(banyak_data)<4){
            if (validation(banyak_data)==1){
                jumlah_data=1000;
            } else if (validation(banyak_data)==2){
                jumlah_data=16000;
            } else{
                jumlah_data=64000;
            }

            printf("\n+------------------------------+\n");
            printf("| LIST PILIHAN SORTING         |\n");
            printf("+------------------------------+\n");
            printf("| 1. BUBBLE SORT NORMAL        |\n");
            printf("| 2. BUBBLE SORT POINTER       |\n");
            printf("+------------------------------+\n");    
            printf("| MASUKAN PILIHAN SORTING   : ");
            scanf("%s", pilih_jenis);
            printf("+------------------------------+\n");

            if (validation2(pilih_jenis)==1||validation2(pilih_jenis)==2){

                printf("\n+------------------------------+\n");
                printf("| DATA AWAL                    |");
                printf("\n+------------------------------+\n");
                random_number(kumpulan, jumlah_data);
                printf("\n+------------------------------+\n");
                printf("| HASIL SORTING                |");
                printf("\n+------------------------------+\n");

                if (validation2(pilih_jenis)==1){
                    bubble_sort_biasa(kumpulan, jumlah_data);
                } else {
                    bubble_sort_pointer(kumpulan, jumlah_data);
                }
                
                int z;

                for (z = 0; z < jumlah_data; z++){
                    printf("%d ", kumpulan[z]);
                }

                int waktu_ticks= clock();   //system process count time
                printf("\n\nWAKTU PROSES = %f DETIK\n", (float)waktu_ticks/ CLOCKS_PER_SEC);
            } else{
                printf("| MASUKAN SESUAI YANG TERTERA\n");
                printf("+------------------------------+\n");
            }

        } else{
            printf("| MASUKAN SESUAI YANG TERTERA\n");
            printf("+------------------------------+\n");
        }
        printf("| MENGULANG PROGRAM? (y/Y) : ");
        scanf(" %c", mengulang);
        printf("+------------------------------+\n");
        system("cls ||clear");
    }while(strcmp(mengulang,"y")==0||strcmp(mengulang,"Y")==0);

    printf("\n+---------------------------------------------+\n");
    printf("| TERIMA KASIH TELAH MENGGUNAKAN PROGRAM KAMI |\n");
    printf("+---------------------------------------------+\n");

    return 0;
}

int validation(char banyak_data[]){
    int i;
    for ( i = 0; i < strlen(banyak_data); i++){
        if (isdigit(banyak_data[i])==0){
            return 0;
        } else{
            if (banyak_data[i]=='1'){
                if (isgraph(banyak_data[i+1])!=0){
                    return 0;
                }
                
                return 1;
            } else if (banyak_data[i]=='2'){
                if (isgraph(banyak_data[i+1])!=0){
                    return 0;
                }

                return 2;
            } else if (banyak_data[i]=='3'){
                if (isgraph(banyak_data[i+1])!=0){
                    return 0;
                }

                return 3;
            } else{
                return 0;
            }
        }
    }
    return 0;
}

int validation2(char pilih_jenis[]){
    int i;
    for ( i = 0; i < strlen(pilih_jenis); i++){
        if (isdigit(pilih_jenis[i])==0){ //if isdigit return 0 value means user input not in shape of integer
            return 0;
        } else{
            if (pilih_jenis[i]=='1'){
                if (isgraph(pilih_jenis[i+1])!=0){
                    return 0;
                }

                return 1;
            } else if (pilih_jenis[i]=='2'){
                if (isgraph(pilih_jenis[i+1])!=0){
                    return 0;
                }
                
                return 2;
            } else{
                return 0;
            }  
        } 
    }
    return 0;
}

int bubble_sort_biasa(int kumpulan[], int banyak_data){
    
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

int bubble_sort_pointer(int kumpulan[], int banyak_data){

    int tukar,j,i;
    int *p=kumpulan;

    for (i = 0; i < banyak_data; i++){
        for ( j = 0; j < banyak_data-i-1; j++){
            if (*(p+j)>*(p+(j+1))){
                tukar = *(p+j);
                *(p+j)=*(p+(j+1));
                *(p+(j+1))=tukar;
            }  
        } 
    }
    return kumpulan[j];
}

void random_number(int kumpulan[],int banyak_data){

    int angka,i;
    int low=0, high=180000;
    srand(time(NULL));  //using time seed to randomize number

    for (i = 0; i <banyak_data; i++){
        angka=(rand() % (high-low+1)) + low; //using high dan low parameter to limit random number between 0 and 180000
        kumpulan[i]=angka;
        printf("%d ", kumpulan[i]);
    }
}
