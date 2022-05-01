#include<stdio.h>
#include<stdlib.h>

void intro();
void outro();
float validFlt();
void reVldFlt();
int validInt();
void reVldInt();
void restart();
void kubusStr();
void kubusUni();

float panjang_sisi;

struct kubus_struct{
    float panjang;
    float luas_permukaan;
    float volume;
}kubusStruct;

typedef union{
    float panjang;
    float luas_permukaan;
    float volume;
}kubusUnion;

void intro(){
     printf("\n\t\t\t\t=====================================================\n");
     printf("\t\t\t\t|| PROGRAM PERHITUNGAN KUBUS DENGAN STRUCT & UNION ||\n");
     printf("\t\t\t\t||                   KELOMPOK 8                    ||\n");
     printf("\t\t\t\t=====================================================\n\n");
}

int main(){
    intro();
    reVldFlt(&panjang_sisi, "\t\t\t\tMasukkan sisi kubus\t: ");
    kubusStr();
    kubusUni();
    restart();
    return 0;
}

void kubusStr(){
    struct kubusStruct;
    kubusStruct.panjang = panjang_sisi;
    kubusStruct.luas_permukaan = 6 * kubusStruct.panjang * kubusStruct.panjang;
    kubusStruct.volume = kubusStruct.panjang * kubusStruct.panjang * kubusStruct.panjang;
	printf("\n\t\t\t\tKubus dengan Struct");
    printf("\n\t\t\t\tPanjang Sisi : %.2f\n", kubusStruct.panjang);
    printf("\t\t\t\tLuas Permukaan : %.2f\n", kubusStruct.luas_permukaan);
    printf("\t\t\t\tVolume         : %.2f\n", kubusStruct.volume);
}

void kubusUni(){
    kubusUnion unions[3];
    unions[0].panjang = panjang_sisi;
    unions[1].luas_permukaan = 6 * panjang_sisi * panjang_sisi;
    unions[2].volume = panjang_sisi * panjang_sisi * panjang_sisi;
	printf("\n\t\t\t\tKubus dengan Union");
    printf("\n\t\t\t\tPanjang Sisi : %.2f\n", unions[0].panjang);
    printf("\t\t\t\tLuas Permukaan : %.2f\n", unions[1].luas_permukaan);
    printf("\t\t\t\tVolume         : %.2f\n", unions[2].volume);
    printf("\n\t\t\t\tUkuran Memory pada Kubus Struct : %d\n", sizeof(kubusStruct));
    printf("\t\t\t\tUkuran Memory pada Kubus Union : %d\n\n", sizeof(unions[0]));
}

float validFlt(float *var){
	char buff[1024];
	char cek;
	fflush(stdin);
	if((fgets(buff, sizeof(buff), stdin) != NULL)&&(sscanf(buff, "%f %c", var, &cek) == 1)){
		if(*var<=0) {
                printf("\t\t\t\tInputkan angka positif dan tidak bernilai (0)\n");
			return 0;
		}
		return 1;
	}
	return 0;
}

void reVldFlt(float *var, char *prompt){
	while(1){
		printf(prompt);
		if(validFlt(var))
			break;
		printf("\t\t\t\tInput salah! Silahkan coba lagi.\n\n");
	}
}

int validInt(int *var){
	char buff[1024];
	char cek;
	fflush(stdin);
	if(fgets(buff, sizeof(buff), stdin) != NULL){
		if(sscanf(buff, "%d %c", var, &cek) == 1) {
			return 1;
		}
	}
	return 0;
}

void reVldInt(int *var, char *prompt){
	while(1){
		printf(prompt);
		if(validInt(var))
			break;
		printf("\t\t\t\tInput salah! Silahkan coba lagi.\n");
	}
}

void restart(){
    int reset;
    printf("\n\t\t\t\tIngin Menghitung Kembali?\n");
    printf("\t\t\t\t[1]. Kembali Menghitung\n");
    printf("\t\t\t\t[2]. Keluar\n");
    reVldInt(&reset, "\t\t\t\tInputkan Pilihan Anda\t: ");
    if(reset==1){
        system("cls");
        main();
    }else if(reset==2){
        system("cls");
        outro();
    }else{
        printf("\n\t\t\t\tPilihan Tidak Tersedia!!!");
        restart();
    }
}

void outro(){
    printf("\n\t\t\t\t=================================================\n");
    printf("\t\t\t\t||         HAVE A BLAST DAY:)                    ||\n");
    printf("\t\t\t\t=================================================\n");
}