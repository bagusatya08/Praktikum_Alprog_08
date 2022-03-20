#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define _repeat do 
#define _until(CONDITION) while (!(CONDITION)) 

int main(){
    float volume, luas,lebar,panjang,tinggi,sisi,tinggi_prisma;
    float jari;
	int choice, choice2;
	
	_repeat {
    printf("pilihlah salah satu bangun ruang berikut\n" );
	  printf("1.  Tabung\n");
	  printf("2.  Bola\n" );
	  printf("3.  Limas Segiempat\n" );
	  printf("4.  Prisma Segitiga\n" );
	  printf("5.  Kerucut\n"         );
	  printf("Masukan Pilihan Anda: ");
	  scanf("%d",&choice);
    switch(choice)
	      {
	      case 1:
	        printf("Anda telah memilih Tabung \n");
	        printf("Masukan ukuran jari-jari : ");
	        scanf("%f",&jari);
	        printf("Masukan tinggi tabung :");
        	scanf("%f",&tinggi);
       		volume = 3.14 * jari * jari * tinggi;
        	luas = 2 * 3.14 * jari * (jari * tinggi);
         	printf("__________________________________________\n");
	        printf("Volume tabung adalah %.0f\n",volume);
	        printf("luas tabung adalah %.0f\n",luas);
	        break;
	      case 2:
        	printf("Anda telah memilih bola\n");
         	printf("Masukan ukuran jari: ");
       		scanf("%f",&jari);
         	volume = 4/3 * 3.14 * (jari * jari * jari);
         	luas = 4 * 3.14 * (jari*jari);
         	printf("__________________________________________\n");
        	printf("Volume bola adalah %.0f\n",volume);
         	printf("luas bola adalah %.3f\n",luas);
	        break;
	      case 3:
           	printf("Anda telah memilih prisma segiempat\n");
         	printf("Masukan Panjang sisi alas: ");
       		scanf("%f",&sisi);
       		printf("Masukan Tinggi: ");
       		scanf("%f",&tinggi);
         	volume = (sisi * sisi * tinggi) * 1/3 ;
         	luas = 4 * 1/2 * sisi * tinggi + (sisi*sisi);
         	printf("__________________________________________\n");
        	printf("Volume limas segiempat adalah %.0f\n",volume);
         	printf("luas limas segiempat adalah %.0f\n",luas);
	          break;
	       case 4:
	       	printf("Anda telah memilih prisma segitiga\n");
         	printf("Masukan Panjang sisi alas: ");
       		scanf("%f",&sisi);
       		printf("Masukan Tinggi alas: ");
       		scanf("%f",&tinggi);
	       	printf("Masukan Tinggi Prisma: ");
	       	scanf("%f",&tinggi_prisma);
	       	volume = (sisi * tinggi * 1/2 ) * tinggi_prisma;
	       	luas = 2 * (sisi * tinggi / 2) + 3 * (tinggi_prisma * sisi) ;
	       	printf("__________________________________________\n");
	       	printf("Volume prisma segitiga adalah %.0f\n",volume);
	       	printf("Luas prisma segitia adalah %.0f\n",luas);
	       	break;
	       case 5:
	       	printf("Anda telah memilih Kerucut\n");
         	printf("Masukan Jari-jari: ");
       		scanf("%f",&jari);
       		printf("Masukan Tinggi : ");
       		scanf("%f",&tinggi);
	       	volume =  jari * jari * tinggi * 1/3 * 3.14;
	       	luas = 3.14 * jari * ( jari + sqrt(tinggi * tinggi + jari * jari) ) ;
	       	printf("__________________________________________\n");
	       	printf("Volume kerucut adalah %.0f\n",volume);
	       	printf("Luas kerucut adalah %.2f\n",luas);
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
