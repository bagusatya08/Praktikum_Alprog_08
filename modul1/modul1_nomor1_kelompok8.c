// Nama 	: Jesica Syalomitha Sule Ulang
// NIM 		: 2105551043
// Kelompok : 8

#include <stdio.h>

int cetak_kalkulasi(int kalkulasi){

    int angka1 = 0;
    int angka2 = 0;
    int total;

    printf("\n\t\tInput nilai pertama : ");
    scanf("%d", &angka1);
    
    printf("\t\tInput nilai kedua : ");
    scanf("%d", &angka2);

    if(kalkulasi == 1){
        total = angka1 + angka2;
        
    }else if(kalkulasi == 2){
        total = angka1 - angka2;
        
    }else if(kalkulasi == 3){
        total = angka1 * angka2;
        
    }else if(kalkulasi == 4){
        total = angka1 / angka2;
        
    }else if(kalkulasi == 5){
        total = angka1 % angka2;
    }
    printf("\t\t__________________________________________________________________\n");					
    printf("\n\t\t\t\t\tHasil Kalkulasi = %d\n\n", total);
   	printf("\t\t__________________________________________________________________\n");		
	   			
}
void ulangi(){
    char pil[10];
    
	fflush(stdin);
	printf ("\nIngin Kembali ke Program? (y/n) : "); 
	scanf("%s", &pil);
 	
if(!strcmp(pil, "y") || !strcmp(pil, "Y")){
	system("cls");
	main();
	}
	else if(!strcmp(pil, "n") || !strcmp(pil, "N")){
		printf("Terimakasih Telah Menggunakan Program Ini!");
	}  
	else{
		printf("Input yang Dimasukkan Salah!\n");
		ulangi();
	}
}

int main(){
	int kalkulasi;
	int pil;
	
	tampilan:
	
	printf("\t\t__________________________________________________________________\n");	
	printf("\t\t ________________________________________________________________\n");
	printf("\t\t||                                                              ||\n");					
	printf("\t\t||                    KALKULATOR  SEDERHANA                     ||\n");					
	printf("\t\t||..............................................................||\n");					
	printf("\t\t||                     Pilih Kalkulasi Anda                     ||\n");								
	printf("\t\t||______________________________________________________________||\n");	
	printf("\t\t__________________________________________________________________\n");					
	printf("\t\t* 1.Penjumlahan\n");															
	printf("\t\t* 2.Pengurangan\n");															
	printf("\t\t* 3.Perkalian\n");	
	printf("\t\t* 4.Pembagian\n");
	printf("\t\t* 5.Modulus\n");
	printf("\t\t..................................................................\n");		
	printf("\t\tPilih salah satu kalkulasi yang akan dijalankan : ");
	scanf("%d", &kalkulasi);
	printf("\t\t..................................................................\n");	
	
	if(kalkulasi == 1 || kalkulasi == 2 || kalkulasi == 3 || kalkulasi == 4 || kalkulasi == 5){
	cetak_kalkulasi(kalkulasi);
	}else{
	printf("\t\tKalkulasi tidak tersedia!");
	}

	ulangi();
	
	return 0;
}
