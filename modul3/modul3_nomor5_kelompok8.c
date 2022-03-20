#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void enkripsi(char input_enkripsi[], int jumlah_pergeseran){

    for (int i = 0; i < strlen(input_enkripsi); i++){
        if(islower(input_enkripsi[i])!=0){
            if (input_enkripsi[i]>='a' && input_enkripsi[i]<='z'){
                char tampungan = input_enkripsi[i] - 'a';
                tampungan = tampungan+jumlah_pergeseran;
                tampungan = tampungan % 26;
                input_enkripsi[i] =toupper(tampungan + 'a');
            }
        } else{
            if (input_enkripsi[i]>='A' && input_enkripsi[i]<='Z'){
                char tampungan = input_enkripsi[i] - 'A';
                tampungan = tampungan+jumlah_pergeseran;
                tampungan = tampungan % 26;
                input_enkripsi[i] =tolower(tampungan + 'A');
            }
        }
    }
}

void dekripsi(char input_enkripsi[], int jumlah_pergeseran){
    for (int i = 0; i < strlen(input_enkripsi); i++){
        if(islower(input_enkripsi[i])==0){
            if (input_enkripsi[i]>='A' && input_enkripsi[i]<='Z'){
                char tampungan = input_enkripsi[i] - 'A';
                tampungan = tampungan-jumlah_pergeseran;
                tampungan = tampungan % 26;
                input_enkripsi[i] = tolower(tampungan + 'A');
            }
        } else {
            if (input_enkripsi[i]>='a' && input_enkripsi[i]<='z'){
                char tampungan = input_enkripsi[i] - 'a';
                tampungan = tampungan-jumlah_pergeseran;
                tampungan = tampungan % 26;
                input_enkripsi[i] = toupper(tampungan + 'a');
            }
        }
    }
}

int main(){
    
    char input_enkripsi[100], ulang[10];
    int jumlah_pergeseran, pilihan;

    do{
        printf("+------------------------------+\n");
        printf("| LIST PILIHAN MENU            |\n");
        printf("+------------------------------+\n");
        printf("| 1. ENKRIPSI                  |\n");
        printf("| 2. DEKRIPSI                  |\n");
        printf("+------------------------------+\n");    
        printf("| MASUKAN PILIHAN MENU : ");
        scanf("%d", &pilihan);
        system("clear");

        if (pilihan==1 || pilihan==2){
            printf("+------------------------------+\n");
            printf("| MASUKAN JUMLAH PERGESERAN    |\n");
            printf("+------------------------------+\n");
            printf("| : ");
            scanf("%d", &jumlah_pergeseran);

            if (pilihan==1){
                printf("+------------------------------+\n");
                printf("| MASUKAN PLAINTEXT            |\n");
                printf("+------------------------------+\n");
                printf("| : ");
                scanf(" %[^\n]s", input_enkripsi);
                        
                enkripsi(input_enkripsi, jumlah_pergeseran);

                printf("+------------------------------+\n");
                printf("| HASIL ENKRIPSI               |\n");
                printf("+------------------------------+\n");
                printf("| : %s\n", input_enkripsi);
                printf("+------------------------------+\n");
            } else if (pilihan==2){
                printf("+------------------------------+\n");
                printf("| MASUKAN CHYPERTEXT           |\n");
                printf("+------------------------------+\n");
                printf("| : ");
                scanf(" %[^\n]s", input_enkripsi);

                dekripsi(input_enkripsi, jumlah_pergeseran);
                printf("+------------------------------+\n");
                printf("| HASIL DEKRIPSI               |\n");
                printf("+------------------------------+\n");
                printf("| : %s\n", input_enkripsi);
                printf("+------------------------------+\n");
            }
            
        } else{
            printf("+------------------------------+\n");
            printf("| MASUKAN PILIHAN YANG SESUAI! |\n");
            printf("+------------------------------+\n");
        }

        printf("\n\n+------------------------------+\n");
        printf("| MENGULANG PROGRAM ?          |\n");
        printf("+------------------------------+\n");
        printf("| (y/Y): ");
        scanf(" %c", ulang);
        printf("+------------------------------+\n");
        system("clear");
    } while (strcmp(ulang, "y")==0 || strcmp(ulang, "Y")==0);

    return 0;
}
