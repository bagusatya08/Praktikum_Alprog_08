#include <stdio.h>
#include <string.h>
#define GAJIPERJAM 10625
#define GAJILEMBUR 85000

void intro();
void input_data();
void input_jam();
void hasil();
int validInt();
void reVldInt();
void restart();
void outro();

struct pegawai{
    char nama[100];
    int jam;
    int jam_lembur;
    int jam_kantor;
    int lembur;
    int gaji_pokok;
    int gaji;
}karyawan;

int main(){
    system ("color F0");
    intro();
    input_data();
    hasil();
    restart();
    return 0;
}

void intro(){
     printf("\n\t\t\t\t=================================================\n");
     printf("\t\t\t\t||       PROGRAM PERHITUNGAN GAJI KARYAWAN     ||\n");
     printf("\t\t\t\t||                KELOMPOK 8                   ||\n");
     printf("\t\t\t\t=================================================\n\n");
}

void input_data(){
   int i, n = 0, cek, tes = 0;
   printf("\t\t\t\tInputkan Nama Anda\t: ");

   do{
    scanf("%c", &karyawan.nama[n]);
    n++;
   }while(karyawan.nama[n-1] != '\n');

   karyawan.nama[n-1] = '\0';

   for(i=0;i<n-1;i++){
       if((karyawan.nama[i]>=65 && karyawan.nama[i]<=90)|| (karyawan.nama[i]>=97 && karyawan.nama[i]<=122)){
           tes++;
           continue;
        }else if(karyawan.nama[i]==32){
           continue;
        }else{
            cek = 1;
            fflush(stdin);
            break;
        }
   }

	//berfungsi untuk mengecek apakah data berupa huruf atau yang lainnya
   if(cek==1){
        printf("\t\t\t\tNama Hanya Berupa Huruf!!!\n");
        fflush(stdin);
        input_data();
    }else if(tes==0){
        printf("\t\t\t\tInputan Nama Tidak Boleh Kosong!!!\n");
        input_data();
    }else{
        input_jam();
    }
}

void input_jam(){
    reVldInt(&karyawan.jam, "\t\t\t\tInputkan Jam Kerja\t: ");
    if(karyawan.jam>24){
        printf("\t\t\t\tMaksimal jam kerja adalah 24 jam per hari!\n");
        input_jam();
    }else if(karyawan.jam<1){
        printf("\t\t\t\tJam kerja minimal adalah 1 jam!\n");
        input_jam();
    }

    if(karyawan.jam > 8 && karyawan.jam <= 24){
        karyawan.jam_kantor = karyawan.jam;
        karyawan.jam_lembur = karyawan.jam - 8;
        karyawan.jam_kantor = karyawan.jam - karyawan.jam_lembur;
    }else if(karyawan.jam <= 8 && karyawan.jam >= 1){
        karyawan.jam_kantor = karyawan.jam;
        karyawan.jam_lembur = 0;
    }
}

void gaji(){
    if(karyawan.jam>8){
        karyawan.gaji_pokok=8*GAJIPERJAM;
        karyawan.lembur=(karyawan.jam-8)*(GAJILEMBUR);
        karyawan.gaji=karyawan.gaji_pokok+karyawan.lembur;
    }else{
        karyawan.gaji_pokok=karyawan.jam*GAJIPERJAM;
        karyawan.lembur=0;
        karyawan.gaji=karyawan.gaji_pokok;
    }
}

void hasil(){
    gaji();
    system("cls");
    intro();
    printf("\t\t\t\tNama Karyawan\t\t: %s", karyawan.nama);
    printf("\n\t\t\t\tBayaran per Jam\t\t: %d", GAJIPERJAM);
    printf("\n\t\t\t\tBayaran Lembur per Jam\t: %d", GAJILEMBUR);
    printf("\n\t\t\t\tJam Kerja\t\t: %d", karyawan.jam_kantor);
    printf("\n\t\t\t\tJam Lembur\t\t: %d", karyawan.jam_lembur);
    printf("\n\t\t\t\tGaji Pokok\t\t: %d", karyawan.gaji_pokok);
    printf("\n\t\t\t\tGaji Lembur\t\t: %d", karyawan.lembur);
    printf("\n\t\t\t\t-------------------------------------------------");
    printf("\n\t\t\t\tTotal Gaji Karyawan\t: %d\n", karyawan.gaji);
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
