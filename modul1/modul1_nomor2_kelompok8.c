#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _repeat do 
#define _until(CONDITION) while (!(CONDITION)) 


int main(){
    float keliling, luas,lebar,panjang,tinggi,sisi,alas,volume,tinggi_prisma,a , b, c, d, d1, d2;
    float jari;
	int choice, choice2;
	
	_repeat {
      printf("pilihlah salah satu bangun ruang berikut\n" );
	  printf("1.  Segitiga sembarang\n");
	  printf("2.  Belah Ketupat\n" );
	  printf("3.  Jajar genjang\n" );
	  printf("4.  Trapesium\n" );
	  printf("5.  Lingkaran\n"         );
	  printf("Masukan Pilihan Anda: ");
	  scanf("%d",&choice);
    switch(choice) {
	      case 1:
	        printf("Anda telah memilih Segitiga sembarang \n");
	        printf("Masukan ukuran sisi A Segitiga sembarang : ");
	        scanf("%f",&a);
	        printf("Masukan ukuran sisi B Segitiga sembarang : ");
	        scanf("%f",&b);
	        printf("Masukan ukuran sisi C Segitiga sembarang : ");
	        scanf("%f",&c);
       		keliling = a + b + c;
        	luas =  (a + b + c) / 2   ;
         	printf("__________________________________________\n");
	        printf("keliling Segitiga sembarang adalah %.0f\n",keliling);
	        printf("luas Segitiga sembarang adalah %.0f\n",luas);
	        break;
	      case 2:
        	printf("Anda telah memilih Belah Ketupat\n");
         	printf("Masukan panjang sisi untuk mencari keliling: ");
       		scanf("%f",&sisi);
       		printf("Masukan panjang sisi d1 untuk mencari luas : ");
       		scanf("%f",&d1);
       		printf("Masukan panjang sisi d2 untuk mencari luas : ");
       		scanf("%f",&d2);
         	keliling = 4 * sisi;
         	luas = (d1 * d2) * 2 ;
         	printf("__________________________________________\n");
        	printf("keliling Belah Ketupat adalah %.0f\n",keliling);
         	printf("luas Belah Ketupat adalah %.0f\n",luas);
	        break;
	      case 3:
           	printf("Anda telah memilih Jajar genjang\n");
         	printf("Masukan Panjang sisi A : ");
       		scanf("%f",&a);
       		printf("Masukan Panjang sisi B : ");
       		scanf("%f",&b);
       		printf("Masukan Tinggi         : ");
       		scanf("%f",&tinggi);
         	keliling = (2 * a) + (2 * b) ;
         	luas = a * tinggi;
         	printf("__________________________________________\n");
        	printf("Keliling Jajar genjang adalah %.0f\n",keliling);
         	printf("luas Jajar genjang adalah %.0f\n",luas);
	          break;
	       case 4:
	       	printf("Anda telah memilih Trapesium\n");
         	printf("Masukan Panjang sisi A: ");
       		scanf("%f",&a);
       		printf("Masukan Panjang sisi B: ");
       		scanf("%f",&b);
       		printf("Masukan Panjang sisi C: ");
       		scanf("%f",&c);
       		printf("Masukan Panjang sisi D: ");
       		scanf("%f",&d);
	       	keliling = a + b + c + d ;
	       	luas = (a + c) * 1/2 * b ;
	       	printf("__________________________________________\n");
	       	printf("keliling trapesium adalah %.0f\n",keliling);
	       	printf("Luas trapesium adalah %.0f\n",luas);
	       	break;
	       case 5:
	       	printf("Anda telah memilih Lingkaran\n");
         	printf("Masukan ukuran Jari-jari: ");
       		scanf("%f",&jari);
	       	keliling =  2 * jari * 3.14;
	       	luas = jari * jari * 3.14 ;
	       	printf("__________________________________________\n");
	       	printf("keliling lingkaran adalah %.0f\n",keliling);
	       	printf("Luas lingkaran adalah %.0f\n",luas);
	      default:
            printf("__________________________________________\n");
            printf("Maaf, pilihan anda salah\n");
            printf("input yang anda masukan salah\n");
            printf("__________________________________________\n");
	}
	printf("Selesai\n");
	printf("Terimakasih\n");
	printf("__________________________________________\n");
	printf("Apakah Anda Ingin Melanjutkan\n");
	printf("Ketik 1 Untuk Melanjutkan\n");
	printf("Ketik 2 Untuk Keluar\n");
	scanf("%d", &choice2);
	}
	_until (choice2 ==2);
	printf("Terimakasih telah menggunakan program ini\n");
	return(0);
}
