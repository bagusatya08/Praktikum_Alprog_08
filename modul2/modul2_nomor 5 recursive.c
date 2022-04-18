#include <stdio.h>
#include<stdbool.h>  

int step = 0;

//fungsi print header
void printHeader(){
    printf("\t------------------------------------------------------------------------------------\n");
    printf("\t|                         Aplikasi Menara Hanoi (Rekursif)                          |\n");
    printf("\t------------------------------------------------------------------------------------\n");
}

//fungsi rekursif
void hanoi (int n, char A, char C, char B){
	if (n == 0)
    {
        return;
    }
    hanoi(n - 1, A, B, C);
    step = step + 1;
    printf("\tlangkah %d : Memindahkan pringan %d dari %c ke %c\n",step,n,A,C);
    hanoi(n - 1, B, C, A);
}

//program utama
int main (){
	while(1){
		printHeader();
		//menerima input n jumlah piringan
		int n;
		char pil[2];
		printf("\tJumlah piringan : ");
		scanf("%d",&n);
		printf("\n");
		
		printf("\t**langkah Memindahkan $d piringan dari A ke C :**\n",n);
		hanoi(n,'A','C','B');
		printf("\t------------------------------------------------------------------------------------\n");
	    printf("\t*        Jumlah langkah minimal memindahkan %d piringan adalah %d %-18s *\n",n,step,"Langkah");
	    printf("\t------------------------------------------------------------------------------------\n");
	    
		printf("\tIngin menggunakan program lagi (y/n) : ");
	    scanf("%s", &pil);
	    
	    if (strcmp(pil,"n") == 0){
			break;
		}
		system("cls");
	}
	printf("\t--------------------------------PROGRAM SELESAI-------------------------------------\n");
}
