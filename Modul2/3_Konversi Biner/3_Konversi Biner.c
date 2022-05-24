 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>

 int validasiDesimal();
 int validasiBiner();
 void ulangi();
 int validasiInt();

int main(){
	int pilihan, nilai;
	
	tampilan:
	
	printf("\t\t__________________________________________________________________\n");	
	printf("\t\t ________________________________________________________________\n");
	printf("\t\t||                                                              ||\n");					
	printf("\t\t||                  Program Konversi Bilangan	                ||\n");					
	printf("\t\t||..............................................................||\n");					
	printf("\t\t||                     Pilih Pilihan Anda                       ||\n");								
	printf("\t\t||______________________________________________________________||\n");	
	printf("\t\t__________________________________________________________________\n");					
	printf("\t\t* 1.Biner ke Desimal\n");															
	printf("\t\t* 2.Desimal ke Biner\n");															
	printf("\t\t..................................................................\n");		
	printf("\t\tPilih salah satu yang akan dijalankan : ");
	pilihan=validasiInt();
	printf("\t\t..................................................................\n");	
	
	if(pilihan == 1 || pilihan == 2){
   		cetak_pilihan(pilihan);
	} else {
   		 return nilai;
	}
		ulangi();
	}

int validasiInt() {
    	int nilai;
	char check;
	
		if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
		while((check = getchar()) != '\n' && check != EOF){
			}
			printf("\n\t\tNilai yang anda masukan tidak valid! Masukan ulang: ");
		        return validasiInt();
		        printf("\n\t\t===============================================\n");
		} else if (nilai <= 0 || nilai >2) {
			printf("\n\t\tNilai yang anda masukan tidak valid! Pilih 1-2: ");
			return validasiInt();
	       		printf("\n===============================================\n");	
		} else {
	        	return nilai;
	    }
	}

int validasiDesimal(){
	int nilai;
	char check;
	
	    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
	    	while((check = getchar()) != '\n' && check != EOF){
	        }
			printf("\n\t\tNilai yang anda masukan tidak valid! Masukan ulang: ");
		        return validasiDesimal();
	        	printf("\n===============================================\n");
		} else if (nilai < 0) {
			printf("\n\t\tNilai yang anda masukan tidak valid! Input antara 0-100: ");
			return validasiDesimal();	
			printf("\n===============================================\n");
		} else {
	        	return nilai;
	    }
	}   

int validasiBiner(){
	int nilai;
	char check;
	int temp=0;
	
	    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
	        while((check = getchar()) != '\n' && check != EOF){
	        }
		        printf("\n\t\tNilai yang anda masukan tidak valid! Masukan ulang: ");
		        return validasiBiner();
		        printf("\n===============================================\n");
	    } else {
		      int a=nilai;

		      while (nilai != 0) {
			temp = nilai % 10;
			  if ((temp == 0) || (temp == 1)) {
				      return a;
			     } else {
				printf("\n\t\tNilai yang anda masukan tidak valid! Input bilangan biner menggunakan 0 dan 1: ");
				return validasiBiner();	
			    	printf("\n===============================================\n");
			      }
			  }
		 }
	return nilai; 
} 

int cetak_pilihan(int pilihan){
	int biner, desimal, nilai;
	
	system("cls || clear");
	
	    if (pilihan==1){
		printf("\t\t__________________________________________________________________\n");	
		printf("\t\t ________________________________________________________________\n");
		printf("\t\t||                                                              ||\n");					
		printf("\t\t||                   Program Konversi Bilangan	                ||\n");					
		printf("\t\t||..............................................................||\n");					
		printf("\t\t||                     BINER KE DESIMAL	                        ||\n");								
		printf("\t\t||______________________________________________________________||\n");	
		printf("\t\t__________________________________________________________________\n");			
		printf("\t\tMasukan bilangan biner: ");
				
		biner=validasiBiner();
		int  desimal = 0, base = 1, sisa;  
	 
			    while (biner > 0)  
			    {  
			        sisa = biner % 10;   
			        desimal = desimal + sisa * base;  
			        biner = biner / 10; 
			        base = base * 2;  
			    }  
			    printf("\t\t==================================\n");
				printf("                                  \n");
				printf("\t\t   Hasil konversi adalah: %d\n", desimal);
				printf("                                  \n");
				printf("\t\t==================================\n");	
		
			
	    } if (pilihan==2) {
		printf("\t\t__________________________________________________________________\n");	
		printf("\t\t ________________________________________________________________\n");
		printf("\t\t||                                                              ||\n");					
		printf("\t\t||                   Program Konversi Bilangan	                ||\n");					
		printf("\t\t||..............................................................||\n");					
		printf("\t\t||                     DESIMAL KE BINER	                        ||\n");								
		printf("\t\t||______________________________________________________________||\n");	
		printf("\t\t__________________________________________________________________\n");			
		printf("\t\tMasukan bilangan desimal: ");	
				
		desimal=validasiDesimal();
		int array[10],i;
	
			for(i=0; desimal>0; i++){
			        array[i]= desimal%2;    
			        desimal = desimal/2;    
			    }
				printf("\t\t==================================\n");
				printf("                                  ");
				printf("\n\t\tBilangan biner adalah: ");
			
			    for(i=i-1; i>=0; i--){
			        printf("%d",array[i]); 
			    }
				printf("\n                                  ");
				printf("\n\t\t==================================\n");
				    return 0;
		} else {
			return nilai;
			}
	}
		
void ulangi(){
    char pil[10];
    char check;
    
		while((check = getchar()) != '\n' && check != EOF){
	        }
			printf ("\n\t\tIngin Kembali ke Program? (y/n) : "); 
			scanf("%s", pil);
		if(!strcmp(pil, "y") || !strcmp(pil, "Y")){
			system("cls || clear");
			main();
		}else if(!strcmp(pil, "n") || !strcmp(pil, "N")){
			system("cls || clear");
			printf("\t\t__________________________________________________________________\n");	
			printf("\t\t ________________________________________________________________\n");
			printf("\t\t||                                                              ||\n");					
			printf("\t\t||           TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI          ||\n");						
			printf("\t\t||..............................................................||\n");				
			printf("\t\t||                     	BY KELOMPOK 08	                        ||\n");								
			printf("\t\t||______________________________________________________________||\n");	
			printf("\t\t__________________________________________________________________\n");
		}else{
			printf("\t\tInput yang Dimasukkan Salah!\n");
			ulangi();
		}
	}
