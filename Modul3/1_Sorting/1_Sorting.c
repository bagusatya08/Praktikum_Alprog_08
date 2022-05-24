#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

void tukar(int *nilai1, int *nilai2);
int bubble_sort(int kumpulan[], int banyak_data);
void linear_search(int kumpulan[], int dicari);
void insertion_sort(int kumpulan[], int banyak_data);
void random_number(int kumpulan[], int banyak_data);
int validation4(int pilihan_sorting);
int validation3(int pilihan_searching);
int validation2(int pilih_jenis);
int validation(int banyak_data);
void validasimengulang(char ulang[]);
void mengulang(char ulang[]);
void selesai();
int validation_dicari(int dicari);
void quicksort(int kumpulan[], int banyak_data);
void quicksort_rekursif(int kumpulan[], int low, int high);
int partition(int kumpulan[], int low, int high);
int binary_search(int kumpulan[], int dicari, int low, int high, int jumlah_data);

int main(){

    int kumpulan[70000], hasil_sort[70000];
    int banyak_data, dicari, pilihan_program = 0, pilihan_searching = 0, pilihan_sorting = 0;
    int jumlah_data = 0, hasil = 0;
    char ulang[10];

    printf("\n+------------------------------+\n");
    printf("| PILIHAN BANYAK DATA          |\n");
    printf("+------------------------------+\n");
    printf("| 1. 1000 DATA                 |\n");
    printf("| 2. 16000 DATA                |\n");
    printf("| 3. 64000 DATA                |\n");
    printf("+------------------------------+\n");
    printf("| MASUKAN PILIHAN BANYAK DATA   : ");
    banyak_data = validation(banyak_data);

    if (banyak_data > 0 && banyak_data < 4){
        if (banyak_data == 1){
            jumlah_data = 1000;
        } else if (banyak_data == 2){
            jumlah_data = 16000;
        } else{
            jumlah_data = 64000;
        }

        printf("+------------------------------+\n");
        system("cls || clear");

        printf("+------------------------------+\n");
        printf("| LIST PILIHAN PROGRAM         |\n");
        printf("+------------------------------+\n");
        printf("| 1. SEARCHING                 |\n");
        printf("| 2. SORTING                   |\n");
        printf("+------------------------------+\n");
        printf("| MASUKAN PILIHAN PROGRAM   : ");
        pilihan_program = validation2(pilihan_program);

        system("cls || clear");
        if (pilihan_program == 1 || pilihan_program == 2){
            if (pilihan_program == 1){
                printf("+------------------------------+\n");
                printf("| LIST PILIHAN SEARCHING       |\n");
                printf("+------------------------------+\n");
                printf("| 1. SEQUENTIAL SEARCH         |\n");
                printf("| 2. BINARY SEARCH             |\n");
                printf("+------------------------------+\n");
                printf("| MASUKAN PILIHAN SEARCHING : ");
                pilihan_searching = validation3(pilihan_searching);
                system("cls || clear");

                if (pilihan_searching == 1 || pilihan_searching == 2){

                    // random number generator
                    printf("\n+------------------------------+\n");
                    printf("| DATA AWAL                    |");
                    printf("\n+------------------------------+\n");
                    random_number(kumpulan, jumlah_data);
                    printf("\n");

                    if (pilihan_searching == 1){
                        printf("\n+------------------------------+\n");
                        printf("| MASUKAN ANGKA SEARCHING      |\n");
                        printf("+------------------------------+\n");
                        dicari = validation_dicari(dicari);
                        printf("\n+------------------------------+\n");
                        printf("| HASIL SEARCHING              |");
                        printf("\n+------------------------------+\n");
                        linear_search(kumpulan, dicari);
                    } else{
                        printf("\n+------------------------------+\n");
                        printf("| HASIL SORTING                |");
                        printf("\n+------------------------------+\n");
                        quicksort(kumpulan, jumlah_data);

                        for (int z = 0; z < jumlah_data; z++){
                            hasil_sort[z] = kumpulan[z];
                            printf("%d ", kumpulan[z]);
                        }

                        printf("\n+------------------------------+\n");
                        printf("| MASUKAN ANGKA SEARCHING      |\n");
                        printf("+------------------------------+\n");
                        dicari = validation_dicari(dicari);
                        printf("\n+------------------------------+\n");
                        printf("| HASIL SEARCHING              |");
                        printf("\n+------------------------------+\n");
                        hasil = binary_search(hasil_sort, dicari, 0, jumlah_data - 1, jumlah_data);
                        if (hasil == -1){
                            printf("ANGKA YANG DICARI TIDAK TERDAPAT DALAM ARRAY\n");
                        }
                        else{
                            printf("TERLETAK PADA INDEKS KE-%d\n", hasil);
                        }
                    }
                }
            } else if (pilihan_program == 2){
                printf("+------------------------------+\n");
                printf("| LIST PILIHAN SORTING         |\n");
                printf("+------------------------------+\n");
                printf("| 1. BUBBLE SORT               |\n");
                printf("| 2. INSERTION SORT            |\n");
                printf("| 3. QUICK SORT                |\n");
                printf("+------------------------------+\n");
                printf("| MASUKAN PILIHAN SORTING   : ");
                pilihan_sorting = validation(pilihan_sorting);
                system("clear");

                if (pilihan_sorting > 0 && pilihan_sorting < 4){
                    // random number generator
                    printf("\n+------------------------------+\n");
                    printf("| DATA AWAL                    |");
                    printf("\n+------------------------------+\n");
                    random_number(kumpulan, jumlah_data);
                    printf("\n");

                    printf("\n+------------------------------+\n");
                    printf("| HASIL SORTING                |");
                    printf("\n+------------------------------+\n");

                    if (pilihan_sorting == 1){
                        bubble_sort(kumpulan, jumlah_data);
                    } else if (pilihan_sorting == 2){
                        insertion_sort(kumpulan, jumlah_data);
                    } else{
                        quicksort(kumpulan, jumlah_data);
                    }

                    for (int z = 0; z < jumlah_data; z++){
                        printf("%d ", kumpulan[z]);
                    }
                }
            }

            int waktu_ticks = clock();
            printf("\n\nWAKTU PROSES = %f DETIK\n", (float)waktu_ticks / CLOCKS_PER_SEC);
        }
    }

    mengulang(ulang);
    system("cls || clear");
    validasimengulang(ulang);
    return 0;
}

