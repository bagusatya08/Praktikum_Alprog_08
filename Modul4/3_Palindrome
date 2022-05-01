#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool pengecekan_palindrome(char kata[]);
void masuk_file(char hasil[]);
void mengulang(char ulang[]);
void selesai();
void validasimengulang();

int main(){
    int panjang = 0;
    int i;
	int counts[256] = {0};
    bool palindrome;
    char ulang[10];
    char *hasil = malloc(sizeof(char)*(255));   //pointer to store hasil w/ char type and 255 size
    char *kata = malloc(sizeof(char)*(255));    //pointer to store kata w/ char type and 255 size

	printf("\n+------------------------------+\n");
    printf("|         MASUKAN KATA !       |\n");
    printf("+------------------------------+\n");
    printf("Masukkan sebuah kalimat : ");
    
    do{
        scanf("%c",&kata[panjang]);
        panjang++;
    } while(kata[panjang-1] != '\n');   //loop for activate scanf which will store value to variable kata
    
    kata[panjang-1] = '\0';

    palindrome = pengecekan_palindrome(kata);   //function to checking if kata that submited was palindrome or not
    for (i = 0; i < panjang-1; i++) {
        counts[(int)(kata[i])]++;   //to count the total each character input 
    }


    sprintf(hasil,"%s(%lu) :",kata,strlen(kata));   //assign value to variable hasil
    for (i = 0; i < 256; i++) {
        if (counts[i] != 0) {
            sprintf(hasil,"%s %c=%d",hasil,i,counts[i]);    //assign value to variable hasil
        }
    }

    if(palindrome){
        sprintf(hasil,"%s :%s",hasil," Palindrome");    //assign value to variable hasil
    } else {
        sprintf(hasil,"%s :%s",hasil," Tidak Palindrome");  //assign value to variable hasil
    }
    printf("%s",hasil);
    masuk_file(hasil);  //assign variable hasil to pass into masuk_file procedure and printed into .txt file
    free(hasil);    //dealocate memory address of variable hasil
    free(kata); //dealocate memory address of variable kata

    mengulang(ulang);
    
    return 0;
}

bool pengecekan_palindrome(char kata[]){
    int indeks_awal = 0;
    int indeks_akhir = strlen(kata) - 1;
    while (indeks_akhir > indeks_awal)
    {
        if (kata[indeks_awal] != kata[indeks_akhir])
        {
            return false;
        }

        indeks_awal++;
        indeks_akhir--;
    }
    return true;
}

void masuk_file(char hasil[]){
    FILE * kamuskata;
    kamuskata = fopen("kamuskata.txt","a+");    //append + mode
    fprintf(kamuskata,"%s\n",hasil);            
    fclose(kamuskata);
    return;
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
        system("cls | clear");
        main();
    } else if (strcmp(ulang, "t") == 0 || strcmp(ulang, "T") == 0){
        system("cls | clear");
        validasimengulang();
    } else{
        system("cls | clear");
        mengulang(ulang);
    }
}

void selesai(){
    printf("+---------------------------------------------+\n");
    printf("| TERIMA KASIH TELAH MENGGUNAKAN PROGRAM KAMI |\n");
    printf("+---------------------------------------------+\n");
}

void validasimengulang(){

    char check;
    char ulang2[10];

    printf("\n+---------------------------------------------+\n");
    printf("|       YAKIN INGIN MENGAKHIRI PROGRAM ?      |\n");
    printf("+---------------------------------------------+\n");
    printf("| (y/t): ");
    scanf("%s", ulang2);

    while ((check = getchar()) != '\n' && check != EOF){
    }; // input buffer

    if (strcmp(ulang2, "y")==0 || strcmp(ulang2, "Y")==0){
        system("cls | clear");
        selesai();
    } else if (strcmp(ulang2, "t")==0 || strcmp(ulang2, "T")==0){
        system("cls | clear");
        main();
    } else{
        system("cls | clear");
        validasimengulang();
    }
}