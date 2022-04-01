#include<stdio.h>

int validasiFiboReku(){
	int nilai;
	char check;
	
    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai yang anda masukan tidak valid!\nMasukan ulang: ");
        return validasiFiboReku();
        printf("\n===============================================\n");
	} else if (nilai < 0) {
		printf("\nNilai yang anda masukan tidak valid!\nInput antara 0-100: ");
		return validasiFiboReku();	
		printf("\n===============================================\n");
	} else {
        return nilai;
    }
}

int validasiFiboItera(){
	int nilai;
	char check;
	
    if (scanf("%i%c", &nilai, &check) != 2 || check != '\n') {
    	fflush(stdin);
		printf("\nNilai yang anda masukan tidak valid!\nMasukan ulang: ");
        return validasiFiboItera();
        printf("\n===============================================\n");
	} else if (nilai < 0) {
		printf("\nNilai yang anda masukan tidak valid!\nInput antara 0-100: ");
		return validasiFiboItera();	
		printf("\n===============================================\n");
	} else {
        return nilai;
    }
}

int cetak_pilihan(int pilihan){
	int nilai;
	int n, first = 0, second = 1, result, i;
	
	system("cls");
    
    if (pilihan==1){
			FibonacciReku();
			
			}if (pilihan==2){
			printf("\t\t__________________________________________________________________\n");	
			printf("\t\t ________________________________________________________________\n");
			printf("\t\t||                                                              ||\n");					
			printf("\t\t||                   	Program Fibonacci 	             	||\n");					
			printf("\t\t||..............................................................||\n");					
			printf("\t\t||                    Dengan Metode Iteratif	                ||\n");								
			printf("\t\t||______________________________________________________________||\n");	
			printf("\t\t__________________________________________________________________\n");			
			printf("\nMasukan jumlah bilangan fibonacci: ");	
			
			n=validasiFiboItera();
			
			
	
			  printf("\nHasil Bilangan Fibonaci adalah:  \n");
			  
			  for (i = 0; i < n; i++){
			    if (i <= 1) 
			      result = i;
			    else{
			      result = first + second;
			      first = second;
			      second = result;
			    }
			    printf("%d ", result);
			  } 
			  return 0;
			} 
}

int FibonacciReku(){
		int n, i;
		int j = 0;
		int pilih;
	
			printf("\t\t__________________________________________________________________\n");	
			printf("\t\t ________________________________________________________________\n");
			printf("\t\t||                                                              ||\n");					
			printf("\t\t||                   	Program Fibonacci 	             	||\n");					
			printf("\t\t||..............................................................||\n");					
			printf("\t\t||                    Dengan Metode Rekursif	                ||\n");								
			printf("\t\t||______________________________________________________________||\n");	
			printf("\t\t__________________________________________________________________\n");	
			printf("\nMasukan jumlah bilangan fibonacci: ");	
			
			n=validasiFiboReku();
	
	//output hasil
	printf("\nHasil bilangan fibonacci adalah: \n");
	for (i=1; i<=n; i++) {
		printf("%d  ", menghitungfibonacci(j));
		j++; 
	} 
	ulangi();
}

int menghitungfibonacci (int n){
	if (n<=1) {
		return n;
	} else {
		return (menghitungfibonacci (n-1) + menghitungfibonacci (n-2));
	}
}

int ulangi(){
    char pil[10];
    
	fflush(stdin);
	printf ("\nIngin Kembali ke Program? (y/n) : "); 
	scanf("%s", &pil);
	
	if(!strcmp(pil, "y") || !strcmp(pil, "Y")){
	system("cls");
	main();
	}
	else if(!strcmp(pil, "n") || !strcmp(pil, "N")){
	system("cls");
		printf("\t\t__________________________________________________________________\n");	
			printf("\t\t ________________________________________________________________\n");
			printf("\t\t||                                                              ||\n");					
			printf("\t\t||           TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI          ||\n");						
			printf("\t\t||..............................................................||\n");				
			printf("\t\t||                     	BY KELOMPOK 08	                        ||\n");								
			printf("\t\t||______________________________________________________________||\n");	
			printf("\t\t__________________________________________________________________\n");
	}  
	else{
		printf("Input yang Dimasukkan Salah!\n");
		ulangi();
	}
}

int main(){
	
	int pilihan;
	
	tampilan:
	
	printf("\t\t__________________________________________________________________\n");	
	printf("\t\t ________________________________________________________________\n");
	printf("\t\t||                                                              ||\n");					
	printf("\t\t||                   Program Bilangan Fibonacci	                ||\n");					
	printf("\t\t||..............................................................||\n");					
	printf("\t\t||                     Pilih Pilihan Anda                       ||\n");								
	printf("\t\t||______________________________________________________________||\n");	
	printf("\t\t__________________________________________________________________\n");					
	printf("\t\t* 1.Fibonacci Rekursif\n");															
	printf("\t\t* 2.Fibonacci Iteratif\n");															
	printf("\t\t..................................................................\n");		
	printf("\t\tPilih salah satu yang akan dijalankan : ");
	scanf("%d", &pilihan);
	printf("\t\t..................................................................\n");	
	
	if(pilihan == 1 || pilihan == 2){
	cetak_pilihan(pilihan);
	}else{
	printf("\t\tPilihan tidak tersedia!");
	}

	ulangi();
	
	}

	
	