int bubble_sort(int kumpulan[], int banyak_data){

    int tukar, j, i;

    for (i = 0; i < banyak_data; i++){
        for (j = 0; j < banyak_data - i - 1; j++){
            if (kumpulan[j] > kumpulan[j + 1]){
                tukar = kumpulan[j];
                kumpulan[j] = kumpulan[j + 1];
                kumpulan[j + 1] = tukar;
            }
        }
    }
    return kumpulan[j];
}

void linear_search(int kumpulan[], int dicari){
    int n = 0;
    int length = sizeof(*kumpulan) / sizeof(int);

    for (n = 0; n < length; n++){
        if (dicari != kumpulan[n]){
            printf("| ANGKA YANG DICARI TIDAK TERDAPAT DALAM ARRAY\n");
        } else{
            printf("| TERLETAK PADA INDEKS KE-%d\n", n);
        }
    }
}

void insertion_sort(int kumpulan[], int banyak_data){

    int tukar;

    for (int i = 1; i < banyak_data; i++){
        tukar = kumpulan[i];

        int j = i - 1;

        while (j >= 0 && kumpulan[j] > tukar){
            kumpulan[j + 1] = kumpulan[j];
            j--;
        }
        kumpulan[j + 1] = tukar;
    }
}

void tukar(int *nilai1, int *nilai2){
    int penukar = *nilai1;
    *nilai1 = *nilai2;
    *nilai2 = penukar;
}

void random_number(int kumpulan[], int banyak_data){

    int angka;
    int low = 0, high = 180000;
    srand(time(NULL));

    for (int i = 0; i < banyak_data; i++){
        angka = (rand() % (high - low + 1)) + low;
        kumpulan[i] = angka;
        printf("%d ", kumpulan[i]);
    }
}

void mengulang(char ulang[]){

    char check;

    printf("\n\n+------------------------------+\n");
    printf("| MENGULANG PROGRAM ?          |\n");
    printf("+------------------------------+\n");
    printf("| (y/t): ");
    scanf("%s", ulang);
    while ((check = getchar()) != '\n' && check != EOF){
    }; // input buffer

    if (strcmp(ulang, "y") == 0 || strcmp(ulang, "Y") == 0){
        system("cls || clear");
        main();
    } else if (strcmp(ulang, "t") == 0 || strcmp(ulang, "T") == 0){
        selesai();
    } else{
        system("cls || clear");
        mengulang(ulang);
    }
}

void selesai(){
    system("cls || clear");
    printf("+---------------------------------------------+\n");
    printf("| TERIMA KASIH TELAH MENGGUNAKAN PROGRAM KAMI |\n");
    printf("+---------------------------------------------+\n");
}

void validasimengulang(char ulang[]){

    char check_;

    printf("\n+---------------------------------------------+\n");
    printf("|       YAKIN INGIN MENGAKHIRI PROGRAM ?      |\n");
    printf("+---------------------------------------------+\n");
    printf("| (y/t): ");
    scanf("%s", ulang);
    while ((check_ = getchar()) != '\n' && check_ != EOF){
    }; // input buffer

    if (strcmp(ulang, "y") == 0 || strcmp(ulang, "Y") == 0){
        system("cls || clear");
        selesai();
    } else if (strcmp(ulang, "t") == 0 || strcmp(ulang, "T") == 0){
        system("cls || clear");
        main();
    } else{
        system("cls || clear");
        validasimengulang(ulang);
    }
}

int validation(int banyak_data){
    char check1;

    if (scanf("%i%c", &banyak_data, &check1) != 2 || check1 != '\n'){
        while ((check1 = getchar()) != '\n' && check1 != EOF){
        }; // input buffer

        printf("+------------------------------+\n");
        printf("|  TIDAK SESUAI PILIHAN !\n");
        printf("+------------------------------+\n");
        printf("| MASUKAN ULANG : ");
        return validation(banyak_data);

    } else if (banyak_data < 1 || banyak_data > 3){
        printf("+------------------------------+\n");
        printf("| TIDAK SESUAI PILIHAN !\n");
        printf("+------------------------------+\n");
        printf("| MASUKAN ULANG : ");
        return validation(banyak_data);
        printf("\n===============================================\n");
    } else{
        return banyak_data;
    }
    
    return 0;
}

