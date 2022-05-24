#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Validasisorting();
int readAsistenin();
int main();
void keluar();
void pilih_ulang();
void sortingData();
void output();


struct mahasiswa{
	char nama[100];
	int nilai;
};

int main(){
   	struct mahasiswa siswa[50];
	struct mahasiswa temp;	
	int a = 0;
	int i, j, k;
	int hasil;
	char tempNama[100];
	int tempNilai;

	printf("\t\t==================================\n");
	printf("\t\t       	 PROGRAM KUIZ          \n");
	printf("\t\t            OLEH:                \n");
	printf(" \t\t         KELOMPOK 08             \n");
	printf("\t\t==================================\n");
    printf(" \t\tProses file asistenin.txt...");
    sleep(1);
	printf("\n\n");

	a = readAsistenin(siswa);

	printf("\n");
	hasil = Validasisorting();

	if(hasil == 1){
		sortingData(siswa, a);
		printf("\n");
		output(siswa, a);

		printf("\t\tSelamat! Data berhasil dimasukan ke dalam asistenout.txt\n");
	}
	printf("\t\t============================================================\n");
	pilih_ulang();
    return 0;
}

void keluar(){
    system("cls || clear");
	printf("\t\t==================================\n");
	printf("\t\t                                  \n");
	printf("\t\t         TERIMAKASIH BANYAK        \n");
	printf("\t\t                                  \n");
	printf("\t\t==================================\n");
}


void pilih_ulang(){
    char ulang[1];

    printf("\n \t\tLakukan Ulang? ya/keluar(Y/E) : ");
    scanf("%s", ulang);
    fflush(stdin);

    if((strcmp(ulang, "Y") == 0) || (strcmp(ulang, "y") == 0)){
        system("clear || cls");
		int main();
    }else if((strcmp(ulang, "E") == 0) || (strcmp(ulang, "e") == 0)) {
        system("clear || cls");
		keluar();
    }else{
    	printf("\t\tTidak Valid! Silahkan masukan kembali\n");
        pilih_ulang();
    }
}

int Validasisorting(){
    char pilihan_sort[10];
	int hasil = 0;

    printf("\t\tLakukan Pengurutan Nilai? (Y/N) : ");
    scanf("%s", pilihan_sort);
    fflush(stdin);

    if((strcmp(pilihan_sort, "N") == 0) || (strcmp(pilihan_sort, "n") == 0)){
		hasil = 0;
    }else if((strcmp(pilihan_sort, "Y") == 0) || (strcmp(pilihan_sort, "y") == 0)){
		hasil = 1;
    }else{
		printf("\t\t Tidak Valid! Silahkan masukan kembali\n\n");
		return Validasisorting();
    }

	return hasil;
}

int readAsistenin(struct mahasiswa siswa[]){
	int a = 0;
	FILE *in = fopen("asistenin.txt","r");
	if(!in){
		printf("\t\tMaaf! File asistenin.txt tidak ditemukan\n");
		printf(" \t\tPastikan telah membuat file asistenin.txt terlebih dahulu\n");
		abort();
	}else{
        printf("\t\tNilai Mahasiswa : \n");
		while(!feof(in)){
			printf("    ");
		    fscanf(in,"%[^\n]s\n", siswa[a].nama);
		    fscanf(in,"%d\n", &siswa[a].nilai);
            fflush(stdin);
		    printf("\t\t%d. %s : %d\n", a+1, siswa[a].nama, siswa[a].nilai);
		    a++;
		}
	}
	fclose(in);

	return a;
}

void sortingData(struct mahasiswa siswa[], int a){
	struct mahasiswa temp;
	int i, j;
	for(i = 0; i < a - 1; i++){
		for(j = 0; j < a - 1; j++){
			if(siswa[j+1].nilai > siswa[j].nilai){
				temp = siswa[j+1];
				siswa[j+1] = siswa[j];
    			siswa[j] = temp;
			}
    	}
	}
}

void output(struct mahasiswa siswa[], int a){
	int i;
	FILE *out = fopen("asistenout.txt","w");
	fprintf(out, "Nilai Algoritma dan Pemrograman :\n");
	for(i = 0; i < a; i++){
		fprintf(out,"%d. %s %d\n", i+1, siswa[i].nama, siswa[i].nilai);
	}
	fclose(out);
}



