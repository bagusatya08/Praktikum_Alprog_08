// C Program for Iterative Tower of Hanoi 
#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 
# include <limits.h> 


//validasipiringan
int validasipiringan() {
    int pringan;
	char hasil;
	
    if (scanf("%i%c", &pringan, &hasil) != 2 || hasil != '\n') {
    	fflush(stdin);
		printf("\nNilai yang anda masukan tidak valid!\nSilakan masukan ulang: ");
		  
        return validasipiringan();
        printf("\n------------------------------------------------------------\n");
	} else if (pringan > 8 && pringan < 1) {
		printf("\nNilai yang anda masukan tidak valid!\nSilakan masukan ulang: ");
		
		return validasipiringan();
        printf("\n------------------------------------------------------------\n");	
	} else {
        return pringan;
    }
}


//validasikeluar
int validasiklr() {
    int pil;
	char hasil;
	
    if (scanf("%i%c", &pil, &hasil) != 2 || hasil != '\n') {
    	fflush(stdin);
		printf("\nPilihan yang anda masukan tidak benar!\nMasukan ulang: ");
        return validasiklr();
        printf("\n------------------------------------------------------\n");
	} else if (pil < 0 || pil >2) {
		printf("\nPilihan yang anda masukan tidak benar!\nPilih 1 atau 2: ");
		return validasiklr();
        printf("\n------------------------------------------------------\n");	
	} else {
        return pil;
    }
}


 


// variabel global
struct Stack 
{ 
	unsigned capacity; 
	int top; 
	int *array; 
}; 
int step = 0;
 
//print header 
void printHeader(){
    printf("\t------------------------------------------------------------------------------------\n");
    printf("\t|                         Aplikasi Menara Hanoi (iteratif)                         |\n");
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
 
// membuat stack berdasarkan kapasitas
struct Stack* createStack(unsigned capacity) 
{ 
    struct Stack* stack = 
        (struct Stack*) malloc(sizeof(struct Stack)); 
    	stack -> capacity = capacity; stack -> top = -1; stack -> array = (int*) malloc(stack -> capacity * sizeof(int)); 
    	return stack; 
	} 
 
// fungsi pengecekan jika stack penuh 
int isFull(struct Stack* stack) 
{ 
return (stack->top == stack->capacity - 1); 
} 
 
// fungsi pengecekan jika stack kosong
int isEmpty(struct Stack* stack) 
{ 
return (stack->top == -1); 
} 
 
// fungsi penambahan item ke stack
void push(struct Stack *stack, int item) 
{ 
    if (isFull(stack)) 
        return; 
    stack -> array[++stack -> top] = item; 
} 
 
// fungsi pengurangan item dari stack
int pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack -> array[stack -> top--]; 
} 
 
//fungsi memindahkan disk
void moveDisk(char asal, char tujuan, int disk) 
{ 
	step = step + 1; 
	printf("\tlangkah %d : Memindahkan pringan %d dari %c ke %c\n",step,disk,asal,tujuan);
    
}
 
// fungsi pemindahan disk
void moveDisksBetweenTwoPoles(struct Stack *A, struct Stack *C, char s, char d) 
{ 
    int pole1TopDisk = pop(A); 
    int pole2TopDisk = pop(C); 
 
    // When pole 1 is empty 
    if (pole1TopDisk == INT_MIN) 
    { 
        push(A, pole2TopDisk); 
        moveDisk(d, s, pole2TopDisk); 
    } 
 
    // When pole2 pole is empty 
    else if (pole2TopDisk == INT_MIN) 
    { 
        push(C, pole1TopDisk); 
        moveDisk(s, d, pole1TopDisk); 
    } 
 
    // When top disk of pole1 > top disk of pole2 
    else if (pole1TopDisk > pole2TopDisk) 
    { 
        push(A, pole1TopDisk); 
        push(A, pole2TopDisk); 
        moveDisk(d, s, pole2TopDisk); 
    } 
 
    // When top disk of pole1 < top disk of pole2 
    else
    { 
        push(C, pole2TopDisk); 
        push(C, pole1TopDisk); 
        moveDisk(s, d, pole1TopDisk); 
    } 
} 
 
//Function to implement TOH puzzle 
void tohIterative(int n, struct Stack 
            *A, struct Stack *B, 
            struct Stack *C) 
{ 
    int i, total_num_of_moves; 
    char s = 'A', d = 'C', a = 'B'; 
 
    //If number of disks is even, then interchange 
    //Cination pole and Biliary pole 
    if (n % 2 == 0) 
    { 
        char temp = d; 
        d = a; 
        a = temp; 
    } 
    total_num_of_moves = pow(2, n) - 1; 
 
    //Larger disks will be pushed first 
    for (i = n; i >= 1; i--) 
        push(A, i); 
 
    for (i = 1; i <= total_num_of_moves; i++) 
    { 
        if (i % 3 == 1) {
        moveDisksBetweenTwoPoles(A, C, s, d); 
		}
        else if (i % 3 == 2){
        moveDisksBetweenTwoPoles(A, B, s, a); 
 		}
        else if (i % 3 == 0){
        moveDisksBetweenTwoPoles(B, C, a, d); 
		}
    }
	 
} 
 


//program utama
int main (){
	while(1){
		printHeader();
		//menerima input n jumlah piringan
		int n,pil;
		printf("\tJumlah piringan : ");
		n = validasipiringan();
		printf("\n");
		
		printf("\t*langkah Memindahkan %d piringan dari A ke C :*\n",n);
		hanoi(n,'A','C','B');
		printf("\t------------------------------------------------------------------------------------\n");
	    printf("\t*        Jumlah langkah minimal memindahkan %d piringan adalah %d %-18s *\n",n,step,"Langkah");
	    printf("\t------------------------------------------------------------------------------------\n");
	    
	    //pengulangan program
		printf("\tIngin menggunakan program lagi (1/2) : \n");
		printf("\t1.Keluar dari Program\n");
		printf("\t2.mengulangi Program\n");
	    printf("\tSilakan input : "); pil = validasiklr();
	    system("cls");
	    
	    if (pil==1){
	    	printf("\n---------------------------------------------------\n");
	    	printf("\nTerimakasih Sudah Mengunjungi Program Kami\n");
	    	printf("\n---------------------------------------------------\n");
	    	system("cls");
	    	exit(0);
	    	
		}else{
			system("cls || clear");
		}
	}
	printf("\t--------------------------------PROGRAM SELESAI-------------------------------------\n");
}
