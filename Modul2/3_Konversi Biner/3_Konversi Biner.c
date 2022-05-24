 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>

 int validasiDesimal();
 int validasiBiner();
 void ulangi();
 int validasiAwal();

int main(){
	
	int pilihan, nilai;
	
	tampilan:
	
	printf("==================================\n");
	printf("       KONVERSI  BILANGAN         \n");
	printf("             OLEH:                \n");
	printf("          KELOMPOK 08             \n");
	printf("==================================\n");		
	printf("* 1.Biner ke Desimal\n");															
	printf("* 2.Desimal ke Biner\n");															
	printf("................................\n");		
	printf("Pilih salah satu yang akan dijalankan : ");
	pilihan=validasiAwal();
	printf(".......................................\n");	
	
	if(pilihan == 1 || pilihan == 2){
   		 cetak_pilihan(pilihan);
	} else {
   		 return nilai;
	}

	ulangi();
	
	}

int validasiAwal() {
    int angka;
	char cek;
	
	    if (scanf("%i%c", &angka, &cek) != 2 || cek != '\n') {
	    	while((cek = getchar()) != '\n' && cek != EOF){
	        }
			printf("\nNilai yang anda masukan tidak valid! Masukan ulang: ");
		    return validasiAwal();
		    printf("\n===============================================\n");
		} else if (angka <= 0 || angka >2) {
			printf("\nNilai yang anda masukan tidak valid! Pilih 1-2: ");
			return validasiAwal();
	        printf("\n===============================================\n");	
		} else {
	        return angka;
	    }
	}

int validasiDesimal(){
	int angka;
	char cek;
	
	    if (scanf("%i%c", &angka, &cek) != 2 || cek != '\n') {
	    	while((cek = getchar()) != '\n' && cek != EOF){
	        }
			printf("\nNilai yang anda masukan tidak valid! Masukan ulang: ");
		    return validasiDesimal();
	        printf("\n===============================================\n");
		} else if (angka < 0) {
			printf("\nNilai yang anda masukan tidak valid! Input antara 0-100: ");
			return validasiDesimal();	
			printf("\n===============================================\n");
		} else {
	        return angka;
	    }
	}   

int validasiBiner(){
	int angka;
	char cek;
	int temp=0;
	
	    if (scanf("%i%c", &angka, &cek) != 2 || cek != '\n') {
	        while((cek = getchar()) != '\n' && cek != EOF){
	        }
		        printf("\nNilai yang anda masukan tidak valid! Masukan ulang: ");
		        return validasiBiner();
		        printf("\n===============================================\n");
	    } else {
	      int a=angka;
	       
	      while (angka != 0) {
	        temp = angka % 10;
	          if ((temp == 0) || (temp == 1)) {
	                      return a;
	              } else {
	                  printf("\nNilai yang anda masukan tidak valid! Input bilangan biner menggunakan 0 dan 1: ");
	            return validasiBiner();	
	            printf("\n===============================================\n");
	              }
	          }
	      }
	   return angka; 
	} 



int cetak_pilihan(int pilihan){
	int biner, desimal, nilai;
	
	system("cls || clear");
    
	    if (pilihan==1){
			 	printf("==================================\n");
				printf("                                  \n");
				printf("         BINER KE DESIMAL         \n");
				printf("                                  \n");
				printf("==================================\n");				
				printf("Masukan bilangan biner: ");
				
				biner=validasiBiner();
				
				int  desimal = 0, base = 1, sisa;  
	 
			    while (biner > 0)  
			    {  
			        sisa = biner % 10;   
			        desimal = desimal + sisa * base;  
			        biner = biner / 10; 
			        base = base * 2;  
			    }  
			    printf("==================================\n");
				printf("                                  \n");
				printf("   Hasil konversi adalah: %d\n", desimal);
				printf("                                  \n");
				printf("==================================\n");	
		
			
		} if (pilihan==2) {
				printf("==================================\n");
				printf("                                  \n");
				printf("         DESIMAL KE BINER         \n");
				printf("                                  \n");
				printf("==================================\n");			
				printf("\t\tMasukan bilangan desimal: ");	
				
				desimal=validasiDesimal();
				int array[10],i;
	
			    for(i=0; desimal>0; i++){
			        array[i]= desimal%2;    
			        desimal = desimal/2;    
			    }
					printf("==================================\n");
					printf("                                  ");
				    printf("\nBilangan biner adalah: ");
			
			    for(i=i-1; i>=0; i--){
			        printf("%d",array[i]); 
			    }
				    printf("\n                                  ");
					printf("\n==================================\n");
				    return 0;
				} else {
					return nilai;
				}
		}
		

void ulangi(){
    char pil[10];
    char cek;
    
		while((cek = getchar()) != '\n' && cek != EOF){
	        }
				printf ("\nIngin Kembali ke Program? (y/n) : "); 
				scanf("%s", pil);
		if(!strcmp(pil, "y") || !strcmp(pil, "Y")){
				system("cls || clear");
				main();
		}else if(!strcmp(pil, "n") || !strcmp(pil, "N")){
				system("cls || clear");
				printf("==================================\n");
				printf("                                  \n");
				printf("         TERIMAKASIH BANYAK        \n");
				printf("                                  \n");
				printf("==================================\n");	
		}else{
				printf("Input yang Dimasukkan Salah!\n");
				ulangi();
		}
	}
