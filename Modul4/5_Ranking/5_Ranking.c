#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sorting();
int readAsistenin();
int main();
void keluar();
void pilihan_ulang();
void sortData();
void output();
void menu_utama();

struct mahasiswa{
	char nama[100];
	int nilai;
};

void keluar(){
    system("cls");
    system("exit");
}


void pilihan_ulang(){
    char huruf_ulang[1];

    printf("\n \t\tLakukan lagi? ya/keluar(Y/E) : ");
    scanf("%s", &huruf_ulang);
    fflush(stdin);

    if((strcmp(huruf_ulang, "Y") == 0) || (strcmp(huruf_ulang, "y") == 0)){
        system("clear || cls");
		    menu_utama();
    }else if((strcmp(huruf_ulang, "E") == 0) || (strcmp(huruf_ulang, "e") == 0)) {
        system("clear || cls");
		    keluar();
    }else{
    	  printf("\t\tMasukan anda salah! Masukan dengan benar\n");
        pilihan_ulang();
    }
}

int sorting(){
    char huruf_sort[10];
	  int hasil = 0;

    printf("\t\tApakah anda ingin melakukan mengurutkan nilai ? (Y/N) : ");
    scanf("%s", huruf_sort);
    fflush(stdin);

    if((strcmp(huruf_sort, "N") == 0) || (strcmp(huruf_sort, "n") == 0)){
		    hasil = 0;
    }else if((strcmp(huruf_sort, "Y") == 0) || (strcmp(huruf_sort, "y") == 0)){
		    hasil = 1;
    }else{
		    printf("\t\t Masukan anda salah! Masukan dengan benar\n\n");
		    return sorting();
    }

	return hasil;
}

int readAsistenin(struct mahasiswa siswa[]){
	int a = 0;
	FILE *in = fopen("asistenin.txt","r");
	if(!in){
		printf("\t\tMaaf! File asistenin.txt tidak ditemukan\n");
		printf(" \t\tSilahkan buat file asistenin.txt terlebih dahulu\n");
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

void sortData(struct mahasiswa siswa[], int a){
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

void menu_utama(){
	struct mahasiswa siswa[50];
	struct mahasiswa temp;	
	int a = 0;
	int i, j, k;
	int sort;
	char tempNama[100];
	int tempNilai;

	printf("\t\t__________________________________________________________________\n");	
	printf("\t\t ________________________________________________________________\n");
	printf("\t\t||                                                              ||\n");					
	printf("\t\t||                  	Program Ranking	               		||\n");					
	printf("\t\t||..............................................................||\n");					
	printf("\t\t||                    	By kelompok 08                      	||\n");								
	printf("\t\t||______________________________________________________________||\n");	
	printf("\t\t__________________________________________________________________\n");	
  printf(" \t\tProses file asistenin.txt...");
  sleep(1);
	printf("\n\n");

	a = readAsistenin(siswa);

	printf("\n");
	sort = sorting();

	if(sort == 1){
		sortData(siswa, a);
		printf("\n");
		output(siswa, a);

		printf("\t\tData berhasil dimasukan ke dalam asistenout.txt\n");
	}
	printf("\t\t============================================================\n");
	pilihan_ulang();

}

int main(){
    menu_utama();
    return 0;
}