int validation2(int pilihan_program){
    char check2;

    if (scanf("%i%c", &pilihan_program, &check2) != 2 || check2 != '\n'){
        while ((check2 = getchar()) != '\n' && check2 != EOF){
        }; // input buffer

        printf("+------------------------------+\n");
        printf("|  TIDAK SESUAI PILIHAN !\n");
        printf("+------------------------------+\n");
        printf("| MASUKAN ULANG : ");
        return validation(pilihan_program);
    } else if (pilihan_program < 1 || pilihan_program > 2){
        printf("+------------------------------+\n");
        printf("| TIDAK SESUAI PILIHAN !\n");
        printf("+------------------------------+\n");
        printf("| MASUKAN ULANG : ");
        return validation(pilihan_program);
        printf("\n===============================================\n");
    } else {
        return pilihan_program;
    }
    return 0;
}

int validation3(int pilihan_searching){
    char check3;

    if (scanf("%i%c", &pilihan_searching, &check3) != 2 || check3 != '\n'){
        while ((check3 = getchar()) != '\n' && check3 != EOF){
        }; // input buffer

        printf("+------------------------------+\n");
        printf("|  TIDAK SESUAI PILIHAN !\n");
        printf("+------------------------------+\n");
        printf("| MASUKAN ULANG : ");
        return validation(pilihan_searching);
    } else if (pilihan_searching < 1 || pilihan_searching > 2){
        printf("+------------------------------+\n");
        printf("| TIDAK SESUAI PILIHAN !\n");
        printf("+------------------------------+\n");
        printf("| MASUKAN ULANG : ");
        return validation(pilihan_searching);
        printf("\n===============================================\n");
    } else{
        return pilihan_searching;
    }
    return 0;
}

int validation4(int pilihan_sorting){
    char check4;

    if (scanf("%i%c", &pilihan_sorting, &check4) != 2 || check4 != '\n'){
        while ((check4 = getchar()) != '\n' && check4 != EOF){
        }; // input buffer

        printf("+------------------------------+\n");
        printf("|  TIDAK SESUAI PILIHAN !\n");
        printf("+------------------------------+\n");
        printf("| MASUKAN ULANG : ");
        return validation(pilihan_sorting);
    } else if (pilihan_sorting < 1 || pilihan_sorting > 2){
        printf("+------------------------------+\n");
        printf("| TIDAK SESUAI PILIHAN !\n");
        printf("+------------------------------+\n");
        printf("| MASUKAN ULANG : ");
        return validation(pilihan_sorting);
        printf("\n===============================================\n");
    }else{
        return pilihan_sorting;
    }
    
    return 0;
}

int validation_dicari(int dicari){
    char check5;

    if (scanf("%i%c", &dicari, &check5) != 2 || check5 != '\n'){
        while ((check5 = getchar()) != '\n' && check5 != EOF){
        }; // input buffer

        printf("+------------------------------+\n");
        printf("|  MASUKAN BERUPA ANGKA !\n");
        printf("+------------------------------+\n");
        printf("| MASUKAN ULANG : ");
        validation_dicari(dicari);
    }else{
        return dicari;
    }
    
    return 0;
}

void quicksort(int kumpulan[], int banyak_data){

    srand(time(NULL));
    quicksort_rekursif(kumpulan, 0, banyak_data - 1);
}

void quicksort_rekursif(int kumpulan[], int low, int high){
    if (low < high){

        int pivot_index = partition(kumpulan, low, high);

        quicksort_rekursif(kumpulan, low, pivot_index - 1);
        quicksort_rekursif(kumpulan, pivot_index + 1, high);
    }
}

int partition(int kumpulan[], int low, int high){

    int pivot_index = low + (rand() % (high - low));

    if (pivot_index != high){
        tukar(&kumpulan[pivot_index], &kumpulan[high]);
    }

    int pivot_value = kumpulan[high];
    int i = low;

    for (int j = low; j < high; j++){
        if (kumpulan[j] <= pivot_value){
            tukar(&kumpulan[i], &kumpulan[j]);
            i++;
        }
    }
    
    tukar(&kumpulan[i], &kumpulan[high]);

    return i;
}

int binary_search(int kumpulan[], int dicari, int low, int high, int jumlah_data){
    int mid;

    if (jumlah_data % 2 == 0){
        mid = low + (high - low + 1) / 2;
    } else{
        mid = low + (high - low) / 2;
    }

    if (low > high){
        return -1;
    }

    if (kumpulan[mid] == dicari){
        return mid;
    } else if (kumpulan[mid] > dicari){
        return binary_search(kumpulan, dicari, low, mid - 1, jumlah_data);
    }else{
        return binary_search(kumpulan, dicari, mid + 1, high, jumlah_data);
    }
}