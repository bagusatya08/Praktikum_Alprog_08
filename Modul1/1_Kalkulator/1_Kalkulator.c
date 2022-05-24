#include <stdio.h>
#include <stdlib.h>

void penjumlahan();
void pengurangan();
void perkalian();
void pembagian();
void modulus();
void koreksi();
int validasi();
int check();
int perulangan();
char pilihan;

int main() 
{	
    int menu;
    system ("color F0");
    printf("\n\t\t\t\t==================================================\n");
    printf("\t\t\t\t||          PROGRAM KALKULATOR SEDERHANA        ||\n");
    printf("\t\t\t\t||                  KELOMPOK 8                  ||\n");
    printf("\t\t\t\t==================================================\n\n");
    printf("\t\t\t\tPilih Operasi Perhitungan Berikut! \n");
    printf("\t\t\t\tMenu :\n");
    printf("\t\t\t\t1. Penjumlahan\n");
    printf("\t\t\t\t2. Pengurangan\n");
    printf("\t\t\t\t3. Perkalian\n");
    printf("\t\t\t\t4. Pembagian\n"); 	
    printf("\t\t\t\t5. Modulus\n");
    printf("\t\t\t\t6. Selesai\n");
    koreksi(&menu,"\n\t\t\t\tMasukkan Pilihan Anda (1/2/3/4/5/6): ");
    printf("***************************************** \n");
    printf("\n");
    system("cls || clear");

    switch(menu) 
    {
	case 1: 
	penjumlahan(); perulangan(); break;
	case 2: 
	pengurangan(); perulangan(); break;
	case 3: 
	perkalian(); perulangan(); break;
	case 4: 
	pembagian(); perulangan(); break;
	case 5: 
	modulus(); perulangan(); break;
	case 6: 
   	printf("\n\t\t\t\t==================================================\n");
    	printf("\t\t\t\t                 HAVE A BLAST DAY:);
    	printf("\n\t\t\t\t==================================================\n"); break;
	default:
	printf("Input yang dimasukan salah! Ketik angka 1-6 saja! \n");
	printf("*************************************************************** \n");
	printf("\n"); main(); break;
    }
}

void penjumlahan() {
    int hasil, angka1, angka2;
    printf("Operasi Perhitungan Penjumlahan \n");
    printf("\n Masukkan Angka: \n");
    printf("\t Angka 1: "); angka1=validasi();
    printf("\t Angka 2: "); angka2=validasi();
    hasil = angka1 + angka2;
    printf("Hasil = Angka 1 + Angka 2 \n");
    printf("Hasil = %d \n", hasil);
    printf("*************************************** \n");
    printf("\n");
}

void pengurangan() {
    int hasil, angka1, angka2;
    printf("Operasi Perhitungan Pengurangan \n");
    printf("\n Masukkan Angka: \n");
    printf("\t Angka 1: "); angka1=validasi();
    printf("\t Angka 2: "); angka2=validasi();
    hasil = angka1 - angka2;
    	printf("Hasil = Angka 1 - Angka 2 \n");
	printf("Hasil = %d \n", hasil);
	printf("*************************************** \n");
	printf("\n");
}
		
void perkalian() {
    int hasil, angka1, angka2;
    printf("Operasi Perhitungan Perkalian \n");
    printf("\n Masukkan Angka: \n");
    printf("\t Angka 1: "); angka1=validasi();
    printf("\t Angka 2: "); angka2=validasi();
    hasil = angka1 * angka2;
	printf("Hasil = Angka 1 x Angka 2 \n");
	printf("Hasil = %d \n", hasil);
	printf("*************************************** \n");
	printf("\n");
}
		
void pembagian() {
    float hasil; 
    int angka1, angka2;
    printf("Operasi Perhitungan Pembagian \n");
    printf("\n Masukkan Angka: \n");
    printf("\t Angka 1: "); angka1=validasi();
    printf("\t Angka 2: "); angka2=validasi();
    hasil = angka1 / angka2;
	printf("Hasil = Angka 1 : Angka 2 \n");
	printf("Hasil = %.2f \n", hasil);
	printf("*************************************** \n");
	printf("\n");
}
		
void modulus() { 
    int hasil, angka1, angka2;
    printf("Operasi Perhitungan Modulus \n");
    printf("\n Masukkan Angka: \n");
    printf("\t Angka 1: "); angka1=validasi();
    printf("\t Angka 2: "); angka2=validasi();
    hasil = angka1 % angka2;
	printf("Hasil = Angka 1 mod Angka 2 \n");
	printf("Hasil = %d \n", hasil);
	printf("*************************************** \n");
	printf("\n");
}

int check(int *var) {
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

//Validasi Inputan Angka
void koreksi(int *var, char *prompt) {
    while(1){
	printf("%s", prompt);
	if(check(var))
	   break;
	printf("Inputan hanya berupa ANGKA! \n");
	printf("\n");
   }
}

int validasi() {
   int angka;
   char karakter;
   scanf("%d%c", &angka, &karakter);
   if(karakter != '\n' || angka<0){
        printf("Inputan hanya berupa ANGKA! \n\n");
        printf("Masukan Ulang Angka: ");
        fflush(stdin);
        validasi();
    }
    else{
        return angka;
    }
}

int perulangan() {
   char pilihan[2] ;
   printf ("Ingin mengulang program? (y/t): ") ; 
   scanf ("%s", &pilihan) ;
   system ("cls || clear") ;
   if (strcmp(pilihan, "y")==0)
	{
		system ("cls || clear") ;
		main();
	}
	else if (strcmp(pilihan, "t")==0) 
	{
   	printf("\n\t\t\t\t==================================================\n");
    	printf("\t\t\t\t                 HAVE A  BLAST DAY!");
    	printf("\n\t\t\t\t==================================================\n");
	exit(0);
	}
	else 
	{
	printf ("Input y/t saja! \n") ;	
	perulangan();
	}
	system("cls || clear");
}
